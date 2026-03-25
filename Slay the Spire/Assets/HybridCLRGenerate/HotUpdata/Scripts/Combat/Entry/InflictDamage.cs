using System;
using System.Linq;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using UnityEngine;

public struct InflictDamage : IEntry
{
    public int damage;

    public InflictDamage(int damage)
    {
        this.damage = damage;
    }

    public UniTask Trigger(GameObject sender, [NotNull] GameObject receiver)
    {
        IEventCenterObject<string> receiverEventCenter = receiver.GetComponent<IEventCenterObject<string>>();
        IEventCenterObject<string> senderEventCenter = sender.GetComponent<IEventCenterObject<string>>();

        IBuffList buffList = senderEventCenter?.eventCenter.GetEvent<Func<IBuffList>>("IBuffList")?.Invoke();
        IHealth health = receiverEventCenter?.eventCenter.GetEvent<Func<IHealth>>("IHealth")?.Invoke();

        ChangeValueInfo info = new ChangeValueInfo(sender, receiver, -damage);

        if (buffList == null)
        {
             UnityEngine.Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IBuffList 组件");
        }
        else
        {
            var buffEvents = buffList._priorityEventCenter?.GetEvent("OnAttack");
            foreach (var priorityEvent in buffEvents ?? Enumerable.Empty<PriorityEvent>())
            {
                (priorityEvent._delegate as Action<ChangeValueInfo>)?.Invoke(info);
            }
        }

        if (health == null)
        {
            UnityEngine.Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IHealth 组件");
            return UniTask.CompletedTask;
        }
        Debug.Log(info.value);
        health.SetHealth(info);
        return UniTask.CompletedTask;
    }

    public string GetDescription()
    {
        return $"造成{damage}点伤害\n";
    }
}