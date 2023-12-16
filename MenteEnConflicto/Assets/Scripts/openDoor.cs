using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class openDoor : MonoBehaviour
{
    public FMODUnity.EventReference fmodEvent;
    private FMOD.Studio.EventInstance openDoorEventInstance;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void playSound()
    {
        openDoorEventInstance = FMODUnity.RuntimeManager.CreateInstance(fmodEvent);
        openDoorEventInstance.set3DAttributes(FMODUnity.RuntimeUtils.To3DAttributes(gameObject));
        openDoorEventInstance.start();
    }
}
