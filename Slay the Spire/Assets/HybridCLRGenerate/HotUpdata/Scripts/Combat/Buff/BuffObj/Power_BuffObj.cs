using System;
using UnityEngine;
public class Power_BuffObj : BuffObj
{
    
    public Power_BuffObj(int stack, int maxStack, BuffTag_E[] buffTagEs,GameObject carrier) : base(
        stack, maxStack,buffTagEs , carrier)
    {
        _name =BuffName_E.strength;
        name = Enum.GetName(typeof(BuffName_E), _name);
        priority =5;
    }

    private void Effect(ChangeValueInfo info)
    {
        info.value -=stack;
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent)
    {
        eventCent.AddEvent<Action<ChangeValueInfo>>("OnAttack", Effect, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
    }
}
