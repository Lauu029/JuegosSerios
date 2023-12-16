using FMODUnity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnxietyController : MonoBehaviour
{
    private FMOD.Studio.EventInstance heartInstance;
    private FMOD.Studio.EventInstance breethingInsance;

    public FMODUnity.EventReference fmodEventHeart;
    public FMODUnity.EventReference fmodEventBreathe;

    private float anxiety;

    void Start()
    {
        heartInstance = FMODUnity.RuntimeManager.CreateInstance(fmodEventHeart);
        breethingInsance = FMODUnity.RuntimeManager.CreateInstance(fmodEventBreathe);
        heartInstance.start();
        breethingInsance.start();
    }

    public void setAnxiety(float newAnxiety)
    {
        anxiety = newAnxiety;
        FMODUnity.RuntimeManager.StudioSystem.setParameterByName("AnxietyLevel", anxiety);
    }
}
