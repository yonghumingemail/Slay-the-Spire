using System;
using System.Linq;
using System.Text;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using UnityEngine;

public struct GainPower : IEntry
{
    public int stack;

    public GainPower(int stack)
    {
        this.stack = stack;
    }

    public UniTask Trigger(GameObject sender, [NotNull] GameObject receiver)
    {
        IEventCenterObject<string> eventCenter = receiver.GetComponent<IEventCenterObject<string>>();
        IBuffList buffListObj = eventCenter.eventCenter.GetEvent<Func<IBuffList>>("IBuffList")?.Invoke();
        if (buffListObj == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IBuffList 组件");
            return UniTask.CompletedTask;
        }

        int maxStack = 999;
        Power_BuffObj powerBuffObj = null;
        foreach (var buffObj in buffListObj.GetBuffList())
        {
            if (buffObj.GetType() != typeof(Power_BuffObj)) continue;
            powerBuffObj = buffObj as Power_BuffObj;
        }

        if (powerBuffObj != null)
        {
            powerBuffObj.stack = Math.Min(powerBuffObj.stack + stack, maxStack);
            buffListObj.UpdateView(powerBuffObj);
        }
        else
        {
            powerBuffObj = new Power_BuffObj(stack, maxStack, new[] { BuffTag_E.buff }, receiver);
            buffListObj.AddBuff(powerBuffObj);
        }

        var actions = buffListObj._priorityEventCenter.GetEvent("GainBuff");
        foreach (var action in actions ?? Enumerable.Empty<PriorityEvent>())
        {
            (action._delegate as Action<BuffObj, int>)?.Invoke(powerBuffObj, stack);
        }

        return UniTask.CompletedTask;
    }

    public string GetDescription()
    {
        return $"获得{stack.ToString()}点力量\n";
    }
}