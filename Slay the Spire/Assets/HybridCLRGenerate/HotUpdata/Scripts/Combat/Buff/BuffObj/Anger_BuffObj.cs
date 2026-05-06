using System;
using UnityEngine;

public class Anger_BuffObj : BuffObj
{
    public GainPower gainPower;
    private Animator _animator;

    public Anger_BuffObj(int stack, int maxStack, GameObject carrier) : base(stack, maxStack, carrier)
    {
        _name = BuffName_E.anger;
        name = Enum.GetName(typeof(BuffName_E), _name);
        tags = new[] { BuffTag_E.buff };
        gainPower = new GainPower(stack);
    }

    private void Effect(object send, BaseEventArgs args)
    {
        if (args is not OnHealthChange_EventArgs _args) return;
        if (!(_args.value.value < 0)) return;
        _animator.Play("Update");
        gainPower.Trigger(null, _carrier);
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent, Action<BuffObj> onDataUpdate)
    {
        base.OnAddBuff(eventCent, onDataUpdate);
        _animator = view.GetComponent<Animator>();
        eventCent.Subscribe(OnHealthChange_EventArgs.id, Effect, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
        base.OnRemoveBuff(eventCent);
        eventCent.UnSubscribe(OnHealthChange_EventArgs.id, Effect);
    }
}