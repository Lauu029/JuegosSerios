using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.Content.Interaction;

public class narratorController : MonoBehaviour
{
    public FMODUnity.EventReference fmodEventNarrator;
    private FMOD.Studio.EventInstance narratorEventInstance;
    [SerializeField]
    private Door door = null;
    private bool hasStarted = false;
    [SerializeField]
    private GameObject botonPanico = null;
    void Start()
    {
        narratorEventInstance = FMODUnity.RuntimeManager.CreateInstance(fmodEventNarrator);
        narratorEventInstance.set3DAttributes(FMODUnity.RuntimeUtils.To3DAttributes(gameObject));
        Invoke("PlayAudioWithDelay", 3f);

        if (SceneManager.GetActiveScene().name == "StartScene")
            Invoke("startBotonPanico", 70f);
    }

    // Update is called once per frame
    void Update()
    {
        FMOD.Studio.PLAYBACK_STATE playbackState;
        narratorEventInstance.getPlaybackState(out playbackState);

        if (hasStarted && playbackState == FMOD.Studio.PLAYBACK_STATE.STOPPED)
        {
            if (SceneManager.GetActiveScene().name == "StartScene" && door != null)
                door.changeLock(false);
            else if (SceneManager.GetActiveScene().name == "EndScene")
                GameManager.Instance.changeScene("MainMenu");

        }
    }
    private void PlayAudioWithDelay()
    {
        narratorEventInstance.start();
        hasStarted = true;
    }
    private void startBotonPanico()
    {
        if (botonPanico != null)
            botonPanico.SetActive(true);
    }
}
