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
    public FadeScreen fadeScreen;


    private MotionBlur motionBlur_;
    private DepthOfField depthOfField_;
    private LensDistortion lensDistortion;
    private float maxscale = 5.0f;
    private float minscale = 1.0f;
    private float currentScale;
    private bool hasMaxScale = false;
    public VolumeProfile volume;

    [SerializeField]
    [Range(0, 100)]
    private float anxiety;
    private float timerAddAnxiety = 0;
    private float timerRemoveAnxiety = 0;
    private float timerAnxietyAttack = 0;
    private bool anxietyAttack = false;

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

    void Start()
    {
        timerAddAnxiety = 0;
        timerRemoveAnxiety = 0;
        characterController_ = player.GetNamedChild("Complete XR Origin Set Up").GetNamedChild("XR Origin").GetComponent<CharacterController>();
        volume.TryGet<LensDistortion>(out lensDistortion);
        lensDistortion.scale.SetValue(new UnityEngine.Rendering.FloatParameter(2.0f));
        lensDistortion.active = false;
    }

    void Update()
    {
        if (SceneManager.GetActiveScene().name == "RoomScene")
        {
            if (Input.GetKeyDown(KeyCode.Escape))
            {
                stopGame();
            }
        }

        player.GetComponent<AnxietyController>().setAnxiety(anxiety);
        Debug.Log(anxiety);

        //Sumar ansiedad en roomscene
        if (SceneManager.GetActiveScene().name == "RoomScene")
        {
            timerAddAnxiety += Time.deltaTime;
            if (timerAddAnxiety >= 0.5)
            {
                timerAddAnxiety = 0;
                addAnxiety();
            }
        }

        removeAnxiety();

        volume.TryGet<MotionBlur>(out motionBlur_);
        volume.TryGet<DepthOfField>(out depthOfField_);
        volume.TryGet<LensDistortion>(out lensDistortion);

        if (anxiety >= 70)
        {
            motionBlur_.intensity.SetValue(new UnityEngine.Rendering.FloatParameter(anxiety / 100));

            depthOfField_.active = true;
            depthOfField_.gaussianStart.SetValue(new UnityEngine.Rendering.FloatParameter(0.0f));
            depthOfField_.gaussianEnd.SetValue(new UnityEngine.Rendering.FloatParameter(1 - (anxiety / 100)));
            lensDistortion.scale.SetValue(new UnityEngine.Rendering.FloatParameter(1 + (anxiety / 100)));
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

            if (lensDistortion.active && currentScale >= 2.0)
            {
                lensDistortion.active = false;
            }
        }

    }

    public void changeScene(string SceneName)
    {
        anxiety = 0;
        instance_.StartCoroutine(changeSceneRoutine(SceneName));
    }

    private IEnumerator changeSceneRoutine(string SceneName)
    {
        instance_.fadeScreen.FadeOut();
        yield return new WaitForSeconds(instance_.fadeScreen.fadeDuration);
        SceneManager.LoadScene(SceneName);
        instance_.fadeScreen.FadeIn();
    }

    public void addAnxiety()
    {
        if (anxietyAttack) return;

        if (anxiety < 100)
        {
            anxiety++;
            if (anxiety >= 100) anxietyAttack = true;
        }
    }

    public void removeAnxiety()
    {
        if (!anxietyAttack) return;


        if (timerAnxietyAttack >= 5.0)
        {
            if (anxiety > 10)
            {
                if (characterController_.velocity == Vector3.zero)
                {
                    timerRemoveAnxiety += Time.deltaTime;
                    if (timerRemoveAnxiety >= 0.1)
                    {
                        timerRemoveAnxiety = 0;
                        anxiety--;
                    }
                }
            }
            else
            {
                anxietyAttack = false;
                timerAnxietyAttack = 0;
            }
        }
        else
        {
            timerAnxietyAttack += Time.deltaTime;
        }
    }

    public int getAnxiety()
    {
        return (int)anxiety;
    }

    public void stopGame()
    {
        Application.Quit();
    }
}
