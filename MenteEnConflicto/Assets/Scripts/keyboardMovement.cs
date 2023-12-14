using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class keyboardMovement : MonoBehaviour
{
    public float velocidad = 0.5f;
    private CharacterController _myCharacterController;
    // Start is called before the first frame update
    void Start()
    {
        _myCharacterController = GetComponent<CharacterController>();
    }

    // Update is called once per frame
    void Update()
    {
        float h = Input.GetAxisRaw("Vertical");
        float v = Input.GetAxisRaw("Horizontal");

        Vector3 movimiento = new Vector3(h, 0.0f, v);
        movimiento.Normalize();
        movimiento *= velocidad * Time.deltaTime;

        _myCharacterController.Move(movimiento);
    }
}
