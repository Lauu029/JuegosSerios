using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class collidePlayer : MonoBehaviour
{
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.CompareTag("Player"))
        {
            GameManager.Instance.addAnxiety();
        }
    }
}
