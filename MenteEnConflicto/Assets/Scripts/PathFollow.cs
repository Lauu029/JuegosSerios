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
        gameObject.AddComponent<BoxCollider>();
    }

    void Update()
    {
        if (!navMeshAgent.pathPending && navMeshAgent.remainingDistance < 0.5f)
        {
            Vector3 randomDirection = Random.insideUnitSphere * radius;
            randomDirection.y = 0;

            randomDirection += transform.position;

            NavMeshHit hit;

            if (NavMesh.SamplePosition(randomDirection, out hit, radius, 1))
                navMeshAgent.destination = hit.position;

        }
    }

    void onCollision(Collision collision)
    {
        navMeshAgent.destination = transform.position;
    }

}
