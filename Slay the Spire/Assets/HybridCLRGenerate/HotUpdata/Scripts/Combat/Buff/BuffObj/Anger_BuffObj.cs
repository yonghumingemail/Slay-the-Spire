using System;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
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
        var _args = Action_T.Check<ChangeValueInfo>(args);
        if (_args != null)
        {
            if (!(_args.value < 0)) return;
            _animator.Play("Update");
            gainPower.Trigger(null, _carrier);
        }
        else
        {
            Debug.Log($"{send}send对象所给参数类型不匹配"); 
        }
        
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent, Action<BuffObj> onDataUpdate)
    {
        base.OnAddBuff(eventCent, onDataUpdate);
        _animator = view.GetComponent<Animator>();
        eventCent.Subscribe(OnHealthActionChangeEventArgs.id, Effect, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
        base.OnRemoveBuff(eventCent);
        eventCent.UnSubscribe(OnHealthActionChangeEventArgs.id, Effect);
    }
}