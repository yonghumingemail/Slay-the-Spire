using System;
using System.Linq;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using UnityEngine;

public class GainPower : IEntry
{
    public int stack;

    public GainPower(int stack)
    {
        this.stack = stack;
    }

    public void Trigger(GameObject sender, GameObject receiver)
    {
        if (!receiver)
        {
            Debug.Log("接收者为空");
            return;
        }
        
        IEventCenterObject<string> eventCenter = receiver.GetComponent<IEventCenterObject<string>>();
        IBuffList buffListObj = eventCenter.EventManage.GetEvent<Func<IBuffList>>("IBuffList")?.Invoke();
        if (buffListObj == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IBuffList 组件");
            return;
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
            buff = new Power_BuffObj(stack, maxStack, receiver);
            buffListObj.AddBuff(buff);
        }

        //通知接受者更新伤害信息Get Action

        foreach (var action in buffListObj._priorityEventCenter.GetEvent("DamageValueChange_Attack"))
        {
            (action._delegate as Action)?.Invoke();
        }

        foreach (var action in buffListObj._priorityEventCenter.GetEvent("GainBuff"))
        {
            (action._delegate as Action<BuffObj, int>)?.Invoke(buff, stack);
        }
    }

    public string GetDescription()
    {
        return $"获得{stack.ToString()}点力量\n";
    }

}