using System;
using GameFramework;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;

public class InflictDamage : IEntry
{
    //初始伤害
    public int damage;

    //经过双方buff计算后的伤害
    public int calculated_damage;
    public Action OnUpdateData;

    public InflictDamage(int damage, Action OnUpdateData)
    {
        this.damage = damage;
        calculated_damage = damage;
        this.OnUpdateData = OnUpdateData;
    }

    public void Trigger(GameObject sender, GameObject receiver)
    {
        if (!receiver)
        {
            Debug.Log("接收者为空");
            return;
        }
        IEventCenterObject eventCenter_Sender = sender.GetComponent<IEventCenterObject>();
        IEventCenterObject eventCenter_Receiver = receiver.GetComponent<IEventCenterObject>();
        
  
        IBuffList buffList_Sender = GetObject_EventArgs<IBuffList>.Fire(this, eventCenter_Sender.EventManager);
        IHealth health = GetObject_EventArgs<IHealth>.Fire(this, eventCenter_Receiver.EventManager);


        ChangeValueInfo info = ChangeValueInfo.GetInstance(sender,receiver,-damage);

        if (buffList_Sender == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IBuffList 组件");
        }
        else
        {
            OnAttack_EA.Fire(info, this, buffList_Sender.PriorityEventManager);
        }

        if (health == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IHealth 组件");
            return;
        }

        health.AddHealth(info);
    }

    public string GetDescription()
    {
        return $"造成{calculated_damage}点伤害\n";
    }

    public void DamageCalculation(IEventManager send, IEventManager receive)
    {
        calculated_damage = damage;

      //  Debug.Log($"计算前的伤害：{calculated_damage}");
        var info = ReferencePool.Acquire<ChangeValueInfo>();
        info.value = calculated_damage;
        DamageCalculation_Attack_EN.Fire(info, this, send);
        DamageCalculation_BeAttacked_EN.Fire(info, this, receive);
        calculated_damage = info.value;

        ReferencePool.Release(info);
        OnUpdateData?.Invoke();
       // Debug.Log($"计算后的伤害：{calculated_damage}");
    }
}