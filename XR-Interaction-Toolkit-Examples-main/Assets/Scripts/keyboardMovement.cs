using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class keyboardMovement : MonoBehaviour
{
    public float velocidad = 0.5f;
    CharacterController cC;
    // Start is called before the first frame update
    void Start()
    {
        cC = gameObject.GetComponent<CharacterController>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        Vector3 movimiento = new Vector3(h * velocidad, 0.0f, v * velocidad);
        cC.Move(movimiento);
        //transform.rotation = Quaternion.LookRotation(new Vector3(movimiento.x, 0, movimiento.z));
        //cC.transform.Rotate(movimiento);
    }
}
