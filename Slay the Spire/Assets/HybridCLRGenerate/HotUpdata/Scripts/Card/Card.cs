using System;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;

public abstract class Card : MonoBehaviour
{
    public CardView View => cardView;
    public CardInteraction CardInteraction => cardInteraction;
    public CardExteriorInfo ExteriorInfo => exteriorInfo;


    //用于监听和触发子类实现的特殊事件
    public IPriorityEventManager priorityEventManager { get; private set; }

    protected CardView cardView;
    [SerializeField] protected CardAnimator cardAnimator;
    [SerializeField] protected CardInteraction cardInteraction;
    [SerializeField] protected CardExteriorInfo exteriorInfo;

    public Camera mainCamera { get; protected set; }

    public Player _player { get; protected set; }
    public CombatManage _combatManage { get; protected set; }
    public Energy _energy { get; protected set; }
    public DiscardPile _discardPile { get; protected set; }

    public Action<Card> OnTrigger { get; set; }
    public Action<Card> OnSelectCard { get; set; }
    public Action<Card> OnUnSelectCard { get; set; }


    public virtual bool TriggerCondition => (_energy._energy - exteriorInfo.orbValue) > -1;
    public List<IEntry> cardEntries { get; protected set; }
    public StringBuilder describeBuilder { get; protected set; } = new();
    public bool isStrengthen { get; protected set; }

    protected int detectLayer { get; set; }
    protected abstract string defaultDataPtah { get; set; }

    #region abstract methods

    public abstract UniTask<bool> Trigger(CancellationToken cancellationToken, bool conditionCheck = true);
    public abstract void Strengthen();

    #endregion


    public void UpdatePosInfo(Vector3 position, Quaternion rotation)
    {
        cardInteraction.UpdatePositionInfo(position, rotation);
        if (!cardInteraction.IsMouseEnter || !cardInteraction.IsDragging)
        {
            cardInteraction.ReturnToHandPosition();
        }
    }

    public virtual void AddCardEntry<T>(T entry) where T : IEntry
    {
        cardEntries.Add(entry);
        UpdateDescribe();
    }

    public virtual void Enable()
    {
        gameObject.SetActive(true);
        cardInteraction.Enable();
    }

    public virtual void Disable()
    {
        gameObject.SetActive(false);
        cardInteraction.Disable();
    }

    public UniTask Recycle_DiscardPile(Action callback = null, UniTaskCompletionSource source = null)
    {
        source ??= new UniTaskCompletionSource();

        cardAnimator.Recycle_DiscardPile(gameObject, () =>
        {
            gameObject.SetActive(false);
            Vector3 screenCenter =
                mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f,
                    0f));
            screenCenter.z = transform.position.z;
            transform.position = screenCenter;
            transform.localScale = Vector3.one;
            transform.rotation = Quaternion.identity;

            _discardPile.AddCard(this).Forget();
            source.TrySetResult();
            callback?.Invoke();
        });

        return source.Task;
    }


    public virtual void UnSelectCard()
    {
        OnUnSelectCard?.Invoke(null);
        cardInteraction.ReturnToHandPosition();
    }

    public virtual void UpdateDescribe()
    {
        describeBuilder.Clear();
        foreach (var entry in cardEntries)
            describeBuilder.Append(entry.GetDescription());
        cardView.UpdateCardTextUI(this);
    }

    public virtual void CardTriggerAnimator(Action callback = null)
    {
        cardAnimator.MoveToScreenCenter(gameObject, () => { Recycle_DiscardPile(callback); });
    }


    public virtual async UniTask Initialized()
    {
        cardEntries = new List<IEntry>();
        detectLayer = 1 << LayerMask.NameToLayer("Enemy");

        priorityEventManager = GetComponent<IPriorityEventManager>();

        mainCamera = Camera.main;
        cardAnimator = new CardAnimator(mainCamera);
        cardView = GetComponent<CardView>();
        cardInteraction = GetComponent<CardInteraction>();
        cardInteraction.Init(cardAnimator);

        exteriorInfo = (await AddressablesMgr.Instance.LoadAssetAsync<CardExteriorInfo>(defaultDataPtah)).Copy();

        _player = GetObject_EventArgs<Player>.Fire(this);
        _combatManage = GetObject_EventArgs<CombatManage>.Fire(this);
        _energy = GetObject_EventArgs<Energy>.Fire(this);
        _discardPile = GetObject_EventArgs<DiscardPile>.Fire(this);

        cardInteraction.OnMouseDownDelegate += (data) => { OnSelectCard?.Invoke(this); };

        cardView.UpdateCardUI(this);
    }
}