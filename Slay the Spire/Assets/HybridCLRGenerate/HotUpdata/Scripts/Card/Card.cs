using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

public abstract class Card : MonoBehaviour
{
    #region Property

    public CardComponentInfo CardComponentInfo => cardComponentInfo;
    public CardAnimator CardAnimator => cardAnimator;
    public CardInteraction CardInteraction => cardInteraction;
    public CardExteriorInfo ExteriorInfo => exteriorInfo;

    #endregion

    //用于监听和触发子类实现的特殊事件
    public PriorityQueueEventCenter priorityQueueEventCenter { get; private set; }

    [SerializeField] protected CardComponentInfo cardComponentInfo;
    [SerializeField] protected CardAnimator cardAnimator;
    [SerializeField] protected CardInteraction cardInteraction;
    [SerializeField] protected CardExteriorInfo exteriorInfo;

    protected Player _player;
    protected CombatManage _combatManage;
    protected Energy _energy;
    protected DiscardPile _discardPile;

    protected UniTaskCompletionSource _source;

    public string cardName;
    public CardType cardType;
    public int orbValue;
    public List<IEntry> cardEntries { get; protected set; }
    public string describe { get; protected set; }
    public bool isStrengthen { get; protected set; }
    public bool isSelect{ get; protected set; }

    #region abstract methods

    public abstract UniTask<bool> Trigger(CancellationToken cancellationToken, bool conditionCheck = true);
    public abstract void Strengthen();
    public abstract UniTask Initialized();

    #endregion


    public virtual void AddCardEntry<T>(T entry) where T : IEntry
    {
        cardEntries.Add(entry);
        describe += entry.GetDescription();
        cardComponentInfo.UpdateCardUI(this);
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
            cardComponentInfo.Background.gameObject.SetActive(true);
            cardInteraction.isInteractable = true;
        }
        else
        {
            gameObject.SetActive(false);
            cardComponentInfo.Background.gameObject.SetActive(false);
            cardInteraction.isInteractable = false;
        }
    }


    public UniTask Recycle_DiscardPile(UniTaskCompletionSource source = null)
    {
        cardComponentInfo.HandPile.cardInstances.Remove(this);
        source ??= new UniTaskCompletionSource();

        cardAnimator.Recycle_DiscardPile(() =>
        {
            gameObject.SetActive(false);
            Vector3 screenCenter =
                cardComponentInfo.MainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
            screenCenter.z = transform.position.z;
            transform.position = screenCenter;
            transform.localScale = Vector3.one;
            transform.rotation = Quaternion.identity;

            _discardPile.AddCard(this).Forget();
            source.TrySetResult();
        });

        return source.Task;
    }

    public void UnSelectCard()
    {
        isSelect = false;
        cardInteraction._isDragging = false;
        cardAnimator.TransformEffectToRotation(gameObject, cardInteraction.position, cardInteraction.rotation, cardInteraction.scale);
    }
    protected virtual UniTask CardTriggerAnimator()
    {
        cardComponentInfo.HandPile.cardInstances.Remove(this);
        _source = new UniTaskCompletionSource();
        cardAnimator.MoveToScreenCenter(() => { Recycle_DiscardPile(_source); });
        return _source.Task;
    }


    protected virtual async UniTask Initialized(string defaultDataPtah)
    {
        priorityQueueEventCenter = new PriorityQueueEventCenter();

        cardComponentInfo = GetComponent<CardComponentInfo>();
        cardAnimator = GetComponent<CardAnimator>();
        cardInteraction = GetComponent<CardInteraction>();

        cardInteraction.OnMouseDownDelegate += (eventData) =>
        {
            isSelect = true;
            cardComponentInfo.HandPile.SetSelectedCard(this);
        };
        cardInteraction.OnMouseUpDelegate += (eventData) =>
        {
            cardAnimator.TransformEffectToRotation(gameObject, cardInteraction.position, cardInteraction.rotation, cardInteraction.scale);
            cardComponentInfo.HandPile.SetSelectedCard(null);
        };

        exteriorInfo = await AddressablesMgr.Instance.LoadAssetAsync<CardExteriorInfo>(defaultDataPtah);

        _player = EventCenter_Singleton.Instance.GetEvent<Func<Player>>("Player").Invoke();
        _combatManage = EventCenter_Singleton.Instance.GetEvent<Func<CombatManage>>("CombatManage").Invoke();
        _energy = EventCenter_Singleton.Instance.GetEvent<Func<Energy>>("Energy").Invoke();
        _discardPile = EventCenter_Singleton.Instance.GetEvent<Func<DiscardPile>>("DiscardPile").Invoke();

        isStrengthen = false;
        cardEntries = new List<IEntry>();
        cardName = exteriorInfo.cardName;
        cardType = exteriorInfo.cardType;
        orbValue = exteriorInfo.orbValue;

        cardComponentInfo.UpdateCardUI(this);
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        print(other.gameObject.name);
    }

    private void OnCollisionExit2D(Collision2D other)
    {
        print(other.gameObject.name);
    }
}