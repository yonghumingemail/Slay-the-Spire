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
        Power_BuffObj buff = null;
        foreach (var buffObj in buffListObj.GetBuffList())
        {
            if (buffObj.GetType() != typeof(Power_BuffObj)) continue;
            buff = buffObj as Power_BuffObj;
        }

        if (buff != null)
        {
            buff.stack = Math.Min(buff.stack + stack, maxStack);
            buffListObj.UpdateView(buff);
        }
        else
        {
            buff = new Power_BuffObj(stack, maxStack, new[] { BuffTag_E.buff }, receiver);
            buffListObj.AddBuff(buff);
        }
        
        //通知接受者更新伤害信息Get Action

        
        var actions = buffListObj._priorityEventCenter.GetEvent("GainBuff");
        foreach (var action in actions ?? Enumerable.Empty<PriorityEvent>())
        {
            (action._delegate as Action<BuffObj, int>)?.Invoke(buff, stack);
        }

        return UniTask.CompletedTask;
    }

    public string GetDescription()
    {
        return $"获得{stack.ToString()}点力量\n";
    }
}