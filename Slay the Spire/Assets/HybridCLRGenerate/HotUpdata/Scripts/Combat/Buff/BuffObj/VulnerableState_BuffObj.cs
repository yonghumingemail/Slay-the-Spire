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

    private void Effect(ChangeValueInfo info)
    {
        info.value = (int)(info.value * power);
    }

    private UniTask OnRoundEnd(int roundCount)
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

    private int DamageCalculation(int value)
    {
        return (int)(value * power);
    }

    public override void OnAddBuff(PriorityQueueEventCenter eventCent, Action<BuffObj> onDataUpdate)
    {
        base.OnAddBuff(eventCent, onDataUpdate);
        eventCent.AddEvent<Action<ChangeValueInfo>>("OnBeAttacked", Effect, priority);
        eventCent.AddEvent<Func<int, int>>("DamageCalculation_BeAttacked", DamageCalculation, priority);
        eventCent.AddEvent<Func<int, UniTask>>("OnRoundEnd", OnRoundEnd, priority);
    }

    public override void OnRemoveBuff(PriorityQueueEventCenter eventCent)
    {
        base.OnRemoveBuff(eventCent);
        eventCent.RemoveEvent<Action<ChangeValueInfo>>("OnBeAttacked", Effect);
        eventCent.RemoveEvent<Func<int, int>>("DamageCalculation_BeAttacked", DamageCalculation);
        eventCent.RemoveEvent<Func<int, UniTask>>("OnRoundEnd", OnRoundEnd);
    }
}