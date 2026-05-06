using System;
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
        if (args is not OnHealthChange_EventArgs _args) return;
        _args.value.value += -stack;
    }

    public void DamageCalculation(object send, BaseEventArgs args)
    {
        if (args is not OnHealthChange_EventArgs _args) return;
        _args.value.value += stack;
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