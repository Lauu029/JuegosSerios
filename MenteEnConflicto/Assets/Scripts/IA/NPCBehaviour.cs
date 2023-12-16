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
    [Range(0, 100)]
    private float rangeVision = 10.0f;

    [SerializeField]
    [Range(0, 360)]
    private float angleVision = 75.0f;

    private Transform headTransform;

    private float lookCont = 0.0f;

    void Start()
    {
        navMeshAgent = GetComponent<NavMeshAgent>();
        player = GameObject.Find("XR Origin");
        headTransform = transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0).GetChild(0).GetChild(2).GetChild(0);
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
        if (Vector3.Distance(player.transform.position, transform.position) > rangeVision) return;
        if (Vector3.Angle(transform.forward, player.transform.position - transform.position) > angleVision) return;

        headTransform.LookAt(new Vector3(player.transform.position.x, headTransform.position.y, player.transform.position.z));

        lookCont += Time.deltaTime;

        if (lookCont > 1.0f)
        {
            lookCont = 0.0f;
            GameManager.Instance.addAnxiety();
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.CompareTag("Player"))
        {
            GameManager.Instance.addAnxiety();
        }
    }
}

