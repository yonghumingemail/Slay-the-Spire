using System;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;

[Serializable]
public class SimpleShield : IShield
{
    private PriorityQueueEventCenter _priorityEventCenter;
    private IShield_V _shield_V;
    private int maxValue;
    
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
        
        _priorityEventCenter = priorityEventCenter;
        
        _priorityEventCenter.SubscribeAsync(OnRoundStart_EventArgs.id,OnRoundStart,-1);
        _priorityEventCenter.Subscribe(OnBeAttacked_EventArgs.id,ShieldTrigger,-1);
        _priorityEventCenter.Subscribe(OnDestroy_EventArgs.id,OnDestroy,-1);
        
        _shield_V.UpdateView(this);
    }

    public void AddShieldValue(ChangeValueInfo info)
    {
        shieldVale = Mathf.Clamp(shieldVale + info.value, 0, maxValue);
        _shield_V.UpdateView(this);
    }

    private void ShieldTrigger(object send, BaseEventArgs args)
    {
        var _args = Action_T.Check<ChangeValueInfo>(args);
        // 如果当前没有护盾，或者传入的值大于等于0，则直接返回，不做任何处理。
        if (_args==null  || ShieldValue <= 0 || _args.value >= 0)
        {
            return;
        }

        // 计算护盾实际能吸收的伤害量
        int damageAbsorbed = Mathf.Min(ShieldValue, -_args.value);

        // 先扣除护盾值
        ShieldValue -= damageAbsorbed;
        // 再减少伤害值
        _args.value += damageAbsorbed;

        // 更新护盾视觉表现
        AddShieldValue(_args);

    }

    private UniTask OnRoundStart(object send, BaseEventArgs args)
    {
        shieldVale = 0;
        _shield_V.UpdateView(this);
        return UniTask.CompletedTask;
    }

    private void OnDestroy(object send, BaseEventArgs args)
    {
        _shield_V = null;
        _priorityEventCenter = null;
        //  Debug.Log(this + "OnDestroy执行");
    }
}