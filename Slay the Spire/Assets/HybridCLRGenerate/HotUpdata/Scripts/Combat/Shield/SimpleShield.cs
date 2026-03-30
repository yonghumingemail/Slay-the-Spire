using System;
using UnityEngine;

[Serializable]
public class SimpleShield : IShield
{
   private PriorityQueueEventCenter _priorityEventCenter;
    private IShield_V _shield_V;

    public float ShieldValue
    {
        get => shieldVale;
        private set => shieldVale = value;
    }

    public float shieldVale;

    public SimpleShield(IShield_V shieldSprite2DObj , PriorityQueueEventCenter priorityEventCenter)
    {
        _shield_V = shieldSprite2DObj;
        _priorityEventCenter = priorityEventCenter;
        _priorityEventCenter.AddEvent<Action<ChangeValueInfo>>("OnHealthChange", ShieldTrigger, -1);
        _shield_V.UpdateView(this);
    }

    public void SetShieldValue(float value)
    {
        ShieldValue = Mathf.Max(0, value);
        _shield_V.UpdateView(this);
    }

    public void ShieldTrigger(ChangeValueInfo info)
    {
        // 如果当前没有护盾，或者传入的值大于等于0，则直接返回，不做任何处理。
        if (info == null || ShieldValue <= 0 || info.value >= 0)
        {
            return;
        }

        // 计算护盾实际能吸收的伤害量
        float damageAbsorbed = Mathf.Min(ShieldValue, -info.value);

        // 先扣除护盾值
        ShieldValue -= damageAbsorbed;
        // 再减少伤害值
        info.value += damageAbsorbed;

        // 更新护盾视觉表现
        SetShieldValue(ShieldValue);
    }
}