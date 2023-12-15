using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Content.Interaction;

public class unlockDoor : MonoBehaviour
{
    public Door door;
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
        if (other.gameObject.tag == "Key")
            Debug.Log("Key Entered");
        { 
            door.changeLock(false);
        }
    }
    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Key")
        { 
            door.changeLock(true);
        }
    }
}
