using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public abstract class CardEvent_Abs
{
    public string describe;
    public int orbValue;
    public bool canStrengthen = true;

    public RaycastHit2D target;

    protected CardEvent_Abs()
    {
        EventCenter_Singleton.Instance.GetEvent<Func<Energy>>("Energy", (action) => { energy = action.Invoke(); });
    }
    
    protected Energy energy;

    public IEventCenter<string> _eventCenter;
    public CardParameter parameter { get; private set; }
    public string defaultDataPtah { get; protected set; }


    public virtual bool CanBeTriggered()
    {
        return energy._energy - orbValue >= 0;
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="conditionCheck">若为false则直接触发不进行条件检测</param>
    /// <returns></returns>
    public abstract UniTask Trigger(bool conditionCheck = true);

    public abstract void EventRegister(IEventCenter<string> eventCenter);
    public abstract void Strengthen();
    public abstract void OnDestroy();

    public virtual async UniTask<CardEvent_Abs> Initialize()
    {
        var value = await AddressablesMgr.Instance.LoadAssetAsync<CardParameter>(defaultDataPtah);
        parameter = value.Copy();
        orbValue = parameter.orbValue;
        return this;
    }
}

