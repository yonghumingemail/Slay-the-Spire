using System;
using UnityEngine.Sprites;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

[Serializable]
public class CardInteraction : MouseInteraction
{
    public Camera _Camera
    {
        get => cardAnimator.camera;
        set => cardAnimator.camera = value;
    }

    private CardAnimator cardAnimator;

    private CardView _view;

    public float magnification = 1.1f;
    [Header("位置信息")] [SerializeField] private Vector3 position;
    [SerializeField] public Quaternion rotation;

    public Vector3 scale { get; private set; }
    public Vector3 mouseOverPosition { get; private set; }
    public Vector3 mouseOverScale { get; private set; }

    [SerializeField] private bool isMouseEnter;
    [SerializeField] private bool isDragging;
    [SerializeField] private bool isInteractable;

    public bool IsMouseEnter => isMouseEnter;

    public bool IsDragging
    {
        get => isDragging;
        set => isDragging = value;
    }

    public bool IsInteractable
    {
        get => isInteractable;
        set => isInteractable = value;
    }

    public Action enable { get; private set; }
    public Action disable { get; private set; }


    public void Init(CardAnimator animator)
    {
        cardAnimator = animator;
        _view = GetComponent<CardView>();
        var handPile = GetObject_GEA<HandPile>.Fire(this);

        scale = transform.localScale;
        mouseOverScale = scale * magnification;
        mouseOverPosition = new Vector3
        {
            x = 0,
            z = -0.1f * handPile.maxHandCount - 0.1f,
            y = animator.camera.ViewportToWorldPoint(new Vector3(0.5f, 0)).y +
                (_view.Background.bounds.size.y - 0.42f) / 2
        };
        enable = Enable;
        disable = Disable;
    }

    public void UpdatePositionInfo(Vector3 position_, Quaternion rotation_)
    {
        position = position_;
        rotation = rotation_;
        position_.y = mouseOverPosition.y;
        position_.z = mouseOverPosition.z;
        mouseOverPosition = position_;
    }

    public virtual void ReturnToHandPosition(Action callback = null)
    {
        cardAnimator.TransformEffect(gameObject, position, rotation, scale, callback);
    }

    public void Enable()
    {
        IsInteractable = true;
    }

    public void Disable()
    {
        isMouseEnter = false;
        IsInteractable = false;
        isDragging = false;
    }

    #region 交互事件

    public override void OnPointerEnter(PointerEventData eventData)
    {
        if (!IsInteractable || IsDragging) return;
        base.OnPointerEnter(eventData);
        isMouseEnter = true;
        cardAnimator.TransformEffect(_view.gameObject, mouseOverPosition, Quaternion.identity,
            mouseOverScale);
    }

    public override void OnPointerExit(PointerEventData eventData)
    {
        if (!IsInteractable || IsDragging) return;
        base.OnPointerExit(eventData);
        isMouseEnter = false;
        cardAnimator.TransformEffect(_view.gameObject, position, rotation, scale);
    }

    public override void OnPointerDown(PointerEventData eventData)
    {
        if (!IsInteractable) return;
        base.OnPointerDown(eventData);
        IsDragging = true;
    }

    public override void OnPointerUp(PointerEventData eventData)
    {
        base.OnPointerUp(eventData);
        IsDragging = false;
    }

    #endregion
}