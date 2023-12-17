using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeaveRoomScript : MonoBehaviour
{
    [SerializeField]
    private GameObject pickUpText;
    [SerializeField]
    private GameObject keyText;
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
        if (other.gameObject.tag == "Player")
        {
            LevelManager.Instance.tryLeaveRoom();
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if(other.gameObject.tag == "Player")
        {
            pickUpText.SetActive(false);
            keyText.SetActive(false);
        }
    }
}
