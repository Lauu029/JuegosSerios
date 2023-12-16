using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Content.Interaction;
using static UnityEngine.ParticleSystem;

public class narratorController : MonoBehaviour
{
    public FMODUnity.EventReference fmodEventNarrator;
    private FMOD.Studio.EventInstance narratorEventInstance;
    [SerializeField]
    private Door door;
    // Start is called before the first frame update
    void Start()
    {
        door.changeLock(true);
        narratorEventInstance = FMODUnity.RuntimeManager.CreateInstance(fmodEventNarrator);
        Invoke("PlayAudioWithDelay", 3f);
    }

    // Update is called once per frame
    void Update()
    {
        FMOD.Studio.PLAYBACK_STATE playbackState;
        narratorEventInstance.getPlaybackState(out playbackState);

        if (playbackState == FMOD.Studio.PLAYBACK_STATE.STOPPED)
        {
            door.changeLock(false);            
        }
        Debug.Log("Estado de reproducción: " + playbackState);
    }
    private void PlayAudioWithDelay()
    {
        // Reproduce el evento
        Debug.Log("Reproduciendo audio");
        narratorEventInstance.start();
    }
}
