using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;
using Z_Tools;

public class EnemySpawner : MonoBehaviour
{
    public List<Enemy> enemyList = new List<Enemy>();
    public EventManage eventCenter { get; private set; } = new EventManage();
    private CombatManage _combatManage;
    private GameObject enemyPrefab;

    private void Awake()
    {
        _combatManage = transform.GetComponentInParent<CombatManage>();
        
        EventCenter_Singleton.Instance.Subscribe<GetObject_GEA<EnemySpawner>>( Get);

        EventCenter_Singleton.Instance._priorityQueueEventCenter.SubscribeAsync<OnRoundStart_EventArgs>( OnRoundStart, 5);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.SubscribeAsync<OnRoundEnd_EventArgs>(OnRoundEnd, 0);

        for (int i = 0; i < transform.childCount; i++)
        {
            enemyList.Add(transform.GetChild(i).GetComponent<Enemy>());
        }
        Init().Forget();
    }

    private async UniTask Init()
    {
        enemyPrefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/Enemy/Enemy.prefab");
        var obj = Instantiate(enemyPrefab,transform);
        var jawWorm = obj.AddComponent<JawWorm>();
        await jawWorm.Init();
        enemyList.Add(jawWorm);
    }
    private void Get(object send, GameEventArgs gameEventHandler)
    {
        if (gameEventHandler is Args_T args)
        {
            args.value = this;
        }
    }


    /// <summary>
    /// 点击回合结束后，顺序通知所有怪物回合开始
    /// </summary>
    private async UniTask OnRoundEnd(object sender, GameEventArgs args)
    {
        if (args is not Action_Int_Async _args) return;
        foreach (var VARIABLE in enemyList)
        {
          await  VARIABLE.OnRoundStart(_args.args_int);
        }

    }

    private async UniTask OnRoundStart(object sender, GameEventArgs args)
    {
        if (args is not Action_Int_Async _args) return;
        
        //通知所有敌人玩家回合开始（显示意图）
        foreach (var VARIABLE in enemyList)
        {
            await VARIABLE.OnPlayerRoundStart(_combatManage.RoundCount);
        }

    }
}