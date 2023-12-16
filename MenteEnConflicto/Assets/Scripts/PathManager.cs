using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PathManager : MonoBehaviour
{
    [SerializeField]
    private ShowPath[] paths;

    public void ChangeActualPath()
    {
        int actualObjects = LevelManager.Instance.getObjectsCollected();
        paths[actualObjects - 1].enabled = false;

        if(actualObjects < paths.Length)
        {
            paths[actualObjects].enabled = true;        
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        paths[0].enabled = true;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
