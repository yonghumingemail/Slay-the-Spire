using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public abstract class Card : MonoBehaviour
{
    #region Property

    public CardComponentInfo CardInfo => cardInfo;
    public CardAnimator CardAnimator => cardAnimator;
    public CardInteraction CardInteraction => cardInteraction;
    public CardExteriorInfo ExteriorInfo => exteriorInfo;

    #endregion

    //用于监听和触发子类实现的特殊事件
    public PriorityQueueEventCenter priorityEventCenter { get; private set; }

    [SerializeField] protected CardComponentInfo cardInfo;
    [SerializeField] protected CardAnimator cardAnimator;
    [SerializeField] protected CardInteraction cardInteraction;
    [SerializeField] protected CardExteriorInfo exteriorInfo;

    public Player _player { get; private set; }
    public CombatManage _combatManage { get; private set; }
    public Energy _energy;
    protected DiscardPile _discardPile;
    protected UniTaskCompletionSource _source;

    public List<IEntry> cardEntries { get; protected set; }
    public string describe { get; protected set; }
    public bool isStrengthen { get; protected set; }

    #region abstract methods

    public abstract UniTask<bool> Trigger(CancellationToken cancellationToken, bool conditionCheck = true);
    public abstract void Strengthen();
    public abstract UniTask Initialized();

    #endregion


    public virtual void AddCardEntry<T>(T entry) where T : IEntry
    {
        cardEntries.Add(entry);
        describe += entry.GetDescription();
        cardInfo.UpdateCardUI(this);
    }

    public virtual void ReturnToHandPosition()
    {
        cardAnimator.TransformEffectToRotation(gameObject, cardInteraction.position, cardInteraction.rotation,
            cardInteraction.scale);
    }

    public virtual bool CanBeTriggered()
    {
        return _energy._energy - exteriorInfo.orbValue >= 0;
    }

    public virtual void Enable(bool enable)
    {
        if (enable)
        {
            gameObject.SetActive(true);
            cardInfo.Background.gameObject.SetActive(true);
            cardInteraction.isInteractable = true;
        }
        else
        {
            cardInfo.Background.gameObject.SetActive(false);
            cardInteraction.isInteractable = false;
        }
    }


    public UniTask Recycle_DiscardPile(UniTaskCompletionSource source = null)
    {
        cardInfo.HandPile.cardInstances.Remove(this);
        source ??= new UniTaskCompletionSource();

        cardAnimator.Recycle_DiscardPile(() =>
        {
            gameObject.SetActive(false);
            Vector3 screenCenter =
                cardInfo.MainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f,
                    0f));
            screenCenter.z = transform.position.z;
            transform.position = screenCenter;
            transform.localScale = Vector3.one;
            transform.rotation = Quaternion.identity;

            _discardPile.AddCard(this).Forget();
            source.TrySetResult();
        });

        return source.Task;
    }


    public virtual void UnSelectCard()
    {
        cardInteraction._isDragging = false;
        
        cardAnimator.TransformEffectToRotation(gameObject, cardInteraction.position, cardInteraction.rotation,
            cardInteraction.scale);
        Args_T_EA<OnUnSelectCard_EA>.Fire(this,this,priorityEventCenter);
    }

    public virtual void UpdateDescribe()
    {
        describe = string.Empty;
        foreach (var VARIABLE in cardEntries)
        {
            describe += VARIABLE.GetDescription();
        }

        cardInfo.UpdateCardTextUI(this);
    }

    public virtual UniTask CardTriggerAnimator()
    {
        cardInfo.HandPile.cardInstances.Remove(this);
        _source = new UniTaskCompletionSource();
        cardAnimator.MoveToScreenCenter(() => { Recycle_DiscardPile(_source); });
        return _source.Task;
    }


    protected virtual async UniTask Initialized(string defaultDataPtah)
    {
        priorityEventCenter = new PriorityQueueEventCenter();

        cardInfo = GetComponent<CardComponentInfo>();
        cardAnimator = GetComponent<CardAnimator>();
        cardInteraction = GetComponent<CardInteraction>();

        exteriorInfo = (await AddressablesMgr.Instance.LoadAssetAsync<CardExteriorInfo>(defaultDataPtah)).Copy();
        
        _player =  GetObject_GEA<Player>.Fire(this,EventCenter_Singleton.Instance);
        _combatManage = GetObject_GEA<CombatManage>.Fire(this,EventCenter_Singleton.Instance);
        _energy = GetObject_GEA<Energy>.Fire(this,EventCenter_Singleton.Instance);
        _discardPile =  GetObject_GEA<DiscardPile>.Fire(this,EventCenter_Singleton.Instance);
        
        isStrengthen = false;
        cardEntries = new List<IEntry>();

        cardInfo.UpdateCardUI(this);
    }
    
}