using System;
using System.Text;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using UnityEngine;

public struct GainPower : ICardEntry
{
    public int stack;
    private StringBuilder description;
    public GainPower(int stack)
    {
        this.stack = stack;
        description=new StringBuilder();
        
    }

    public UniTask Trigger(GameObject sender, [NotNull] GameObject receiver)
    {
        IEventCenterObject<string> eventCenter = receiver.GetComponent<IEventCenterObject<string>>();
        IBuffList buffListObj = eventCenter?.eventCenter.GetEvent<Func<IBuffList>>("IBuffList")?.Invoke();
        if (buffListObj == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IBuffList 组件");
            return UniTask.CompletedTask;
        }

        PriorityQueueEventCenter priorityEventCenter = eventCenter?.eventCenter
            .GetEvent<Func<PriorityQueueEventCenter>>("PriorityQueueEventCenter")?.Invoke();
        if (priorityEventCenter == null)
        {
            Debug.LogWarning($"目标对象 {receiver.name} 缺少有效的优先级事件中心");
            return  UniTask.CompletedTask;;
        }

        int maxStack = 999;
        foreach (var buffObj in buffListObj.GetBuffList())
        {
            if (buffObj.GetType() != typeof(Power_BuffObj)) continue;
            buffObj.stack = Math.Min(buffObj.stack + stack, maxStack);
            buffListObj.UpdateView(buffObj);
            return UniTask.CompletedTask;
        }

        var buff = new Power_BuffObj(stack, maxStack, receiver);
        buffListObj.AddBuff(buff);
        buff.OnAddBuff(priorityEventCenter);
        return UniTask.CompletedTask;
    }

    public string GetDescription()
    {
        return $"获得{stack.ToString()}点力量\n";
    }
}