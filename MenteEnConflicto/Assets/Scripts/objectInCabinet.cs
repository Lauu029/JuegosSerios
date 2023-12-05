using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class objectInCabinet : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag.Equals("Cajon"))
        {
            LevelManager.Instance.addObjectSelected();
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.tag.Equals("Cajon"))
        {
            LevelManager.Instance.removeObjectSelected();
        }
    }
}
