using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public class EnemySpawner : MonoBehaviour
{
    public List<Enemy> enemyList = new List<Enemy>();
    public EventManage eventCenter { get; private set; } = new EventManage();
    private CombatManage _combatManage;


    private void Awake()
    {
        _combatManage = transform.GetComponentInParent<CombatManage>();
        
        EventCenter_Singleton.Instance.Subscribe(GetObject_EventArgs<EnemySpawner>.id, Get);

        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Func<int, UniTask>>("OnRoundEnd", OnRoundEnd, 0);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Func<int, UniTask>>("OnRoundStart", OnRoundStart, 5);

        for (int i = 0; i < transform.childCount; i++)
        {
            enemyList.Add(transform.GetChild(i).GetComponent<Enemy>());
        }
    }
    private void Get(object send, BaseEventArgs baseEventHandler)
    {
        GetObject_EventArgs<EnemySpawner>.Subscribe(baseEventHandler, this);
    }
    void Start()
    {
       
    }


    /// <summary>
    /// 点击回合结束后，顺序通知所有怪物回合开始
    /// </summary>
    private async UniTask OnRoundEnd(int roundCount)
    {
        foreach (var VARIABLE in enemyList)
        {
            await VARIABLE.OnRoundStart(_combatManage.RoundCount);
        }
    }

    private async UniTask OnRoundStart(int roundCount)
    {
        //通知所有敌人玩家回合开始（显示意图）
        foreach (var VARIABLE in enemyList)
        {
            await VARIABLE.OnPlayerRoundStart(_combatManage.RoundCount);
        }
    }
}