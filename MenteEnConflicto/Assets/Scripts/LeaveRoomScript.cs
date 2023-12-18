using UnityEngine;
using UnityEngine.SceneManagement;

public class LeaveRoomScript : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            if (SceneManager.GetActiveScene().name == "StartScene")
                GameManager.Instance.changeScene("RoomScene");
            else
            {
                LevelManager levelManager = LevelManager.Instance;

                if (levelManager.everyObjectCollected())
                {
                    if (SceneManager.GetActiveScene().name == "CentroCocotero")
                    {
                        GameManager.Instance.changeScene("EndScene");
                    }
                    else if (SceneManager.GetActiveScene().name == "RoomScene" && !levelManager.door.isLocked())
                    {
                        GameManager.Instance.changeScene("CentroCocotero");
                    }
                }

            }
        }
    }
}
