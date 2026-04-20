using System;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;


public struct MapEdge2
{
   public int id;
   public bool task;
}
public class Test : MonoBehaviour
{
    public List<MapEdge2> edges;
    void Start()
    {
        edges = new List<MapEdge2>()
        {
            new MapEdge2(){id=1,task=true},
            new MapEdge2(){id=2,task=false},
            new MapEdge2(){id=3,task=true},
            new MapEdge2(){id=4,task=false},
            new MapEdge2(){id=5,task=true},
        };
    }

    public void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {

        }
    }
}