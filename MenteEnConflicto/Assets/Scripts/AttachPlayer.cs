using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttachPlayer : MonoBehaviour
{
    // Start is called before the first frame update
    void Awake()
    {
        GameObject player = GameObject.Find("XR Origin");
        player.transform.position = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
