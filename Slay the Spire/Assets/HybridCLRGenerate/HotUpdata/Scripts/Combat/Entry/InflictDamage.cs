using GameFramework;
using UnityEngine;


public class InflictDamage : IEntry
{
    //初始伤害
    public int damage;

    //经过双方buff计算后的伤害
    public int calculated_damage;


    public InflictDamage(int damage)
    {
        this.damage = damage;
        calculated_damage = damage;
    }

    public void Trigger(GameObject sender, GameObject receiver)
    {
        if (!receiver)
        {
            Debug.Log("接收者为空");
            return;
        }

        IEventCenterObject<BaseEventArgs> eventCenter_Sender = sender.GetComponent<IEventCenterObject<BaseEventArgs>>();
        IEventCenterObject<BaseEventArgs> eventCenter_Receiver =
            receiver.GetComponent<IEventCenterObject<BaseEventArgs>>();

        IBuffList buffList_Sender = GetObject_EventArgs<IBuffList>.Fire(this, eventCenter_Sender.EventManage);
        IHealth health = GetObject_EventArgs<IHealth>.Fire(this, eventCenter_Receiver.EventManage);


        ChangeValueInfo info = new ChangeValueInfo(sender, receiver, -damage);

        if (buffList_Sender == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IBuffList 组件");
        }
        else
        {
           OnAttack_EventArgs.Fire(info,this, buffList_Sender._priorityEventCenter);
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

    public void DamageCalculation(PriorityQueueEventCenter send, PriorityQueueEventCenter receive)
    {
        calculated_damage = damage;
        // Debug.Log($"计算前的伤害：{calculated_damage}");
        calculated_damage = DamageCalculation_Attack_EventArgs.Fire(calculated_damage,this, send);
        calculated_damage = DamageCalculation_BeAttacked_EventArgs.Fire(calculated_damage,this, receive);
        //  Debug.Log($"计算后的伤害：{calculated_damage}");
    }
}