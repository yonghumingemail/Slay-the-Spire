using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public class EnemySpawner : MonoBehaviour
{
    public List<Enemy> enemyList = new List<Enemy>();
    public EventCenter<string> eventCenter { get; private set; } = new EventCenter<string>();

    private void Awake()
    {
        EventCenter_Singleton.Instance.AddEvent<Func<EnemySpawner>>("EnemySpawner", () => this);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Func<UniTask>>("OnRoundEnd",OnRoundEnd,0 );
    }


    private async UniTask OnRoundEnd()
    {
        foreach (var VARIABLE in enemyList)
        {
            await VARIABLE.ExecuteEntry();
        }
    }
    void Start()
    {
        
    }

 
    void Update()
    {
        
    }
}
