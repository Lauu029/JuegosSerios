using System.Collections;
using System.Collections.Generic;
using System.Data.SqlTypes;
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
    private LensDistortion lensDistortion;
    Transform dest;
    [SerializeField]
    [Range(0, 100)]
    private float anxiety;
    private float timerAddAnxiety;
    private float timerRemoveAnxiety;
    private float maxscale = 5.0f;
    private float minscale = 1.0f;
    private float currentScale;
    private bool hasMaxScale = false;
    public VolumeProfile volume;
    private void Awake()
    {
        if (instance_ != null && instance_ != this)
            Destroy(gameObject);
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
        volume.TryGet<LensDistortion>(out lensDistortion);
        lensDistortion.scale.SetValue(new UnityEngine.Rendering.FloatParameter(2.0f));
        lensDistortion.active = false;
    }

    // Update is called once per frame
    void Update()
    {
        volume.TryGet<MotionBlur>(out motionBlur_);
        volume.TryGet<DepthOfField>(out depthOfField_);
        volume.TryGet<LensDistortion>(out lensDistortion);
        player.GetComponent<AnxietyController>().setAnxiety(anxiety);
        if (SceneManager.GetActiveScene().name == "RoomScene" && characterController_.velocity != Vector3.zero)
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
            motionBlur_.intensity.SetValue(new UnityEngine.Rendering.FloatParameter(anxiety / 100));

            depthOfField_.active = true;
            depthOfField_.gaussianStart.SetValue(new UnityEngine.Rendering.FloatParameter(0.0f));
            depthOfField_.gaussianEnd.SetValue(new UnityEngine.Rendering.FloatParameter(1 - (anxiety / 100)));
            lensDistortion.scale.SetValue(new UnityEngine.Rendering.FloatParameter(1 + (anxiety / 100)));
            //if (!playerLocked)
            //    lockPlayer();
        }
        if (anxiety >= 85)
        {
            if (!lensDistortion.active)
            {
                lensDistortion.active = true;
                lensDistortion.scale.SetValue(new UnityEngine.Rendering.FloatParameter(2.0f));
                currentScale = 2.0f;
                hasMaxScale = false;
            }
            if (!hasMaxScale && currentScale <= maxscale)
            {
                currentScale += 0.1f;
            }
            else if (currentScale >= maxscale)
            {
                hasMaxScale = true;
            }
            if (hasMaxScale && currentScale > minscale)
                currentScale -= 0.01f;
            lensDistortion.scale.SetValue(new UnityEngine.Rendering.FloatParameter(currentScale));
        }


        else
        {
            motionBlur_.intensity.SetValue(new UnityEngine.Rendering.FloatParameter(0));
            depthOfField_.active = false;
            depthOfField_.gaussianEnd.SetValue(new UnityEngine.Rendering.FloatParameter(1000));
            if (lensDistortion.active && currentScale < 2.0)
            {
                currentScale += 0.01f;
            }
            lensDistortion.scale.SetValue(new UnityEngine.Rendering.FloatParameter(currentScale));
            if (lensDistortion.active && currentScale >=2.0)
            {
                lensDistortion.active = false;
            }
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
        anxiety = 0;
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
