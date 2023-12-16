using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Content.Interaction;

public class LevelManager : MonoBehaviour
{
    public GameObject[] objectsToCollect;
    private int objectsCollected;
    private bool canChangeScene;
    public Door door;
    private static LevelManager instance_;
    private GameManager gameManager;

    private void Awake()
    {
        if (instance_ != null && instance_ != this)
            Destroy(this);
        else
            instance_ = this;
    }

    public static LevelManager Instance
    {
        get
        {
            if (instance_ == null)
                Debug.Log("Game Manager is Null");
            return instance_;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        gameManager = GameManager.Instance;
        objectsCollected = 0;
        canChangeScene = false;
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void addObjectSelected()
    {
        objectsCollected++;

        PathManager pathManager;
        if(TryGetComponent<PathManager>(out pathManager))
        {
            pathManager.ChangeActualPath();
        }

        Debug.Log("Objects Collected: " + objectsCollected);
        if (objectsCollected == objectsToCollect.Length)
        {
            canChangeScene = true;
        }
    }
    public void removeObjectSelected()
    {
        objectsCollected--;
        Debug.Log("Objects Collected: " + objectsCollected);
    }
    public void tryLeaveRoom()
    {
        if (canChangeScene && !door.isLocked())
        { 
            gameManager.changeScene("CentroCocotero");
        }
        else
        {
            Debug.Log("Player has not collected all objects");
        }
    }

    public int getObjectsCollected()
    {
        return objectsCollected;
    }
}
