using System;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using UnityEngine;

public class VulnerableState : IEntry
{
    public int stack;

    public VulnerableState(int stack)
    {
        this.stack = stack;
    }

    public UniTask Trigger(GameObject sender, [NotNull] GameObject receiver)
    {
        IEventCenterObject<string> eventCenter_receiver = receiver.GetComponent<IEventCenterObject<string>>();
        IBuffList buffListObj = eventCenter_receiver.eventCenter.GetEvent<Func<IBuffList>>("IBuffList")?.Invoke();


        if (buffListObj == null)
        {
            UnityEngine.Debug.LogWarning($"{nameof(Trigger)}: 目标对象 {receiver.name} 缺少 IBuffList 组件");
            return UniTask.CompletedTask;
        }

        int maxStack = 999;
        VulnerableState_BuffObj buff = null;
        foreach (var buffObj in buffListObj.GetBuffList())
        {
            if (buffObj.GetType() != typeof(VulnerableState_BuffObj)) continue;
            buff = buffObj as VulnerableState_BuffObj;
        }

        if (buff != null)
        {
            buff.stack = Math.Min(buff.stack + stack, maxStack);
            buffListObj.UpdateView(buff);
        }
        else
        {
            buff = new VulnerableState_BuffObj(stack, maxStack, new[] { BuffTag_E.debuff }, receiver);
            buffListObj.AddBuff(buff);
        }

        foreach (var action in buffListObj._priorityEventCenter.GetEvent("DamageValueChange_BeAttacked"))
        {
            (action._delegate as Action)?.Invoke();
        }

        foreach (var action in buffListObj._priorityEventCenter.GetEvent("GainBuff"))
        {
            (action._delegate as Action<BuffObj, int>)?.Invoke(buff, stack);
        }

        return UniTask.CompletedTask;
    }

    public string GetDescription()
    {
        return $"给予{stack.ToString()}层易伤\n";
    }

    public string GetDescription(int value)
    {
        return $"给予{value.ToString()}层易伤\n";
    }
}