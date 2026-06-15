using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;
using UnityGameFramework.Runtime;
using Z_Tools;

public class CombatManage : MonoBehaviour
{
    public int RoundCount => roundCount;
    [SerializeField] private int roundCount;

    public Queue<Card> executeQueue = new Queue<Card>();
    public bool isExecute = false;

    [SerializeField] private int MonsterRoomCount;

    private void Awake()
    {
        GameEntry.Event.Subscribe<GetObject_EventArgs<CombatManage>>(Get);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Q))
        {
            OnRoundStart().Forget();
        }
    }


    private void Get(object send, GameEventArgs gameEventHandler)
    {
        if (gameEventHandler is Args_T args)
        {
            args.value = this;
        }
    }

    public void AddCardToExecuteQueue(Card action)
    {
        executeQueue.Enqueue(action);
        if (!isExecute)
        {
            ExecuteQueue().Forget();
        }
    }

    private async UniTask ExecuteQueue()
    {
        isExecute = true;
        bool isTrigger = false;
        while (executeQueue.Count != 0)
        {
            Card current = executeQueue.Dequeue();
            isTrigger = await current.Trigger(CancellationToken.None) || isTrigger;
        }

        isExecute = false;
    }


    public async UniTask OnRoundStart()
    {
        roundCount++;
        await Action_Int_Async.Fire<OnRoundStart_EN>(roundCount, this);
    }
}