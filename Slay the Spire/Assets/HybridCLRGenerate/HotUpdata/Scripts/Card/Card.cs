using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;
[Serializable]
public struct CardTextInfo
{
    public string cardName;
    public CardType cardType;
    public string defaultDataPtah;
    public string describe;
    public int orbValue;
    public bool isStrengthen;
    public List<ICardEntry> cardEntries;

    public CardTextInfo(string cardName, CardType cardType, string defaultDataPtah, string describe, int orbValue, bool isStrengthen)
    {
        this.cardName = cardName;
        this.cardType = cardType;
        this.defaultDataPtah = defaultDataPtah;
        this.describe = describe;
        this.orbValue = orbValue;
        this.isStrengthen = isStrengthen;
        cardEntries = new List<ICardEntry>();
    }
}

public abstract class Card : MonoBehaviour, IEventCenterObject<string>
{
    public CardView CardView => cardView;
    public CardAnimator CardAnimator => cardAnimator;
    public CardInteraction CardInteraction => cardInteraction;
    public CardTextInfo CardTextInfo => cardTextInfo;

    [SerializeField] protected CardView cardView;
    [SerializeField] protected CardAnimator cardAnimator;
    [SerializeField] protected CardInteraction cardInteraction;
    [SerializeField] protected CardTextInfo cardTextInfo;
    public IEventCenter<string> eventCenter { get; protected set; } = new EventCenter<string>();
    public HandPile handPile;

    protected DiscardPile discardPile;
    [SerializeField] protected CardSpriteInfo spriteInfo;
    public CardSpriteInfo SpriteInfo => spriteInfo;

    public Camera _mainCamera { get; protected set; }
    public MouseInteraction _mouseInteraction { get; protected set; }
    protected Energy energy;

    protected virtual void Awake()
    {
        _mouseInteraction = GetComponent<MouseInteraction>();
        handPile = GetComponentInParent<HandPile>();

        _mouseInteraction.OnMouseDown += data =>
        {
            EventCenter_Singleton.Instance.GetEvent<Action<Card>>("OnSelectCard")?.Invoke(this);
        };
        _mouseInteraction.OnMouseUp += data =>
        {
            EventCenter_Singleton.Instance.GetEvent<Action<Card>>("OnUnSelectCard")?.Invoke(this);
        };

        _mainCamera = Camera.main;
        cardView = new CardView(eventCenter, gameObject);
        cardAnimator = new CardAnimator(eventCenter, gameObject, _mainCamera);
        cardInteraction = new CardInteraction(eventCenter, this);

        EventCenter_Singleton.Instance.GetEvent<Func<Energy>>("Energy", (action) => { energy = action.Invoke(); });

        EventCenter_Singleton.Instance.GetEvent<Func<DiscardPile>>("DiscardPile",
            action => { discardPile = action.Invoke(); });
    }

    public void AddCardEntry<T>(T entry) where T : ICardEntry
    {
        cardTextInfo.cardEntries.Add(entry);
        cardTextInfo.describe += entry.GetDescription();
        cardView.UpdateCardUI(this);
    }

    public virtual CardTextInfo CopyCard()
    {
        var returnValue = new CardTextInfo();
        returnValue.cardName = cardTextInfo.cardName;
        returnValue.cardType = cardTextInfo.cardType;
        returnValue.defaultDataPtah = cardTextInfo.defaultDataPtah;
        returnValue.describe = cardTextInfo.describe;
        returnValue.orbValue = cardTextInfo.orbValue;
        returnValue.isStrengthen = cardTextInfo.isStrengthen;
        returnValue.cardEntries = new List<ICardEntry>();
        foreach (var VARIABLE in cardTextInfo.cardEntries)
        {
            returnValue.cardEntries.Add(VARIABLE);
        }

        return returnValue;
    }

    public virtual bool CanBeTriggered()
    {
        return energy._energy - cardTextInfo.orbValue >= 0;
    }

    public abstract UniTask Trigger(CancellationToken cancellationToken, bool conditionCheck = true);
    public abstract void Strengthen();
    public abstract UniTask Initialized();

    protected virtual UniTask CardTriggerAnimator()
    {
        handPile.cardInstances.Remove(this);
        var source = new UniTaskCompletionSource();
        cardAnimator.MoveToScreenCenter(gameObject, () =>
        {
            cardAnimator.Recycle_DiscardPile(gameObject, () =>
            {
                gameObject.SetActive(false);
                Vector3 screenCenter =
                    _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
                screenCenter.z = transform.position.z;
                transform.position = screenCenter;
                transform.localScale = cardInteraction.scale;

                discardPile.AddCard(this).Forget();
                source.TrySetResult();
            });
        });
        return source.Task;
    }

    protected virtual async UniTask Initialized(string cardName, CardType cardType, int orbValue,
        string defaultDataPtah)
    {
        cardTextInfo.cardName = cardName;
        cardTextInfo.cardType = cardType;
        cardTextInfo.orbValue = orbValue;
        cardTextInfo.defaultDataPtah = defaultDataPtah;
        cardTextInfo.isStrengthen = false;
        cardTextInfo.cardEntries = new List<ICardEntry>();

        spriteInfo = await AddressablesMgr.Instance.LoadAssetAsync<CardSpriteInfo>(defaultDataPtah);
        cardView.UpdateCardUI(this);
    }

    protected virtual void OnDestroy()
    {
        eventCenter.GetEvent<Action>("OnDestroy")?.Invoke();
        eventCenter.Clear();
        transform.DOKill();
    }
}