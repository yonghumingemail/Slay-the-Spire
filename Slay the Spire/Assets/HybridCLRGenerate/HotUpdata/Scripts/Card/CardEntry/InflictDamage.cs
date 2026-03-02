using System;
using JetBrains.Annotations;
using UnityEngine;

public struct InflictDamage
{
    public void Trigger(GameObject sender, [NotNull] GameObject receiver,int damage)
    {
        
        IEventCenterObject<string> eventCenter = receiver.GetComponent<IEventCenterObject<string>>();
        IHealth health = eventCenter?.eventCenter.GetEvent<Func<IHealth>>("IHealth")?.Invoke();
        if (health == null)
        {
            UnityEngine.Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IHealth 组件");
            return;
        }
        health.SetHealth(new ChangeValueInfo(sender, receiver, -damage));
    }

    public string GetDescription(int damage)
    {
        return $"造成{damage}点伤害";
    }
}