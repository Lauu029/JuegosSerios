using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cambioDeEscenas : MonoBehaviour
{
    public GameManager gm;
    public string nextScene;
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
        if (other.tag == "Player")
        {
            gm.changeScene(nextScene);
        }
    }
}
