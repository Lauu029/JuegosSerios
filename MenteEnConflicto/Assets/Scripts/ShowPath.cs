using System.Collections;
using System.Collections.Generic;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.AI;

public class ShowPath : MonoBehaviour
{
    private List<GameObject> spherePath;
    private Transform src;
    private Transform dest;

    [SerializeField]
    private GameObject dotPrefab;

    void Start()
    {
        spherePath = new List<GameObject>();
        src = GameObject.Find("XR Origin").transform;
        dest = transform;
    }

    void Update()
    {
        NavMeshPath path = new NavMeshPath();

        if (NavMesh.CalculatePath(src.position, dest.position, 1, path))
        {
            spherePath.ForEach(Destroy);
            spherePath.Clear();
            for (int i = 0; i < path.corners.Length - 1; i++)
            {
                Vector3 currentCorner = path.corners[i];
                Vector3 nextCorner = path.corners[i + 1];

                float distance = Vector3.Distance(currentCorner, nextCorner);

                if (distance > 1)
                {
                    int extraSpheres = (int)(distance / 1);

                    for (int j = 0; j < extraSpheres; j++)
                    {
                        Vector3 pos = Vector3.Lerp(currentCorner, nextCorner, j / (float)extraSpheres);
                        spherePath.Add(Instantiate(dotPrefab, new Vector3(pos.x, pos.y + 0.5f, pos.z), Quaternion.identity));
                    }
                }
                else
                {
                    spherePath.Add(Instantiate(dotPrefab, new Vector3(currentCorner.x, currentCorner.y + 0.5f, currentCorner.z), Quaternion.identity));
                }
            }
        }
    }

    private void Awake()
    {
        this.enabled = false;
    }
}
