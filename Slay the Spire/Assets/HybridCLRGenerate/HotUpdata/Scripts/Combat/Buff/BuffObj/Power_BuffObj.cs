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

    private void Effect(object send, GameEventArgs gameArgs)
    {
        var _args = Args_T.Check<ChangeValueInfo>(gameArgs);
        if (_args != null)
        {
            _args.value += -stack;
        }
        else
        {
            Debug.Log($"{send}对象所给参数类型不匹配");
        }
    }

    private void DamageCalculation(object send, GameEventArgs gameArgs)
    {
        var _args = Args_T.Check<ChangeValueInfo>(gameArgs);
        if (_args != null)
        {
            _args.value += stack;
            Debug.Log($"调用者：{send},调用PowerBuff伤害计算，计算前：{_args.value - stack},计算后：{_args.value}");
        }
        else
        {
            Debug.Log($"{send}send对象所给参数类型不匹配");
        }
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent)
    {
        base.OnAddBuff(eventCent);
        eventCent.Subscribe<OnAttack_EA>(Effect, priority);
        eventCent.Subscribe<DamageCalculation_Attack_EN>(DamageCalculation, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
        base.OnRemoveBuff(eventCent);
        eventCent.UnSubscribe<OnAttack_EA>(Effect);
        eventCent.UnSubscribe<DamageCalculation_Attack_EN>(DamageCalculation);
    }
}