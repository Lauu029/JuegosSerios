using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PathFollow : MonoBehaviour
{
    private NavMeshAgent navMeshAgent;

    [SerializeField]
    private float radius = 40.0f;

    void Start()
    {
        navMeshAgent = GetComponent<NavMeshAgent>();
    }

    void Update()
    {
        if (!navMeshAgent.pathPending && navMeshAgent.remainingDistance < 0.5f)
        {
            Vector3 randomDirection = Random.insideUnitSphere * radius + transform.position;
            NavMeshHit hit;
            if (NavMesh.SamplePosition(randomDirection, out hit, radius, 1))
                navMeshAgent.SetDestination(hit.position);

        }
    }

    void LateUpdate()
    {
        transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0).GetChild(0).GetChild(2).LookAt(new Vector3(0, 0, 0));
    }
}
