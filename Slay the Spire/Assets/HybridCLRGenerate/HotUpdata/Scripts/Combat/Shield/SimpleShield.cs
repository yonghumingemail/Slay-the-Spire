using System;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;

[Serializable]
public class SimpleShield : IShield
{
    private PriorityEventManager _priorityEventManager;
    private Action<IShield> _updateView;
    public int MaxValue;

    public int ShieldValue
    {
        get => shieldValue;
        set
        {
            shieldValue=value;
            _updateView?.Invoke(this);
        }
    }

   [SerializeField] private int shieldValue;

    public SimpleShield(Action<IShield> updateView, PriorityEventManager priorityEventManager)
    {
        _updateView = updateView;

        _priorityEventManager = priorityEventManager;

        _priorityEventManager.SubscribeAsync<OnRoundStart_EN>(OnRoundStart, -1);
        _priorityEventManager.Subscribe<OnBeAttacked_EA>(ShieldTrigger, -1);
        _priorityEventManager.Subscribe<OnDestroy_EN>(OnDestroy, -1);
    }

    public void AddShieldValue(ChangeValueInfo info)
    {
        shieldValue = Mathf.Clamp(shieldValue + info.value, 0, MaxValue);
        _updateView?.Invoke(this);
    }

    private void ShieldTrigger(object send, GameEventArgs args)
    {
        var _args = Args_T.Check<ChangeValueInfo>(args);
        // 如果当前没有护盾，或者传入的值大于等于0，则直接返回，不做任何处理。
        if (_args == null || ShieldValue <= 0 || _args.value >= 0)
        {
            return;
        }

        // 计算护盾实际能吸收的伤害量
        int damageAbsorbed = Mathf.Min(ShieldValue, -_args.value);

        // 先扣除护盾值
        shieldValue -= damageAbsorbed;
        // 再减少伤害值
        _args.value += damageAbsorbed;

        // 更新护盾视觉表现
        AddShieldValue(_args);
    }

    private UniTask OnRoundStart(object send, GameEventArgs args)
    {
        shieldValue = 0;
        _updateView?.Invoke(this);
        return UniTask.CompletedTask;
    }

    private void OnDestroy(object send, GameEventArgs args)
    {
        _updateView?.Invoke(this);
        _priorityEventManager = null;
        //  Debug.Log(this + "OnDestroy执行");
    }
}