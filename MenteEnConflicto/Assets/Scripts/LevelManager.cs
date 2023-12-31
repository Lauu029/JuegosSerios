using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.Content.Interaction;

public class LevelManager : MonoBehaviour
{
    public GameObject[] objectsToCollect;
    private int objectsCollected;
    public Door door;
    private static LevelManager instance_;

    [SerializeField]
    private GameObject key = null;

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
                Debug.Log("Level Manager is Null");
            return instance_;
        }
    }
    void Start()
    {
        objectsCollected = 0;
        if (key != null)
        {
            key.AddComponent<Outline>();
            key.GetComponent<Outline>().OutlineMode = Outline.Mode.OutlineAll;
            key.GetComponent<Outline>().OutlineColor = new Color(1.0f, 1.0f, 0.0f);
            key.GetComponent<Outline>().OutlineWidth = 5f;
        }
        if (SceneManager.GetActiveScene().name == "CentroCocotero")
        {
            Outline outline = objectsToCollect[objectsCollected].AddComponent<Outline>();
            outline.OutlineMode = Outline.Mode.OutlineAll;
            outline.OutlineColor = new Color(0.0f, 0.7f, 1.0f);
            outline.OutlineWidth = 5f;
        }
        else if (SceneManager.GetActiveScene().name == "RoomScene")
        {
            door.changeLock(true);

            foreach (GameObject obj in objectsToCollect)
            {
                Outline outline = obj.AddComponent<Outline>();
                outline.OutlineMode = Outline.Mode.OutlineAll;
                outline.OutlineColor = new Color(0.0f, 0.7f, 1.0f);
                outline.OutlineWidth = 5f;
            }
        }
    }

    public void addObjectSelected()
    {
        objectsCollected++;
        Debug.Log("Objects Collected: " + objectsCollected);

        if (SceneManager.GetActiveScene().name == "CentroCocotero")
        {
            PathManager pathManager;
            if (TryGetComponent<PathManager>(out pathManager))
            {
                pathManager.ChangeActualPath();
            }

            if (!everyObjectCollected())
            {
                Outline outline = objectsToCollect[objectsCollected].AddComponent<Outline>();
                outline.OutlineMode = Outline.Mode.OutlineAll;
                outline.OutlineColor = new Color(0.0f, 0.7f, 1.0f);
                outline.OutlineWidth = 5f;
            }
        }

    }

    public void removeObjectSelected()
    {
        objectsCollected--;
        Debug.Log("Objects Collected: " + objectsCollected);
    }

    public int getObjectsCollected()
    {
        return objectsCollected;
    }

    public bool everyObjectCollected()
    {
        return objectsCollected == objectsToCollect.Length;
    }
}
