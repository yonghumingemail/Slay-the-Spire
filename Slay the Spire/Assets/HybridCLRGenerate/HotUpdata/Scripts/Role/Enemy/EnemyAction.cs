using System;
using Cysharp.Threading.Tasks;
using UnityEngine;

public struct EnemyAction
{
    public int id { get;private set; }
    public string name { get;private set; }
    public IIntent[]  intents{ get;private set; }
    public Func<UniTask> Execute { get;private set; }

    public EnemyAction(int id,string name , IIntent[] intents, Func<UniTask> execute)
    {
        this.id = id;
        this.intents = intents;
        this.name = name;
        Execute = execute;
    }
}
