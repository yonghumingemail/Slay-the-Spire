using System;
using UnityEngine.Sprites;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

[Serializable]
public class CardInteraction : MouseInteraction
{
    public bool _isDragging;
    public bool isInteractable = true;

    public Camera _Camera
    {
        get => cardAnimator.camera;
        set => cardAnimator.camera = value;
    }

    private CardAnimator cardAnimator;

    private CardView _view;

    public float magnification = 1.1f;
    [Header("位置信息")] [SerializeField] public Vector3 position;
    [SerializeField] public Quaternion rotation;

    [SerializeField] public Vector3 scale;
    [SerializeField] public Vector3 mouseOverPosition;
    [SerializeField] public Vector3 mouseOverScale;

    public bool isMouseEnter { get; set; }

    public Action enable { get; private set; }
    public Action disable { get; private set; }

    public void Init(Camera camera)
    {
        cardAnimator = new CardAnimator(camera);
        _view = GetComponent<CardView>();
        var handPile = GetObject_GEA<HandPile>.Fire(this, EventCenter_Singleton.Instance);

        scale = transform.localScale;
        mouseOverScale = scale * magnification;
        mouseOverPosition = new Vector3
        {
            z = -0.1f * handPile.maxHandCount - 0.1f,
            y = camera.ViewportToWorldPoint(new Vector3(0.5f, 0)).y +
                (_view.Background.bounds.size.y - 0.42f) / 2
        };

        enable = Enable;
        disable = Disable;
    }

    #region 交互事件

    public void Enable()
    {
        isInteractable = true; 
    }

    public void Disable()
    {
        isMouseEnter = false;
        isInteractable = false;
    }
    
    public override void OnPointerEnter(PointerEventData eventData)
    {
        base.OnPointerEnter(eventData);
        if (!isInteractable || _isDragging) return;
        isMouseEnter = true;
        cardAnimator.TransformEffect(_view.gameObject, mouseOverPosition, Quaternion.identity,
            mouseOverScale);
    }

    public override void OnPointerExit(PointerEventData eventData)
    {
        base.OnPointerExit(eventData);
        if (!isInteractable || _isDragging) return;

        isMouseEnter = false;
        cardAnimator.TransformEffect(_view.gameObject, position, rotation, scale);
    }

    public override void OnPointerDown(PointerEventData eventData)
    {
        base.OnPointerDown(eventData);
        if (!isInteractable) return;

        _isDragging = true;
    }

    public override void OnPointerUp(PointerEventData eventData)
    {
        base.OnPointerUp(eventData);
        _isDragging = false;
    }

    #endregion
}