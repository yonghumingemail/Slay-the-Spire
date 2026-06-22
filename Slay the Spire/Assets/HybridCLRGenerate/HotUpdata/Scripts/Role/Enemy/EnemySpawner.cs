using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;
using UnityGameFramework.Runtime;
using Z_Tools;

public class EnemySpawner : MonoBehaviour
{
    public List<Enemy> enemyList = new List<Enemy>();
    public EventManager eventCenter { get; private set; } = new EventManager();
    private CombatManage _combatManage;
    private GameObject enemyPrefab;
    [SerializeField] private Vector2 startPos;
    private BoxCollider2D boxCollider2D;

    private void Awake()
    {
        _combatManage = transform.GetComponentInParent<CombatManage>();

         GameEntry.Event.Subscribe<GetObject_EventArgs<EnemySpawner>>(Get);

         GameEntry.Event.SubscribeAsync<OnRoundStart_EN>(OnRoundStart, 5);
         GameEntry.Event.SubscribeAsync<OnRoundEnd_EN>(OnRoundEnd);

        for (int i = 0; i < transform.childCount; i++)
        {
            enemyList.Add(transform.GetChild(i).GetComponent<Enemy>());
        }

        Init().Forget();
    }

    private async UniTask Init()
    {
        boxCollider2D = GetComponent<BoxCollider2D>();
        startPos = boxCollider2D.offset;
        startPos.x += boxCollider2D.size.x / 2;

        enemyPrefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/Enemy/JawWorm.prefab");
        await InstantiateObj(new[] { enemyPrefab });
    }

    private async UniTask InstantiateObj(GameObject[] prefabs)
    {
        foreach (var VARIABLE in prefabs)
        {
            var obj = Instantiate(VARIABLE, transform);
            var enemy = obj.GetComponent<Enemy>();
            if (!enemy) continue;
            obj.SetActive(false);
            await enemy.Initialize();
            enemyList.Add(enemy);
            startPos.x -= enemy.spriteRenderer.bounds.size.x / 2;
            enemy.transform.localPosition = startPos;
            obj.SetActive(true);

        }
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
            await VARIABLE.OnRoundStart(_args.args_int);
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