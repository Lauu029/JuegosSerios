using System.Collections;
using System.Collections.Generic;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    private static GameManager instance_;

    public GameObject player;
    private CharacterController characterController_;
    bool playerLocked = false;
    private MotionBlur motionBlur_;
    private DepthOfField depthOfField_;
    Transform dest;
    [SerializeField]
    [Range(0, 100)]
    private float anxiety;
    private float timerAddAnxiety;
    private float timerRemoveAnxiety;

    public VolumeProfile volume;
    private void Awake()
    {
        if (instance_ != null && instance_ != this)
            Destroy(this);
        else
        {
            instance_ = this;
            DontDestroyOnLoad(gameObject);
        }
    }

    public static GameManager Instance
    {
        get
        {
            if (instance_ == null)
                Debug.Log("Game Manager is Null");
            return instance_;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        timerAddAnxiety = 0;
        timerRemoveAnxiety = 0;
        characterController_ = player.GetNamedChild("Complete XR Origin Set Up").GetNamedChild("XR Origin").GetComponent<CharacterController>();
    }

    // Update is called once per frame
    void Update()
    {
        player.GetComponent<AnxietyController>().setAnxiety(anxiety);
        if (SceneManager.GetActiveScene().name == "RoomScene")
        {
            timerAddAnxiety += Time.deltaTime;
            if (timerAddAnxiety >= 1)
            {
                timerAddAnxiety = 0;
                if (anxiety <= 100) anxiety++;
            }
        }


        if (anxiety >= 70)
        {
            //volume.SetActive(true);
            volume.TryGet<MotionBlur>(out motionBlur_);
            motionBlur_.intensity.SetValue(new UnityEngine.Rendering.FloatParameter(anxiety / 100));

            volume.TryGet<DepthOfField>(out depthOfField_);
            depthOfField_.active = true;
            depthOfField_.gaussianStart.SetValue(new UnityEngine.Rendering.FloatParameter(0.0f));
            depthOfField_.gaussianEnd.SetValue(new UnityEngine.Rendering.FloatParameter(1 - (anxiety / 100)));
            //if (!playerLocked)
            //    lockPlayer();

        }
        else
        {
            volume.TryGet<MotionBlur>(out motionBlur_);
            volume.TryGet<DepthOfField>(out depthOfField_);
            motionBlur_.intensity.SetValue(new UnityEngine.Rendering.FloatParameter(0));
            depthOfField_.active = false;
            depthOfField_.gaussianEnd.SetValue(new UnityEngine.Rendering.FloatParameter(1000));
            //volume.SetActive(false);
            //if (playerLocked)
            //    unLockPlayer();
        }

        if (characterController_.velocity == Vector3.zero && anxiety > 0)
        {
            timerRemoveAnxiety += Time.deltaTime;
            if (timerRemoveAnxiety >= 1)
            {
                timerRemoveAnxiety = 0;
                anxiety--;
            }
        }

        if (playerLocked)
        {
            player.transform.position = dest.position;
            player.transform.rotation = dest.rotation;
        }

    }

    public void changeScene(string SceneName)
    {
        SceneManager.LoadScene(SceneName);
    }
    private void lockPlayer()
    {
        dest = player.transform;
        playerLocked = true;
    }
    private void unLockPlayer()
    {
        //dest = player.transform;
        playerLocked = false;
    }

    public void addAnxiety()
    {
        anxiety++;
    }
    public void stopGame()
    {
        Application.Quit();
    }
}
