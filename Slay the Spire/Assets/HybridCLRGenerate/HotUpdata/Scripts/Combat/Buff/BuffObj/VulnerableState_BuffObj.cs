using System;
using UnityEngine;

public class VulnerableState_BuffObj : BuffObj
{
    public float power;

    public VulnerableState_BuffObj(int stack, int maxStack, BuffTag_E[] buffTagEs, GameObject carrier) : base(
        stack, maxStack, buffTagEs, carrier)
    {
        power = 1.5f;
        _name = BuffName_E.vulnerable;
        name = Enum.GetName(typeof(BuffName_E), _name);
    }

    private void Effect(ChangeValueInfo info)
    {
        info.value *= power;
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent)
    {
        eventCent.AddEvent<Action<ChangeValueInfo>>("OnHealthChange", Effect, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
    }
}