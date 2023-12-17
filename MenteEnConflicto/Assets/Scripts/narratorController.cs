using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Content.Interaction;

public class narratorController : MonoBehaviour
{
    public FMODUnity.EventReference fmodEventNarrator;
    private FMOD.Studio.EventInstance narratorEventInstance;
    [SerializeField]
    private Door door;
    private bool hasStarted = false;
    public GameObject botonPanico;
    // Start is called before the first frame update
    void Start()
    {
        botonPanico.SetActive(false);
        door.changeLock(false);
        narratorEventInstance = FMODUnity.RuntimeManager.CreateInstance(fmodEventNarrator);
        narratorEventInstance.set3DAttributes(FMODUnity.RuntimeUtils.To3DAttributes(gameObject));
        Invoke("PlayAudioWithDelay", 3f);
        Invoke("startBotonPanico", 70f);
    }

    // Update is called once per frame
    void Update()
    {
        FMOD.Studio.PLAYBACK_STATE playbackState;
        narratorEventInstance.getPlaybackState(out playbackState);

        if (hasStarted && playbackState == FMOD.Studio.PLAYBACK_STATE.STOPPED)
        {
            door.changeLock(false);
        }
        Debug.Log("Estado de reproducci�n: " + playbackState);
    }
    private void PlayAudioWithDelay()
    {
        narratorEventInstance.start();
        hasStarted = true;
    }
    private void startBotonPanico()
    {
        botonPanico.SetActive(true);
    }
}
