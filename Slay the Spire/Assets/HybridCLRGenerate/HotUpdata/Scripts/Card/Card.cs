using System;
using CardEvent_Ironclad;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

public struct CardTransformInfo
{
    public Vector3 Position { get; set; }
    public Quaternion Rotation { get; set; }
    public Vector3 Scale { get; set; } 
    
    public Vector3 MouseOverPosition { get; set; }
    public Vector3 MouseOverScale { get; set; }
}
public class Card : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler,
    IPointerDownHandler, IPointerUpHandler
{
    public CardView cardView;
    public CardAnimator cardAnimator;
    
    private Camera _mainCamera;
    
    public CardTransformInfo _cardTransformInfo;

    public bool cardUIEffect;
    public CardEvent_Abs cardEvent;
    public EventCenter<string> _eventCenter { get; private set; } = new EventCenter<string>();

    public HandPile handPile;

    private DiscardPile discardPile;
    private DrawPile drawPile;
    private Outline outline;

    private IDrag _drag;

    [SerializeField] private Vector3 enterP; //鼠标进入卡牌后的位置
    
    public float magnification = 1.1f;
    private void Awake()
    {
        _drag = GetComponent<IDrag>();
        outline = transform.Find("Outline").GetComponent<Outline>();

        _eventCenter.AddEvent<Func<Card>>("Card", () => this);
        _eventCenter.AddEvent<Action>("EnableCardOutlineEffect", () => outline.Enable().Forget());
        _eventCenter.AddEvent<Action>("DisableCardOutlineEffect", () => outline.Disable());

        _eventCenter.AddEvent<Action>("OnTriggerCardEvent", OnTriggerCardEvent);
        // _eventCenter.AddEvent<Action>("UnTriggerCardEvent", RegressPoint);
        //
        // _eventCenter.AddEvent<Action<Action>>("Recycle_DiscardPile", Recycle_DiscardPile);
        // _eventCenter.AddEvent<Action<Action>>("Recycle_DrawPile", Recycle_DrawPile);
        // _eventCenter.AddEvent<Action<Action>>("MoveToScreenCenter", MoveToScreenCenter);


        handPile = GetComponentInParent<HandPile>();

        EventCenter_Singleton.Instance.GetEvent<Func<DiscardPile>>("DiscardPile",
            action => { discardPile = action.Invoke(); });
        EventCenter_Singleton.Instance.GetEvent<Func<DrawPile>>("drawPile",
            action => { drawPile = action.Invoke(); });
    }

    private void Start()
    {
        _mainCamera = EventCenter_Singleton.Instance.GetEvent<Func<Camera>>("MainCamera").Invoke();
        
        cardView = new CardView(gameObject);
        cardAnimator = new CardAnimator(gameObject, _mainCamera);
        
        _cardTransformInfo = new CardTransformInfo
        {
            MouseOverScale = transform.localScale * magnification
        };

        var tempPos=new Vector3
        {
            z = -0.1f * handPile.maxHandSize - 0.1f,
            y = _mainCamera.ViewportToWorldPoint(new Vector3(0.5f, 0)).y +
                cardView._background.bounds.size.y / 2
        };

        _cardTransformInfo.MouseOverPosition =tempPos ;
        
    }
    
    public void RecordPositionInfo(Vector3 position, Quaternion rotation)
    {
        _cardTransformInfo.Position = position;
        _cardTransformInfo.Rotation = rotation;
    }
    
    private void OnTriggerCardEvent()
    {
        cardUIEffect = false;
        handPile.cardInstances.Remove(this);
    }

  

    public void Initialized(CardEvent_Abs cardEventAbs)
    {
        cardEvent?.OnDestroy();
        cardEvent = cardEventAbs;
        cardEventAbs.EventRegister(_eventCenter);

        _drag.ClearEvent();

        if (!cardEvent.parameter.isDirected)
        {
            _drag.SetDragEnabled(true);
        }
        else
        {
            _drag.SetDragEnabled(false);
            handPile.cardDragLine.Register(_eventCenter);
        }

        cardView.UpdateCardUI(cardEventAbs);
    }
    
    #region 鼠标事件

    public void OnPointerEnter(PointerEventData eventData)
    {
        if (!cardUIEffect || handPile == null || handPile.isDragging) return;

        // DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, _scale * _magnification,
        //     magnification_speed);
        // DOTween.To(() => transform.rotation, value => { transform.rotation = value; }, Vector3.zero, rotation_speed);
        // DOTween.To(() => transform.position, value => { transform.position = value; }, enterP
        //     , move_speed);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if (!cardUIEffect || handPile == null || handPile.isDragging) return;

     //   RegressPoint();
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