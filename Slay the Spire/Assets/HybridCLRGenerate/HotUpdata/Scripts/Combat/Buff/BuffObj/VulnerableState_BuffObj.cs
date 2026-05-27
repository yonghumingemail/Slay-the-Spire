using System;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;

public class VulnerableState_BuffObj : BuffObj
{
    public float power;

    public VulnerableState_BuffObj(int stack, int maxStack, GameObject carrier) : base(
        stack, maxStack, carrier)
    {
        power = 1.5f;
        _name = BuffName_E.vulnerable;
        name = Enum.GetName(typeof(BuffName_E), _name);
        tags = new[] { BuffTag_E.buff };
    }

    private void Effect(object send, GameEventArgs args)
    {
        var _args = Args_T.Check<ChangeValueInfo>(args);
        _args.value = (int)(_args.value * power);
    }

    private UniTask OnRoundEnd(object send, GameEventArgs gameArgs)
    {
        stack--;
        if (stack > 0)
        {
            OnDataUpdate?.Invoke(this);
        }
        else
        {
            OnRemove?.Invoke(this);
        }
        return UniTask.CompletedTask;
    }

    private void DamageCalculation(object send, GameEventArgs gameArgs)
    {
        var _args = Args_T.Check<ChangeValueInfo>(gameArgs);
        if (_args != null)
        {
            int value = _args.value;
            _args.value = (int)(_args.value * power);
            Debug.Log($"调用者：{send},调用VulnerableBuff伤害计算，计算前：{value},计算后：{_args.value}");
        }
        else
        {
            Debug.Log($"{send}send对象所给参数类型不匹配");
        }
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent)
    {
        base.OnAddBuff(eventCent);
        eventCent.Subscribe<OnBeAttacked_EA>(Effect, priority);
        eventCent.Subscribe<DamageCalculation_BeAttacked_EventArgs>(DamageCalculation, priority);
        eventCent.SubscribeAsync<OnRoundEnd_EventName>(OnRoundEnd, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
        base.OnRemoveBuff(eventCent);
        eventCent.UnSubscribe<OnBeAttacked_EA>(Effect);
        eventCent.UnSubscribe<DamageCalculation_BeAttacked_EventArgs>(DamageCalculation);
        eventCent.UnSubscribeAsync<OnRoundEnd_EventName>(OnRoundEnd);
    }
}