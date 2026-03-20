using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public class CombatManage : MonoBehaviour
{
    public int roundCount;

    public Queue<Card> executeQueue = new Queue<Card>();
    public bool isExecute;
    public bool isPlayerTurn;

    private void Awake()
    {
        EventCenter_Singleton.Instance.AddEvent<Func<CombatManage>>("CombatManage",Get);

        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Action>("PlayerRoundEnded", PlayerRoundEnded,
            -1);
    }

    private CombatManage Get()
    {
        return this;
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
            var current = executeQueue.Dequeue();
            isTrigger = await current.Trigger(CancellationToken.None) || isTrigger;
        }

        isExecute = false;
    }

    public void PlayerRoundEnded()
    {
        isPlayerTurn = false;
    }

    public void PlayerTurnStart()
    {
        roundCount++;
        isPlayerTurn = true;
        var actions = EventCenter_Singleton.Instance._priorityQueueEventCenter.GetEvent("PlayerTurnStart");
        foreach (var VARIABLE in actions)
        {
            (VARIABLE._delegate as Action<int>)?.Invoke(roundCount);
        }
    }
}