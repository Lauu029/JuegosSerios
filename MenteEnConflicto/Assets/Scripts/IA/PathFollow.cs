using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PathFollow : MonoBehaviour
{
    private NavMeshAgent navMeshAgent;

    [SerializeField]
    private float radius = 10.0f;

    void Start()
    {
        navMeshAgent = gameObject.AddComponent<NavMeshAgent>();
    }

    void Update()
    {
        if ((!navMeshAgent.pathPending && navMeshAgent.remainingDistance < 0.5f) || navMeshAgent.velocity.magnitude < 0.5f)
        {
            Vector3 randomDirection = Random.insideUnitSphere * radius + transform.position;
            navMeshAgent.SetDestination(randomDirection);
        }
    }
}
