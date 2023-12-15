using System.Collections;
using System.Collections.Generic;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.AI;

public class ShowPath : MonoBehaviour
{

    private TrailRenderer trailRenderer;

    [SerializeField]
    private Transform target;
    void Start()
    {
        trailRenderer = gameObject.GetComponent<TrailRenderer>();
    }


    void Update()
    {
        NavMeshPath path = new NavMeshPath();

        if (NavMesh.CalculatePath(target.position, transform.position, 1, path))
        {
            trailRenderer.Clear();

            for (int i = 0; i < path.corners.Length - 1; i++)
            {
                trailRenderer.AddPosition(path.corners[i]);
            }
        }

    }
}
