using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerController : MonoBehaviour
{
    private static playerController instance_;
    // Start is called before the first frame update
    void Awake()
    {
        if (instance_ != null && instance_ != this)
            Destroy(this);
        else
        {
            instance_ = this;
            DontDestroyOnLoad(gameObject);
        }
    }

    public static playerController Instance
    {
        get
        {
            if (instance_ == null)
                Debug.Log("Player is Null");
            return instance_;
        }
    }
    // Update is called once per frame
    void Update()
    {

    }
}
