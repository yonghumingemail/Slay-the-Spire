using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

[Serializable]
public class CardInteraction
{
    //****** 卡牌在显示在屏幕上的位置信息 ******
    [Header("位置信息")] public Vector3 position;
    public Quaternion rotation;
    public Vector3 scale;
    public Vector3 mouseOverPosition;
    public Vector3 mouseOverScale;
    //****** end ******
    public bool _isDragging;
    public bool isInteractable = true;
    public float magnification = 1.1f;

    [Header("DOTween动画播放速度")] [SerializeField]
    private float rotation_speed = 0.15f;

    [SerializeField] private float move_speed = 0.2f;
    [SerializeField] private float magnification_speed = 0.15f;

    private IEventCenter<string> _eventCenter;
    private GameObject _card;
    public CardInteraction(IEventCenter<string> eventCenter,Card card)
    {
        _eventCenter = eventCenter;
        _card = card.gameObject;

        scale =card.transform.localScale;
        mouseOverScale = card.transform.localScale * magnification;
        mouseOverPosition = new Vector3
        {
            z = -0.1f * card.handPile.maxHandSize - 0.1f,
            y = card._mainCamera.ViewportToWorldPoint(new Vector3(0.5f, 0)).y +
                card.CardView.Background.bounds.size.y / 2
        };

        card._mouseInteraction.OnMouseDown += OnPointerDown;
        card._mouseInteraction.OnMouseUp += OnPointerUp;
        card._mouseInteraction.OnMouseEnter += OnPointerEnter;
        card._mouseInteraction.OnMouseExit += OnPointerExit;
        
        _eventCenter.AddEvent<Action>("OnDestroy", OnDestroy);

        EventCenter_Singleton.Instance.AddEvent<Action>("OnCardArrangementComplete", OnCardArrangementComplete);
        EventCenter_Singleton.Instance.AddEvent<Action>("OnStartCardArrangement", OnStartCardArrangement);
    }


    public void RecordPositionInfo()
    {
        position = _card.transform.position;
        rotation = _card.transform.rotation;
        mouseOverPosition.x = position.x;
    }
    public void TransformEffect(GameObject target,Vector3 targetPosition, Quaternion targetRotation, Vector3 targetScale)
    {
        DOTween.To(() => target.transform.position, value => { target.transform.position = value; },
            targetPosition, move_speed);

        DOTween.To(() => target.transform.rotation, value => { target.transform.rotation = value; },
            targetRotation.eulerAngles,
            rotation_speed);

        DOTween.To(() => target.transform.localScale, value => { target.transform.localScale = value; }, targetScale,
            magnification_speed);
    }

    

    #region 交互事件

    private void OnPointerEnter(PointerEventData eventData)
    {
        if (!isInteractable || _isDragging) return;

        TransformEffect(_card,mouseOverPosition, Quaternion.identity,mouseOverScale);
    }

    private void OnPointerExit(PointerEventData eventData)
    {
  
        if (!isInteractable || _isDragging) return;
        
        TransformEffect(_card,position, rotation, scale);
    }

    private void OnPointerDown(PointerEventData eventData)
    {
        if (!isInteractable) return;

        _isDragging = true;
    }

    private void OnPointerUp(PointerEventData eventData)
    {
        _isDragging = false;
    }

    #endregion

    private void OnCardArrangementComplete()
    {
        isInteractable = true;
        RecordPositionInfo();
    }

    private void OnStartCardArrangement()
    {
        isInteractable = false;
    }

    private void OnDestroy()
    {
        EventCenter_Singleton.Instance.RemoveEvent<Action>("OnCardArrangementComplete", OnCardArrangementComplete);
        EventCenter_Singleton.Instance.RemoveEvent<Action>("OnStartCardArrangement", OnStartCardArrangement);
    }
}