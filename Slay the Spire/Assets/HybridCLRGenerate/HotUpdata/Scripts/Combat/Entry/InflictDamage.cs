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
        IBuffList buffList_Sender =sender.GetComponent<IBuffList>();
        IHealth health = receiver.GetComponent<IHealth>();

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
        health.SetHealth(info);
        return UniTask.CompletedTask;
    }

    public string GetDescription()
    {
        return $"造成{damage}点伤害\n";
    }
}