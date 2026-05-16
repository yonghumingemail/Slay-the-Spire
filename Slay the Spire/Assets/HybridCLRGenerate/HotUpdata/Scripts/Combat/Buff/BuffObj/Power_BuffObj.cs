using System;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;

public class Power_BuffObj : BuffObj
{
    public Power_BuffObj(int stack, int maxStack, GameObject carrier) : base(
        stack, maxStack, carrier)
    {
        _name = BuffName_E.strength;
        name = Enum.GetName(typeof(BuffName_E), _name);
        tags = new[] { BuffTag_E.buff };
        priority = 5;
    }

    private void Effect(object send, BaseEventArgs args)
    {
        var _args = Action_T.Check<ChangeValueInfo>(args);
        if (_args != null)
        {
            _args.value += -stack;
        }
        else
        {
           Debug.Log($"{send}send对象所给参数类型不匹配"); 
        }
    }

    private void DamageCalculation(object send, BaseEventArgs args)
    {
        var _args = Action_T.Check<ChangeValueInfo>(args);
        if (_args != null)
        {
            _args.value += stack;
        }
        else
        {
            Debug.Log($"{send}send对象所给参数类型不匹配"); 
        }
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent, Action<BuffObj> onDataUpdate)
    {
        base.OnAddBuff(eventCent, onDataUpdate);
        eventCent.Subscribe(OnAttack_EventArgs.id, Effect, priority);
        eventCent.Subscribe(DamageCalculation_Attack_EventArgs.id, DamageCalculation, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
        base.OnRemoveBuff(eventCent);
        eventCent.UnSubscribe(OnAttack_EventArgs.id, Effect);
        eventCent.UnSubscribe(DamageCalculation_Attack_EventArgs.id, DamageCalculation);
    }
}