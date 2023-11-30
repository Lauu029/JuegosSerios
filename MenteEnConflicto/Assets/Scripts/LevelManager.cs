using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    private int totalObjects = 1;
    private int objectsCollected;
    private bool canChangeScene;
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
        Debug.Log("Objects Collected: " + objectsCollected);
        if (objectsCollected == totalObjects)
        {
            canChangeScene = true;
        }
    }
    public void tryLeaveRoom()
    {
        if (canChangeScene)
        { 
            gameManager.changeScene("CentroCocotero");
        }
        else
        {
            Debug.Log("Player has not collected all objects");
        }
    }
}
