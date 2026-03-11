using System;
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
public class CardInteraction : MonoBehaviour, 
    IPointerEnterHandler, 
    IPointerExitHandler, 
    IPointerDownHandler, 
    IPointerUpHandler
{
    public float magnification = 1.1f;
    public CardTransformInfo _cardTransformInfo;
    
    public bool _isInteractable = true;
    public bool _isDragging{get; private set;}
    
    [Header("DOTween动画播放速度")] [SerializeField]
    private float rotation_speed=0.15f;

    [SerializeField] private float move_speed=0.15f;
    [SerializeField] private float magnification_speed=0.15f;

    private Camera _mainCamera;
    private HandPile _handPile;
    private IEventCenterObject<string> _eventCenterObject;

    private void Awake()
    {
        _eventCenterObject = GetComponent<IEventCenterObject<string>>();
    }

    private void Start()
    {
        _mainCamera =  EventCenter_Singleton.Instance.GetEvent<Func<Camera>>("MainCamera").Invoke();
        _cardTransformInfo = new CardTransformInfo
        {
            MouseOverScale = transform.localScale * magnification
        };
        
        CardView cardView = GetComponent<CardView>();
        var tempPos=new Vector3
        {
            z = -0.1f * _handPile.maxHandSize - 0.1f,
            y = _mainCamera.ViewportToWorldPoint(new Vector3(0.5f, 0)).y +
                cardView._background.bounds.size.y / 2
        };

        _cardTransformInfo.MouseOverPosition =tempPos ;
        
        EventCenter_Singleton.Instance.AddEvent<Action>("OnCardArrangementComplete",OnCardArrangementComplete);
        EventCenter_Singleton.Instance.AddEvent<Action>("OnStartCardArrangement",OnStartCardArrangement);
    }

    
    public void TransformEffect(Vector3 targetPosition, Quaternion targetRotation, Vector3 targetScale)
    {
        DOTween.To(() => transform.position, value => { transform.position = value; },
            targetPosition, move_speed);

        DOTween.To(() => transform.rotation, value => { transform.rotation = value; }, targetRotation.eulerAngles,
            rotation_speed);

        DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, targetScale, magnification_speed);
    }
    
    public void RecordPositionInfo(Vector3 position, Quaternion rotation)
    {
        _cardTransformInfo.Position = position;
        _cardTransformInfo.Rotation = rotation;
    }

    #region 交互事件

    public void OnPointerEnter(PointerEventData eventData)
    {
        if (!_isInteractable || _isDragging) return;
        
        TransformEffect(_cardTransformInfo.MouseOverPosition, Quaternion.identity, _cardTransformInfo.MouseOverScale);
        
       _eventCenterObject.eventCenter.GetEvent<Action<PointerEventData>>("OnPointerEnter")?.Invoke(eventData);
    }
    
    public void OnPointerExit(PointerEventData eventData)
    {
        if (!_isInteractable || _isDragging) return;
        
        TransformEffect(_cardTransformInfo.Position, _cardTransformInfo.Rotation, _cardTransformInfo.Scale);
        _eventCenterObject.eventCenter.GetEvent<Action<PointerEventData>>("OnPointerExit")?.Invoke(eventData);
    }
    
    public void OnPointerDown(PointerEventData eventData)
    {
        if (!_isInteractable) return;
        
        _isDragging = true;
        _eventCenterObject.eventCenter.GetEvent<Action<PointerEventData>>("OnPointerDown")?.Invoke(eventData);
        
    }
    
    public void OnPointerUp(PointerEventData eventData)
    {
        if (!_isInteractable) return;
        
        _isDragging = false;
        _eventCenterObject.eventCenter.GetEvent<Action<PointerEventData>>("OnPointerUp")?.Invoke(eventData);

    }
    
    #endregion

    private void OnCardArrangementComplete()
    {
        _isInteractable = true;
    }
  
    private void OnStartCardArrangement()
    {
        _isInteractable = false;
    }

    private void OnDestroy()
    {
        EventCenter_Singleton.Instance.RemoveEvent<Action>("OnCardArrangementComplete",OnCardArrangementComplete);
        EventCenter_Singleton.Instance.RemoveEvent<Action>("OnStartCardArrangement",OnStartCardArrangement);
    }
}