using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloseStore : MonoBehaviour
{

    private LevelManager levelManager;
    private FMODUnity.StudioEventEmitter emitter;

    void Start()
    {
        emitter = GetComponent<FMODUnity.StudioEventEmitter>();
        levelManager = LevelManager.Instance;
    }

    void Update()
    {
        if (levelManager.everyObjectCollected())
            emitter.EventInstance.setParameterByNameWithLabel("EstadoTienda", "Cierre");
    }
}
