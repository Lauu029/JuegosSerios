using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class NPCBehaviour : MonoBehaviour
{
    private NavMeshAgent navMeshAgent;

    private GameObject player;

    [SerializeField]
    private float radius = 40.0f;

    [SerializeField]
    private float rangeVision = 10.0f;

    void Start()
    {
        navMeshAgent = GetComponent<NavMeshAgent>();
        player = GameObject.Find("XR Origin");
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
        if (Vector3.Distance(player.transform.position, transform.position) < rangeVision && Vector3.Angle(transform.forward, player.transform.position - transform.position) < 45)
            transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0).GetChild(0).GetChild(2).rotation = Quaternion.LookRotation(player.transform.position - transform.position, Vector3.up);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.CompareTag("Player"))
        {
            GameManager.Instance.addAnxiety();
        }
    }
}

