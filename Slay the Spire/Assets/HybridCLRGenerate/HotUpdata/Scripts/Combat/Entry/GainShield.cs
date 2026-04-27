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

    public void Trigger(GameObject sender, GameObject receiver)
    {
        if (!receiver)
        {
            Debug.Log("接收者为空");
            return;
        }

        IEventCenterObject<string> eventCenter = receiver.GetComponent<IEventCenterObject<string>>();

        PriorityQueueEventCenter priorityEventCenter = eventCenter.EventManage
            .GetEvent<Func<PriorityQueueEventCenter>>("PriorityQueueEventCenter")?.Invoke();

        IShield shield = eventCenter.EventManage.GetEvent<Func<IShield>>("IShield")?.Invoke();
        ChangeValueInfo info = new ChangeValueInfo(sender, receiver, value);
        if (priorityEventCenter == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 priorityEventCenter 组件");
        }
        else
        {
            foreach (var action in priorityEventCenter?.GetEvent("GainShield"))
            {
                (action._delegate as Action<ChangeValueInfo>)?.Invoke(info);
            }
        }

        if (shield == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 IShield 组件");
            return;
        }

        shield.AddShieldValue(info);
    }

    public string GetDescription()
    {
        return $"获得{value.ToString()}点防御\n";
    }
}