using System;
using UnityEngine;

public class Anger_BuffObj : BuffObj
{
    public GainPower gainPower;
    private Animator _animator;
    public Anger_BuffObj(int stack, int maxStack, BuffTag_E[] tagE, GameObject carrier) : base(stack, maxStack, tagE, carrier)
    {
        _name = BuffName_E.anger;
        name = Enum.GetName(typeof(BuffName_E), _name);
        gainPower = new GainPower(stack);
    }

    private void Effect(ChangeValueInfo info)
    {
        if (info.value < 0)
        {
           _animator.Play("Update");
            gainPower.Trigger(null, _carrier);
        }
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent)
    {
        _animator = view.GetComponent<Animator>();
        eventCent.AddEvent<Action<ChangeValueInfo>>("OnHealthChange", Effect, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
    }
}