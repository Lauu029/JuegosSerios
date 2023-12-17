using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Android;
using UnityEngine.XR.Content.Interaction;

public class Spawner : MonoBehaviour
{
    [SerializeField]
    private GameObject[] people;
    [SerializeField]
    private int minPepole = 10;
    private int maxPeople;

    [SerializeField]
    [Range(0.0f, 100.0f)]
    private float minSpawnTime = 5.0f;

    [SerializeField]
    [Range(0.0f, 100.0f)]
    private float maxSpawnTime = 10.0f;

    [SerializeField]
    private float spawnRadius = 10.0f;

    void Start()
    {
        StartCoroutine(Spawn());
    }

    private IEnumerator Spawn()
    {
        maxPeople = GameManager.Instance.getAnxiety() + minPepole;

        if (transform.childCount > maxPeople)
        {
            int i = transform.childCount - 1;
            for (; i >= maxPeople; i--)
                Destroy(transform.GetChild(i).gameObject);

        }
        else if (transform.childCount < maxPeople)
        {
            NavMeshHit hit;
            Vector3 spawnPoint;
            do
            {
                spawnPoint = Random.insideUnitSphere * spawnRadius;
                spawnPoint += transform.position;
            } while (!NavMesh.SamplePosition(spawnPoint, out hit, spawnRadius, 1));

            Instantiate(people[Random.Range(0, people.Length)], hit.position, Quaternion.identity, transform);
        }

        yield return new WaitForSeconds(Random.Range(minSpawnTime, maxSpawnTime));

        StartCoroutine(Spawn());
    }
}
