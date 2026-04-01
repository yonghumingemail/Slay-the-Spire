using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public class EnemySpawner : MonoBehaviour
{
    public List<Enemy> enemyList = new List<Enemy>();
    public EventCenter<string> eventCenter { get; private set; } = new EventCenter<string>();
    private CombatManage _combatManage;

    private void Awake()
    {
        EventCenter_Singleton.Instance.AddEvent<Func<EnemySpawner>>("EnemySpawner", () => this);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Func<UniTask>>("OnRoundEnd",OnRoundEnd,0 );
        for (int i = 0; i < transform.childCount; i++)
        {
            enemyList.Add(transform.GetChild(i).GetComponent<Enemy>());
        }
    }
    void Start()
    {
        _combatManage =   EventCenter_Singleton.Instance.GetEvent<Func<CombatManage>>("CombatManage").Invoke();
    }


    private async UniTask OnRoundEnd()
    {
        foreach (var VARIABLE in enemyList)
        {
            await VARIABLE.ExecuteEntry(_combatManage.RoundCount);
        }

    }
   
 
    void Update()
    {
        
    }
}
