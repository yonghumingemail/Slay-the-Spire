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

        EventCenter_Singleton.Instance._priorityQueueEventCenter.SubscribeAsync(OnRoundStart_EventArgs.id, OnRoundStart, 5);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.SubscribeAsync(OnRoundEnd_EventArgs.id, OnRoundEnd, 0);

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
    private async UniTask OnRoundEnd(object sender, BaseEventArgs args)
    {
        if (args is not OnRound_EventArgs _args) return;
        foreach (var VARIABLE in enemyList)
        {
          await  VARIABLE.OnRoundStart(_args.args_int);
        }

    }

    private async UniTask OnRoundStart(object sender, BaseEventArgs args)
    {
        if (args is not OnRound_EventArgs _args) return;
        
        //通知所有敌人玩家回合开始（显示意图）
        foreach (var VARIABLE in enemyList)
        {
            await VARIABLE.OnPlayerRoundStart(_combatManage.RoundCount);
        }

    }
}