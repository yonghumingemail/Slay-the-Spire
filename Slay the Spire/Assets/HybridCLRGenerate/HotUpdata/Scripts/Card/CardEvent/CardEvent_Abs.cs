using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.Serialization;
using Z_Tools;

[Serializable]
public abstract class CardEvent_Abs
{
    public string cardName { get; protected set; }
    public CardType cardType { get; protected set; }
    public bool isDirected { get; protected set; }
    public string defaultDataPtah { get; protected set; }

    public string describe { get; set; }
    public int orbValue { get; set; }
    public bool canStrengthen { get; set; }

    protected Energy energy;

    public IEventCenter<string> _eventCenter;
    [FormerlySerializedAs("spriteData")] [SerializeField] protected CardExteriorInfo exteriorInfo;
    public CardExteriorInfo ExteriorInfo => exteriorInfo;
    public List<ICardEntry> cardEntries { get; protected set; } = new List<ICardEntry>();

    protected CardEvent_Abs()
    {
        EventCenter_Singleton.Instance.GetEvent<Func<Energy>>("Energy", (action) => { energy = action.Invoke(); });
    }

    public void AddCardEntry(ICardEntry entry)
    {
        cardEntries.Add(entry);
        describe += entry.GetDescription();
        _eventCenter.GetEvent<Action>("OnCardUpdateUI")?.Invoke();
    }

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

    public virtual void EventRegister(IEventCenter<string> eventCenter)
    {
        _eventCenter = eventCenter;
        _eventCenter.AddEvent<Action>("OnDestroy", OnDestroy);
    }

    public abstract void Strengthen();
    public abstract void OnDestroy();

    public virtual async UniTask<CardEvent_Abs> Initialize()
    {
        var value = await AddressablesMgr.Instance.LoadAssetAsync<CardExteriorInfo>(defaultDataPtah);
       // spriteData = value.Copy();
        return this;
    }
}