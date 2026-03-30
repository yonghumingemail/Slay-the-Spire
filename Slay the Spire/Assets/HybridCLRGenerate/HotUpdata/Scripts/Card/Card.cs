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

    public CardView CardView => cardView;
    public CardAnimator CardAnimator => cardAnimator;
    public CardExteriorInfo ExteriorInfo => exteriorInfo;

    #endregion

    [SerializeField] protected CardView cardView;
    [SerializeField] protected CardAnimator cardAnimator;
    [SerializeField] protected CardExteriorInfo exteriorInfo;
    public HandPile handPile;

    public Camera _mainCamera { get; protected set; }
    public MouseInteraction _mouseInteraction { get; protected set; }

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


    [Header("位置信息")] [SerializeField] protected Vector3 position;
    [SerializeField] protected Quaternion rotation;
    [SerializeField] protected Vector3 scale;
    [SerializeField] protected Vector3 mouseOverPosition;
    [SerializeField] protected Vector3 mouseOverScale;


    public bool _isDragging;
    public bool isInteractable = true;
    public float magnification = 1.1f;


    protected virtual void Awake()
    {
        _mouseInteraction = GetComponent<MouseInteraction>();
        handPile = GetComponentInParent<HandPile>();

        _mainCamera = Camera.main;
        cardView = GetComponent<CardView>();
        cardAnimator = GetComponent<CardAnimator>();

        scale = transform.localScale;
        mouseOverScale = transform.localScale * magnification;
        mouseOverPosition = new Vector3
        {
            z = -0.1f * handPile.maxHandSize - 0.1f,
            y = _mainCamera.ViewportToWorldPoint(new Vector3(0.5f, 0)).y +
                cardView.Background.bounds.size.y / 2
        };

        _mouseInteraction.OnMouseDownDelegate += OnPointerDown;
        _mouseInteraction.OnMouseUpDelegate += OnPointerUp;
        _mouseInteraction.OnMouseEnterDelegate += OnPointerEnter;
        _mouseInteraction.OnMouseExitDelegate += OnPointerExit;

        EventCenter_Singleton.Instance.AddEvent<Action>("OnCardArrangementComplete", OnCardArrangementComplete);
        EventCenter_Singleton.Instance.AddEvent<Action>("OnStartCardArrangement", OnStartCardArrangement);
    }

    private void Start()
    {
        _player= EventCenter_Singleton.Instance.GetEvent<Func<Player>>("Player").Invoke();
    }

    #region abstract methods

    public abstract UniTask<bool> Trigger(CancellationToken cancellationToken, bool conditionCheck = true);
    public abstract void Strengthen();
    public abstract UniTask Initialized();

    #endregion


    public virtual void AddCardEntry<T>(T entry) where T : IEntry
    {
        cardEntries.Add(entry);
        describe += entry.GetDescription();
        cardView.UpdateCardUI(this);
    }

    public virtual void OnUnSelectedCard()
    {
        cardAnimator.TransformEffect(position, rotation.eulerAngles, scale);
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
            cardView.Enable(true);
            isInteractable = true;
        }
        else
        {
            gameObject.SetActive(false);
            cardView.Enable(false);
            isInteractable = false;
        }
    }

    public UniTask Recycle_DiscardPile(UniTaskCompletionSource source = null)
    {
        handPile.cardInstances.Remove(this);
        source ??= new UniTaskCompletionSource();

        cardAnimator.Recycle_DiscardPile(() =>
        {
            gameObject.SetActive(false);
            Vector3 screenCenter =
                _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
            screenCenter.z = transform.position.z;
            transform.position = screenCenter;
            transform.localScale = scale;
            transform.rotation = Quaternion.identity;

            _discardPile.AddCard(this).Forget();
            source.TrySetResult();
        });

        return source.Task;
    }

    protected virtual UniTask CardTriggerAnimator()
    {
        handPile.cardInstances.Remove(this);
         _source = new UniTaskCompletionSource();
        cardAnimator.MoveToScreenCenter(() => { Recycle_DiscardPile(_source); });
        return _source.Task;
    }


    protected virtual async UniTask Initialized(string defaultDataPtah)
    {
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

        cardView.UpdateCardUI(this);
    }

    protected virtual void OnCardArrangementComplete()
    {
        isInteractable = true;

        position = transform.position;
        rotation = transform.rotation;
        mouseOverPosition.x = position.x;
    }

    protected virtual void OnStartCardArrangement()
    {
        isInteractable = false;
    }

    #region 交互事件

    private void OnPointerEnter(PointerEventData eventData)
    {
        if (!isInteractable || _isDragging) return;

        cardAnimator.TransformEffectToRotation(mouseOverPosition, Quaternion.identity, mouseOverScale);
    }

    private void OnPointerExit(PointerEventData eventData)
    {
        if (!isInteractable || _isDragging) return;

        cardAnimator.TransformEffectToRotation(position, rotation, scale);
    }

    private void OnPointerDown(PointerEventData eventData)
    {
        if (!isInteractable) return;

        EventCenter_Singleton.Instance.GetEvent<Action<Card>>("OnSelectCard")?.Invoke(this);
        _isDragging = true;
    }

    private void OnPointerUp(PointerEventData eventData)
    {
        EventCenter_Singleton.Instance.GetEvent<Action<Card>>("OnUnSelectCard")?.Invoke(this);

        _isDragging = false;
    }

    #endregion

    protected virtual void OnDestroy()
    {
        EventCenter_Singleton.Instance.RemoveEvent<Action>("OnCardArrangementComplete", OnCardArrangementComplete);
        EventCenter_Singleton.Instance.RemoveEvent<Action>("OnStartCardArrangement", OnStartCardArrangement);
        
        transform.DOKill();
    }
}