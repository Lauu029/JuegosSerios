using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TryLeaveRoom : MonoBehaviour
{
    [SerializeField]
    private GameObject pickUpText = null;
    [SerializeField]
    private GameObject keyText = null;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            if (SceneManager.GetActiveScene().name == "RoomScene")
            {
                LevelManager levelManager = LevelManager.Instance;

                if (levelManager.everyObjectCollected())
                {
                    if (levelManager.door.isLocked())
                        keyText.SetActive(true);
                }
                else
                {
                    pickUpText.SetActive(true);
                }
            }

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
