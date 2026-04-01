using System;
using System.Linq;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using UnityEngine;

public struct InflictDamage : IEntry
{
    public int damage;
    public int calculated_damage;
   // private Action _OnDamageChanged;
    public InflictDamage(int damage )
    {
        this.damage = damage;
        calculated_damage=damage;
    }

    public UniTask Trigger(GameObject sender, [NotNull] GameObject receiver)
    {
        IEventCenterObject<string> eventCenter_Sender = sender.GetComponent<IEventCenterObject<string>>();
        IEventCenterObject<string> eventCenter_Receiver = receiver.GetComponent<IEventCenterObject<string>>();
        
        IBuffList buffList_Sender = eventCenter_Sender.eventCenter.GetEvent<Func<IBuffList>>("IBuffList")?.Invoke();
        IHealth health =  eventCenter_Receiver.eventCenter.GetEvent<Func<IHealth>>("IHealth")?.Invoke();

        ChangeValueInfo info = new ChangeValueInfo(sender, receiver, -damage);

        if (buffList_Sender == null)
        {
             Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IBuffList 组件");
        }
        else
        {
            var buffEvents = buffList_Sender._priorityEventCenter?.GetEvent("OnAttack");
            foreach (var priorityEvent in buffEvents ?? Enumerable.Empty<PriorityEvent>())
            {
                (priorityEvent._delegate as Action<ChangeValueInfo>)?.Invoke(info);
            }
        }

        if (health == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IHealth 组件");
            return UniTask.CompletedTask;
        }
        health.AddHealth(info);
        return UniTask.CompletedTask;
    }

    public string GetDescription()
    {
        return $"造成{damage}点伤害\n";
    }
    public string GetDescriptionCalculated()
    {
        return $"造成{calculated_damage}点伤害\n";
    }
}