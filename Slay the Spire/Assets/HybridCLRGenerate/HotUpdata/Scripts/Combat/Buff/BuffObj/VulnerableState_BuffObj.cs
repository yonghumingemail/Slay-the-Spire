using System;
using Cysharp.Threading.Tasks;
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

    private void Effect(object send, BaseEventArgs baseArgs)
    {
        if (baseArgs is ChangeValueEvent_EventArgs args)
        {
            args.value.value = (int)(args.value.value * power);
        }
    }

    private UniTask OnRoundEnd(object send, BaseEventArgs baseArgs)
    {
        stack--;
        if (OnDataUpdate != null)
        {
            OnDataUpdate.Invoke(this);
        }
        else
        {
            Debug.Log(this + "缺少更新视图的方法");
        }
        return UniTask.CompletedTask;
    }

    private void DamageCalculation(object send, BaseEventArgs baseArgs)
    {
        if (baseArgs is BaseDamageCalculation_EventArgs args)
        {
            args.damage = (int)(args.damage * power);
        }
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent, Action<BuffObj> onDataUpdate)
    {
        base.OnAddBuff(eventCent, onDataUpdate);

        eventCent.Subscribe(OnBeAttacked_EventArgs.id, Effect, priority);
        eventCent.Subscribe(DamageCalculation_BeAttacked_EventArgs.id, DamageCalculation, priority);
        eventCent.SubscribeAsync(OnRoundEnd_EventArgs.id, OnRoundEnd, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
        base.OnRemoveBuff(eventCent);
        eventCent.UnSubscribe(OnBeAttacked_EventArgs.id, Effect);
        eventCent.UnSubscribe(DamageCalculation_BeAttacked_EventArgs.id, DamageCalculation);
        eventCent.UnSubscribeAsync(OnRoundEnd_EventArgs.id, OnRoundEnd);
    }
}