using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public abstract class Card : MonoBehaviour
{
    #region Property

    public CardView View => cardView;
    public CardInteraction CardInteraction => cardInteraction;
    public CardExteriorInfo ExteriorInfo => exteriorInfo;

    #endregion

    //用于监听和触发子类实现的特殊事件
    public PriorityQueueEventCenter priorityEventCenter { get; private set; }

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


    public List<IEntry> cardEntries { get; protected set; }
    public string describe { get; protected set; }
    public bool isStrengthen { get; protected set; }


    #region abstract methods

    public abstract UniTask<bool> Trigger(CancellationToken cancellationToken, bool conditionCheck = true);
    public abstract void Strengthen();
    public abstract UniTask Initialized();

    #endregion

    public void UpdatePosInfo(Vector3 position, Quaternion rotation)
    {
        cardInteraction.position = position;
        cardInteraction.rotation = rotation;
        cardInteraction.mouseOverPosition.x = position.x;
        if (!cardInteraction.isMouseEnter)
        {
            ReturnToHandPosition();
        }
    }

    public virtual void AddCardEntry<T>(T entry) where T : IEntry
    {
        cardEntries.Add(entry);
        describe += entry.GetDescription();
        cardView.UpdateCardUI(this);
    }

    public virtual void ReturnToHandPosition(Action callback=null)
    {
        OnUnSelectCard?.Invoke(this);
        cardAnimator.TransformEffect(gameObject, cardInteraction.position, cardInteraction.rotation,
            cardInteraction.scale,  callback);
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
            cardInteraction.Enable();
        }
        else
        {
            gameObject.SetActive(false);
            cardInteraction.Disable();
        }
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
        cardInteraction._isDragging = false;
        ReturnToHandPosition();
        Args_T_EA<OnUnSelectCard_EA>.Fire(this, this, priorityEventCenter);
    }

    public virtual void UpdateDescribe()
    {
        describe = string.Empty;
        foreach (var VARIABLE in cardEntries)
        {
            describe += VARIABLE.GetDescription();
        }

        cardView.UpdateCardTextUI(this);
    }

    public virtual void CardTriggerAnimator(Action callback = null)
    {
        cardAnimator.MoveToScreenCenter(gameObject, () => { Recycle_DiscardPile(callback); });
    }


    protected virtual async UniTask Initialized(string defaultDataPtah)
    {
        priorityEventCenter = new PriorityQueueEventCenter();
        mainCamera = Camera.main;
        cardView = GetComponent<CardView>();
        cardInteraction = GetComponent<CardInteraction>();
        cardInteraction.Init(mainCamera);
        cardAnimator = new CardAnimator(mainCamera);

        exteriorInfo = (await AddressablesMgr.Instance.LoadAssetAsync<CardExteriorInfo>(defaultDataPtah)).Copy();

        _player = GetObject_GEA<Player>.Fire(this, EventCenter_Singleton.Instance);
        _combatManage = GetObject_GEA<CombatManage>.Fire(this, EventCenter_Singleton.Instance);
        _energy = GetObject_GEA<Energy>.Fire(this, EventCenter_Singleton.Instance);
        _discardPile = GetObject_GEA<DiscardPile>.Fire(this, EventCenter_Singleton.Instance);

        cardEntries = new List<IEntry>();

        cardInteraction.OnMouseDownDelegate += (data) => { OnSelectCard?.Invoke(this); };

        cardView.UpdateCardUI(this);
    }
}