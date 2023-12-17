using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LeaveRoomScript : MonoBehaviour
{
    [SerializeField]
    private GameObject pickUpText = null;
    [SerializeField]
    private GameObject keyText = null;
    bool canTryLeave = true;
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
        if (SceneManager.GetActiveScene().name == "CentroCocotero")
        {
            if(LevelManager.Instance.hasCollectedAllObjects())
                GameManager.Instance.changeScene("EndScene");

        }
        if (other.gameObject.tag == "Player")
        {
            LevelManager.Instance.tryLeaveRoom();
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            if (pickUpText != null)
                pickUpText.SetActive(false);
            if (keyText != null)
                keyText.SetActive(false);
        }
    }
}
