using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

public class CardInteraction : MonoBehaviour, IPointerEnterHandler,
    IPointerExitHandler,
    IPointerDownHandler,
    IPointerUpHandler
{
    public Action<PointerEventData> OnMouseDownDelegate { get; set; }
    public Action<PointerEventData> OnMouseUpDelegate { get; set; }
    public Action<PointerEventData> OnMouseEnterDelegate { get; set; }
    public Action<PointerEventData> OnMouseExitDelegate { get; set; }

    public bool _isDragging;
    public bool isInteractable = true;

    public CardAnimator cardAnimator;

    public float magnification = 1.1f;
    [Header("位置信息")] [SerializeField] public Vector3 position;
    [SerializeField] public Quaternion rotation;
    [SerializeField] public Vector3 scale;
    [SerializeField] public Vector3 mouseOverPosition;
    [SerializeField] public Vector3 mouseOverScale;


    private CardComponentInfo cardComponentInfo;

    private void Start()
    {
        cardAnimator = GetComponent<CardAnimator>();
        cardComponentInfo = GetComponent<CardComponentInfo>();
        scale = transform.localScale;
        mouseOverScale = transform.localScale * magnification;

        mouseOverPosition = new Vector3
        {
            z = -0.1f * cardComponentInfo.HandPile.maxHandSize - 0.1f,
            y = cardComponentInfo.MainCamera.ViewportToWorldPoint(new Vector3(0.5f, 0)).y +
                cardComponentInfo.Background.bounds.size.y / 2
        };

        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Action>("OnCardArrangementComplete", OnCardArrangementComplete, 0);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Action>("OnStartCardArrangement", OnStartCardArrangement, 0);
    }

    public virtual void OnCardArrangementComplete()
    {
        isInteractable = true;

        position = transform.position;
        rotation = transform.rotation;
        mouseOverPosition.x = position.x;
    }

    public virtual void OnStartCardArrangement()
    {
        isInteractable = false;
    }

    #region 交互事件

    public virtual void OnPointerEnter(PointerEventData eventData)
    {
        
        if (!isInteractable || _isDragging) return;
        
        cardAnimator.TransformEffectToRotation(gameObject, mouseOverPosition, Quaternion.identity, mouseOverScale);
        OnMouseEnterDelegate?.Invoke(eventData);
    }

    public virtual void OnPointerExit(PointerEventData eventData)
    {
        
        if (!isInteractable || _isDragging) return;
        
        cardAnimator.TransformEffectToRotation(gameObject, position, rotation, scale);
        OnMouseExitDelegate?.Invoke(eventData);
    }

    public virtual void OnPointerDown(PointerEventData eventData)
    {
        if (!isInteractable) return;

        _isDragging = true;
        OnMouseDownDelegate?.Invoke(eventData);
    }

    public virtual void OnPointerUp(PointerEventData eventData)
    {
        OnMouseUpDelegate?.Invoke(eventData);
        _isDragging = false;
    }

    #endregion

    protected virtual void OnDestroy()
    {
        OnMouseDownDelegate = null;
        OnMouseUpDelegate = null;
        OnMouseEnterDelegate = null;
        OnMouseExitDelegate = null;

        EventCenter_Singleton.Instance._priorityQueueEventCenter.RemoveEvent<Action>("OnCardArrangementComplete", OnCardArrangementComplete);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.RemoveEvent<Action>("OnStartCardArrangement", OnStartCardArrangement);

        transform.DOKill();
    }
}