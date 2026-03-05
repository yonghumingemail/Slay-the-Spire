using System;
using CardEvent_Ironclad;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

public class Card : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler,
    IPointerDownHandler, IPointerUpHandler
{
    public float _magnification = 1.1f; //UI放大比率

    public bool cardUIEffect;

    //卡牌排列的位置信息
    public Vector3 _scale;
    public Quaternion _rotation;
    public Vector3 _position;

    public CardEvent_Abs cardEvent;
    public CardInfoComponent _infoComponent; //{ get; private set; }

    public EventCenter<string> _eventCenter { get; private set; } = new EventCenter<string>();

    public HandPile handPile;

    private Camera _mainCamera;
    
    private DiscardPile discardPile;
    private DrawPile drawPile;
    private Outline outline;

    private IDrag _drag;

    [SerializeField] private Vector3 enterP; //鼠标进入卡牌后的位置

    private void Awake()
    {
        _scale = transform.localScale;
        _infoComponent = new CardInfoComponent(this);

        _drag = GetComponent<IDrag>();

        outline = transform.Find("Outline").GetComponent<Outline>();
        
        _eventCenter.AddEvent<Func<Card>>("Card", () => this);
        _eventCenter.AddEvent<Action>("EnableCardOutlineEffect", () => outline.Enable().Forget());
        _eventCenter.AddEvent<Action>("DisableCardOutlineEffect", () => outline.Disable());

        _eventCenter.AddEvent<Action>("OnTriggerCardEvent", OnTriggerCardEvent);
        _eventCenter.AddEvent<Action>("UnTriggerCardEvent", RegressPoint);

        _eventCenter.AddEvent<Action<Action>>("Recycle_DiscardPile", Recycle_DiscardPile);
        _eventCenter.AddEvent<Action<Action>>("Recycle_DrawPile", Recycle_DrawPile);
        _eventCenter.AddEvent<Action<Action>>("MoveToScreenCenter", MoveToScreenCenter);

        _eventCenter.AddEvent<Func<UniTask<bool>>>("OnCardDataUpdated", UpdateCardUI);

        handPile = GetComponentInParent<HandPile>();
        
        EventCenter_Singleton.Instance.GetEvent<Func<DiscardPile>>("DiscardPile",
            action => { discardPile = action.Invoke(); });
        EventCenter_Singleton.Instance.GetEvent<Func<DrawPile>>("drawPile",
            action => { drawPile = action.Invoke(); });
    }

    private void Start()
    {
        _mainCamera=EventCenter_Singleton.Instance.GetEvent<Func<Camera>>("MainCamera").Invoke();
        enterP.z = -0.1f * handPile.maxHandSize - 0.1f;
        enterP.y = _mainCamera.ViewportToWorldPoint(new Vector3(0.5f, 0)).y +
                   _infoComponent._background.bounds.size.y / 2;
    }

    public void RecordPositionInfo(Quaternion rotation, Vector3 position)
    {
        _rotation = rotation;
        _position = position;

        enterP.x = position.x;
    }

    #region DOTween动画

    private void MoveToScreenCenter(Action callback)
    {
        Vector3 screenCenter =
            _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        screenCenter.z = transform.position.z;

        DOTween.To(() => transform.position, value => { transform.position = value; }, screenCenter, move_speed)
            .onComplete += () => { callback?.Invoke(); };
    }

    private void Recycle_DiscardPile(Action callback)
    {
        Vector3 screenRightDown = _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width, 0, 0f));
        screenRightDown.z = transform.position.z;
        DOTween.To(() => transform.position, value => { transform.position = value; },
            screenRightDown,
            move_speed);

        DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, Vector3.zero,
            move_speed).onComplete += () =>
        {
            Vector3 screenCenter =
                _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
            screenCenter.z = transform.position.z;

            gameObject.SetActive(false);
            transform.position = screenCenter;
            transform.localScale = _scale;
            discardPile.AddCard(this).Forget();
            callback?.Invoke();
        };
    }

    private void Recycle_DrawPile(Action callback)
    {
        Vector3 screenLeftDown = _mainCamera.ScreenToWorldPoint(new Vector3(0, 0, 0f));
        screenLeftDown.z = transform.position.z;
        DOTween.To(() => transform.position, value => { transform.position = value; },
            screenLeftDown,
            move_speed);

        DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, Vector3.zero,
            move_speed).onComplete += () =>
        {
            Vector3 screenCenter =
                _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
            screenCenter.z = transform.position.z;

            gameObject.SetActive(false);
            transform.position = screenCenter;
            transform.localScale = _scale;
            drawPile.AddCard(this).Forget();
            callback?.Invoke();
        };
    }

    #endregion


    private void OnTriggerCardEvent()
    {
        cardUIEffect = false;
        handPile.cardInstances.Remove(this);
    }

    private UniTask<bool> UpdateCardUI()
    {
        return CardFactory.Instance.UpdateCardUI(this, cardEvent);
    }

    public UniTask<bool> Initialized(CardEvent_Abs cardEventAbs)
    {
        cardEvent?.OnDestroy();
        cardEvent = cardEventAbs;
        cardEventAbs.EventRegister(_eventCenter);

        _drag.ClearEvent();

        if (!cardEvent.parameter.isDirected)
        {
            _drag.SetDragEnabled(true);
            _drag.OnEndDragEvent += _transform => { RegressPoint(); };
        }
        else
        {
            _drag.SetDragEnabled(false);
            handPile.cardDragLine.Register(_eventCenter);
        }

        return UpdateCardUI();
    }


    [Header("DOTween动画播放速度")] [SerializeField]
    private float rotation_speed = 0.15f;

    [SerializeField] private float move_speed = 0.15f;
    [SerializeField] private float magnification_speed = 0.15f;

    /// <summary>
    /// 回到原位置
    /// </summary>
    private void RegressPoint()
    {
        DOTween.To(() => transform.rotation, value => { transform.rotation = value; }, _rotation.eulerAngles,
            rotation_speed);
        DOTween.To(() => transform.position, value => { transform.position = value; },
            _position, move_speed);
        DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, _scale, magnification_speed);
    }

    #region 鼠标事件

    public void OnPointerEnter(PointerEventData eventData)
    {
        if (!cardUIEffect || handPile == null || handPile.isDragging) return;

        DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, _scale * _magnification,
            magnification_speed);
        DOTween.To(() => transform.rotation, value => { transform.rotation = value; }, Vector3.zero, rotation_speed);
        DOTween.To(() => transform.position, value => { transform.position = value; }, enterP
            , move_speed);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if (!cardUIEffect || handPile == null || handPile.isDragging) return;

        RegressPoint();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (!cardUIEffect) return;

        handPile.isDragging = true;
        handPile.selectedCard = this;

        _eventCenter.GetEvent<Action<PointerEventData>>("OnPointerDown")?.Invoke(eventData);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (!cardUIEffect) return;
        handPile.isDragging = false;
        handPile.selectedCard = null;
        _eventCenter.GetEvent<Action<PointerEventData>>("OnPointerUp")?.Invoke(eventData);
    }

    #endregion


    private void OnDestroy()
    {
        _eventCenter.Clear();
        cardEvent?.OnDestroy();
        transform.DOKill();
    }
}