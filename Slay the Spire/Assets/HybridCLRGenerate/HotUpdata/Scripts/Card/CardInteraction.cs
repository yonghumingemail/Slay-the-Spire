using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

[Serializable]
public class CardInteraction
{
    //****** 卡牌在显示在屏幕上的位置信息 ******
    public Vector3 _position;
    public Quaternion _rotation;
    public Vector3 _scale;

    public Vector3 MouseOverPosition;
    public Vector3 MouseOverScale;
    //****** end ******

    public bool _isInteractable = true;
    public bool _isDragging { get; private set; }

    public float magnification = 1.1f;

    [Header("DOTween动画播放速度")] [SerializeField]
    private float rotation_speed = 0.15f;

    [SerializeField] private float move_speed = 0.2f;
    [SerializeField] private float magnification_speed = 0.15f;

    private IEventCenter<string> _eventCenter;
    private GameObject card;
    
    public CardInteraction(IEventCenter<string> eventCenter)
    {
        _eventCenter = eventCenter;

        card = _eventCenter.GetEvent<Func<Card>>("Card").Invoke().gameObject;
        HandPile handPile = _eventCenter.GetEvent<Func<HandPile>>("HandPile").Invoke();
        Camera mainCamera = _eventCenter.GetEvent<Func<Camera>>("MainCamera").Invoke();
        CardView cardView = _eventCenter.GetEvent<Func<CardView>>("CardView").Invoke();

        _scale = card.transform.localScale;
        MouseOverScale = card.transform.localScale * magnification;
        MouseOverPosition = new Vector3
        {
            z = -0.1f * handPile.maxHandSize - 0.1f,
            y = mainCamera.ViewportToWorldPoint(new Vector3(0.5f, 0)).y +
                cardView._background.bounds.size.y / 2
        };

        _eventCenter.AddEvent<Action<PointerEventData>>("OnPointerEnter", OnPointerEnter);
        _eventCenter.AddEvent<Action<PointerEventData>>("OnPointerExit", OnPointerExit);
        _eventCenter.AddEvent<Action<PointerEventData>>("OnPointerDown", OnPointerDown);
        _eventCenter.AddEvent<Action<PointerEventData>>("OnPointerUp", OnPointerUp);
        _eventCenter.AddEvent<Action>("OnDestroy", OnDestroy);
        
        EventCenter_Singleton.Instance.AddEvent<Action>("OnCardArrangementComplete", OnCardArrangementComplete);
        EventCenter_Singleton.Instance.AddEvent<Action>("OnStartCardArrangement", OnStartCardArrangement);
    }


    public void TransformEffect(Vector3 targetPosition, Quaternion targetRotation, Vector3 targetScale)
    {
        DOTween.To(() => card.transform.position, value => { card.transform.position = value; },
            targetPosition, move_speed);

        DOTween.To(() => card.transform.rotation, value => { card.transform.rotation = value; }, targetRotation.eulerAngles,
            rotation_speed);

        DOTween.To(() => card.transform.localScale, value => { card.transform.localScale = value; }, targetScale, magnification_speed);
    }

    private void RecordPositionInfo()
    {
        _position = card.transform.position;
        _rotation = card.transform.rotation;
        MouseOverPosition.x = _position.x;
    }

    #region 交互事件

    private void OnPointerEnter(PointerEventData eventData)
    {
        if (!_isInteractable || _isDragging) return;

        TransformEffect(MouseOverPosition, Quaternion.identity, MouseOverScale);
    }

    private void OnPointerExit(PointerEventData eventData)
    {
        if (!_isInteractable || _isDragging) return;

        TransformEffect(_position, _rotation, _scale);
    }

    private void OnPointerDown(PointerEventData eventData)
    {
        if (!_isInteractable) return;

        _isDragging = true;
    }

    private void OnPointerUp(PointerEventData eventData)
    {
        if (!_isInteractable) return;

        _isDragging = false;
    }

    #endregion

    private void OnCardArrangementComplete()
    {
        _isInteractable = true;
        RecordPositionInfo();
    }

    private void OnStartCardArrangement()
    {
        _isInteractable = false;
    }

    private void OnDestroy()
    {
        EventCenter_Singleton.Instance.RemoveEvent<Action>("OnCardArrangementComplete", OnCardArrangementComplete);
        EventCenter_Singleton.Instance.RemoveEvent<Action>("OnStartCardArrangement", OnStartCardArrangement);
    }
}