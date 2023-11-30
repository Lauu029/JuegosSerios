using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class keyboardMovement : MonoBehaviour
{
    public float velocidad = 0.5f;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        Vector3 movimiento = new Vector3(h, 0.0f, v);
        movimiento.Normalize();
        movimiento *= velocidad * Time.deltaTime;

        transform.position += movimiento;
    }
}
