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

    private void Effect(ChangeValueInfo info)
    {
        info.value -= stack;
    }

    public int DamageCalculation(int value)
    {
        return value + stack;
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent, Action<BuffObj> onDataUpdate)
    {
        base.OnAddBuff(eventCent, onDataUpdate);
        eventCent.AddEvent<Action<ChangeValueInfo>>("OnAttack", Effect, priority);
        eventCent.AddEvent<Func<int, int>>("DamageCalculation_Attack", DamageCalculation, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
        base.OnRemoveBuff(eventCent);
        eventCent.RemoveEvent<Action<ChangeValueInfo>>("OnAttack", Effect);
        eventCent.RemoveEvent<Func<int, int>>("DamageCalculation_Attack", DamageCalculation);
    }
}