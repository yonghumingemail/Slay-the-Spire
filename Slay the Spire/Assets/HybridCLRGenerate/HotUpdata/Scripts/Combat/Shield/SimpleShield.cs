using System;
using Cysharp.Threading.Tasks;
using UnityEngine;

[Serializable]
public class SimpleShield : IShield
{
    private PriorityQueueEventCenter _priorityEventCenter;
    private IShield_V _shield_V;
    private int maxValue;

    public Func<int, UniTask> OnRoundStartAction;

    public int ShieldValue
    {
        get => shieldVale;
        private set => shieldVale = value;
    }

    public int shieldVale;

    public SimpleShield(IShield_V shieldSprite2DObj, PriorityQueueEventCenter priorityEventCenter)
    {
        maxValue = 999;
        _shield_V = shieldSprite2DObj;

        OnRoundStartAction = OnRoundStart;

        _priorityEventCenter = priorityEventCenter;
        _priorityEventCenter.AddEvent("OnRoundStart", OnRoundStartAction, -1);
        _priorityEventCenter.AddEvent<Action<ChangeValueInfo>>("OnBeAttacked", ShieldTrigger, -1);
        _priorityEventCenter.AddEvent<Action>("OnDestroy", OnDestroy, -1);
        _shield_V.UpdateView(this);
    }

    public void AddShieldValue(ChangeValueInfo info)
    {
        shieldVale = Mathf.Clamp(shieldVale + info.value, 0, maxValue);
        _shield_V.UpdateView(this);
    }

    private void ShieldTrigger(ChangeValueInfo info)
    {
        // 如果当前没有护盾，或者传入的值大于等于0，则直接返回，不做任何处理。
        if (info == null || ShieldValue <= 0 || info.value >= 0)
        {
            return;
        }

        // 计算护盾实际能吸收的伤害量
        int damageAbsorbed = Mathf.Min(ShieldValue, -info.value);

        // 先扣除护盾值
        ShieldValue -= damageAbsorbed;
        // 再减少伤害值
        info.value += damageAbsorbed;

        // 更新护盾视觉表现
        AddShieldValue(info);
    }

    private UniTask OnRoundStart(int roundCount)
    {
        shieldVale = 0;
        _shield_V.UpdateView(this);
        return UniTask.CompletedTask;
    }

    private void OnDestroy()
    {
        _shield_V = null;
        _priorityEventCenter = null;
        OnRoundStartAction = null;
        Debug.Log(this + "OnDestroy执行");
    }
}