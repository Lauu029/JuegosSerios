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
    
    [SerializeField]
    [Range(0,100)]
    private float anxiety;

    // Start is called before the first frame update
    void Start()
    {
        // anxiety = 0;
        heartInstance = FMODUnity.RuntimeManager.CreateInstance(fmodEventHeart);
        breethingInsance = FMODUnity.RuntimeManager.CreateInstance(fmodEventBreathe);
        heartInstance.start();
        breethingInsance.start();
    }

    // Update is called once per frame
    void Update()
    {
        heartInstance.setParameterByName("AnxietyLevel", anxiety);
        breethingInsance.setParameterByName("AnxietyLevel", anxiety);
    }
}
