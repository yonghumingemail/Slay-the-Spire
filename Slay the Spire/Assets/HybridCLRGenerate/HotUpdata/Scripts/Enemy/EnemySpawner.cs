using System;
using System.Collections.Generic;
using UnityEngine;
using Z_Tools;

public class EnemySpawner : MonoBehaviour
{
    public List<GameObject> enemyList = new List<GameObject>();
    public EventCenter<string> eventCenter { get; private set; } = new EventCenter<string>();

    private void Awake()
    {
        EventCenter_Singleton.Instance.AddEvent<Func<EnemySpawner>>("EnemySpawner", () => this);
    }

    void Start()
    {
        
    }

 
    void Update()
    {
        
    }
}
