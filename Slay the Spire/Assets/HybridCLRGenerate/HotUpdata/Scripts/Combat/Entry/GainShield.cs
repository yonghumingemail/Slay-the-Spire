using System;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using Cysharp.Threading.Tasks;
using GameFramework;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
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

        IEventCenterObject eventCenter = receiver.GetComponent<IEventCenterObject>();

        IShield shield  = GetObject_EventArgs<IShield>.Fire(this,eventCenter.EventManager);
        var priorityEventCenter = GetObject_EventArgs<PriorityEventManager>.Fire(this,eventCenter.EventManager);
       
        
        ChangeValueInfo info = ChangeValueInfo.GetInstance(sender,receiver,value);
        if (priorityEventCenter == null)
        {
            Debug.LogWarning($" 目标对象 {receiver.name} 缺少 priorityEventCenter 组件");
        }
        else
        {
            OnGainShield_EA.Fire(info,this,priorityEventCenter);
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