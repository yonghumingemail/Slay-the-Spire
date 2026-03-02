using System;
using UnityEngine;

public class VulnerableState_BuffObj : BuffObj
{
    public VulnerableState_BuffObj(int stack, int maxStack, GameObject carrier) : base(
        stack, maxStack, carrier)
    {
        _name =BuffName_E.vulnerable;
        name = Enum.GetName(typeof(BuffName_E), _name);
    }

    private void Effect(ChangeValueInfo info)
    {
        info.value += info.value / 2;
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent)
    {
        eventCent.AddEvent<Action<ChangeValueInfo>>("OnHealthChange", Effect, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
    }
}