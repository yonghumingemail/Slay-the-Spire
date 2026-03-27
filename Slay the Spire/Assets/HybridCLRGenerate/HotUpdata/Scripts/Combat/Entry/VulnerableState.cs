using System;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using UnityEngine;

public struct VulnerableState : IEntry
{
    public int stack;

    public VulnerableState(int stack)
    {
        this.stack = stack;
    }

    public UniTask Trigger(GameObject sender, [NotNull] GameObject receiver)
    {

        IBuffList buffListObj =receiver.GetComponent<IBuffList>();
        if (buffListObj == null)
        {
            UnityEngine.Debug.LogWarning($"{nameof(Trigger)}: 目标对象 {receiver.name} 缺少 IBuffList 组件");
            return UniTask.CompletedTask;
        }

        int maxStack = 999;
        foreach (var buffObj in buffListObj.GetBuffList())
        {
            if (buffObj.GetType() != typeof(VulnerableState_BuffObj)) continue;
            buffObj.stack = Math.Min(buffObj.stack + stack, maxStack);
            buffListObj.UpdateView(buffObj);
            return UniTask.CompletedTask;
        }

        var buff = new VulnerableState_BuffObj(stack, maxStack,new [] { BuffTag_E.debuff }, receiver);
        buffListObj.AddBuff(buff);
        return UniTask.CompletedTask;
    }

    public string GetDescription()
    {
        return $"给予{stack.ToString()}层易伤\n";
    }
}