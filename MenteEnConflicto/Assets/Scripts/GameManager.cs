using System.Collections;
using System.Collections.Generic;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    private static GameManager instance_;
    
    public GameObject player;

    [SerializeField]
    [Range(0, 100)]
    private float anxiety;

    public GameObject volume;
    private void Awake()
    {
        if (instance_ != null && instance_ != this)
            Destroy(this);
        else
            instance_ = this;
    }

    public static GameManager Instance
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

    }

    // Update is called once per frame
    void Update()
    {
        player.GetComponent<AnxietyController>().setAnxiety(anxiety);
        if (anxiety >= 60)
        {
            volume.SetActive(true);
        }
        else 
            volume.SetActive(false);
    }

    public void changeScene(string SceneName)
    {
        SceneManager.LoadScene(SceneName);
    }
}
