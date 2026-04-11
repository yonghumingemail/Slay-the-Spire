using System;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using Cysharp.Threading.Tasks;
using UnityEngine;

public class GainShield : IEntry
{
    public int value;

    public GainShield(int value)
    {
        this.value = value;
    }

    public UniTask Trigger(GameObject sender, [NotNull] GameObject receiver)
    {
        IEventCenterObject<string> eventCenter = receiver.GetComponent<IEventCenterObject<string>>();

        PriorityQueueEventCenter priorityEventCenter = eventCenter.eventCenter
            .GetEvent<Func<PriorityQueueEventCenter>>("PriorityQueueEventCenter")?.Invoke();

        IShield shield = eventCenter.eventCenter.GetEvent<Func<IShield>>("IShield")?.Invoke();
        if (priorityEventCenter == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 priorityEventCenter 组件");
        }
        else
        {
            foreach (var action in priorityEventCenter?.GetEvent("GainShield"))
            {
                (action._delegate as Action<int>)?.Invoke(value);
            }
        }

        if (shield == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IShield 组件");
            return UniTask.CompletedTask;
        }

        shield.AddShieldValue(value);

        return UniTask.CompletedTask;
    }

    public string GetDescription()
    {
        return $"获得{value.ToString()}点防御\n";
    }
}