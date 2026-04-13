using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public class CombatManage : MonoBehaviour
{
    public int RoundCount => roundCount;
    [SerializeField] private int roundCount;

    public Queue<Card> executeQueue = new Queue<Card>();
    public bool isExecute = false;

    private void Awake()
    {
        EventCenter_Singleton.Instance.AddEvent<Func<CombatManage>>("CombatManage", Get);


    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Q))
        {
            OnRoundStart().Forget();
        }
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
            Card current = executeQueue.Dequeue();
            isTrigger = await current.Trigger(CancellationToken.None) || isTrigger;
        }

        isExecute = false;
    }



    public async UniTaskVoid OnRoundStart()
    {
        roundCount++;
        var actions = EventCenter_Singleton.Instance._priorityQueueEventCenter.GetEvent("OnRoundStart");
        foreach (var VARIABLE in actions)
        {
            await (VARIABLE._delegate as Func<int, UniTask>).Invoke(roundCount);
        }
    }
}