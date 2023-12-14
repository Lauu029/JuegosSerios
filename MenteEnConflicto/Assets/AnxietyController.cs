using FMODUnity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnxietyController : MonoBehaviour
{
    private FMOD.Studio.EventInstance instance;

    public FMODUnity.EventReference fmodEvent;
    
    [SerializeField]
    [Range(0,100)]
    private float anxiety;

    // Start is called before the first frame update
    void Start()
    {
       // anxiety = 0;
        instance = FMODUnity.RuntimeManager.CreateInstance(fmodEvent);
        instance.start();
    }

    // Update is called once per frame
    void Update()
    {
        instance.setParameterByName("AnxietyLevel", anxiety);
    }
}
