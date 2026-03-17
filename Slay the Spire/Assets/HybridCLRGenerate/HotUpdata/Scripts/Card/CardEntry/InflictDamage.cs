using System;
using Cysharp.Threading.Tasks;
using JetBrains.Annotations;
using UnityEngine;

public struct InflictDamage : ICardEntry
{
    public int damage;

    public InflictDamage(int damage)
    {
        this.damage = damage;
    }

    public UniTask Trigger(GameObject sender, [NotNull] GameObject receiver)
    {
        IEventCenterObject<string> eventCenter = receiver.GetComponent<IEventCenterObject<string>>();
        IHealth health = eventCenter?.eventCenter.GetEvent<Func<IHealth>>("IHealth")?.Invoke();
        if (health == null)
        {
            UnityEngine.Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IHealth 组件");
            return UniTask.CompletedTask;
        }

        health.SetHealth(new ChangeValueInfo(sender, receiver, -damage));
        return UniTask.CompletedTask;
    }

    public string GetDescription()
    {
        return $"造成{damage}点伤害\n";
    }
}