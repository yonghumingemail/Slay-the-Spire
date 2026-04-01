using System;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using Cysharp.Threading.Tasks;
using UnityEngine;

public struct GainShield : IEntry
{
    public int _value;

    public GainShield(int value)
    {
        _value = value;
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
            var actions = priorityEventCenter?.GetEvent("GainShield");
            foreach (var action in actions ?? Enumerable.Empty<PriorityEvent>())
            {
                (action._delegate as Action<int>)?.Invoke(_value);
            }
        }

        if (shield == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IShield 组件");
            return UniTask.CompletedTask;
        }
        
        shield.AddShieldValue(_value);

        return UniTask.CompletedTask;
    }

    public string GetDescription()
    {
        return $"获得{_value.ToString()}点防御\n";
    }
}