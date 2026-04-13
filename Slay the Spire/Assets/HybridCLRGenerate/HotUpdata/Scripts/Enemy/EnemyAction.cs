using System;
using Cysharp.Threading.Tasks;
using UnityEngine;

public struct EnemyAction
{
    public int id;
    public string name;
    public IIntent[]  intents;
    public Func<UniTask> Execute;

    public EnemyAction(int id,string name , IIntent[] intents, Func<UniTask> execute)
    {
        this.id = id;
        this.intents = intents;
        this.name = name;
        Execute = execute;
    }
}
