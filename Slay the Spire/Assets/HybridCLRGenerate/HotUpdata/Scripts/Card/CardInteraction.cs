using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

[Serializable]
public class CardInteraction
{
    public bool _isDragging;
    public bool isInteractable = true;
    public Camera camera
    {
        get => cardAnimator.camera;
        set { cardAnimator.camera = value; }
    }

    private CardAnimator cardAnimator;

    private CardView _view;

    public float magnification = 1.1f;
    [Header("位置信息")] [SerializeField] public Vector3 position;
    [SerializeField] public Quaternion rotation;
    [SerializeField] public Vector3 scale;
    [SerializeField] public Vector3 mouseOverPosition;
    [SerializeField] public Vector3 mouseOverScale;

    public void Initialize(Camera camera, int maxCardCount, CardView view,MouseInteraction mouseInteraction)
    {
        cardAnimator = new CardAnimator(camera);
        _view = view;

        scale = _view.transform.localScale;
        mouseOverScale = scale * magnification;

        mouseOverPosition = new Vector3
        {
            z = -0.1f * maxCardCount - 0.1f,
            y = camera.ViewportToWorldPoint(new Vector3(0.5f, 0)).y +
                (view.Background.bounds.size.y - 2) / 2
        };
        
        mouseInteraction.OnMouseDownDelegate += OnPointerDown;
        mouseInteraction.OnMouseUpDelegate += OnPointerUp;
        mouseInteraction.OnMouseEnterDelegate += OnPointerEnter;
        mouseInteraction.OnMouseExitDelegate += OnPointerExit;
        
        EventCenter_Singleton.Instance._priorityQueueEventCenter.Subscribe<OnCardArrangementStart_EA>(OnStartCardArrangement, 0);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.Subscribe<OnCardArrangementEnd_EA>(OnCardArrangementEnd, 0);
    }

    
    
    public virtual void OnCardArrangementEnd(object sender, GameEventArgs args)
    {
        isInteractable = true;
    }

    public virtual void OnStartCardArrangement(object sender, GameEventArgs args)
    {
        isInteractable = false;
    }

    #region 交互事件

    public virtual void OnPointerEnter(PointerEventData eventData)
    {
        if (!isInteractable || _isDragging) return;

        cardAnimator.TransformEffectToRotation(_view.gameObject, mouseOverPosition, Quaternion.identity, mouseOverScale);
    }

    public virtual void OnPointerExit(PointerEventData eventData)
    {
        if (!isInteractable || _isDragging) return;

        cardAnimator.TransformEffectToRotation(_view.gameObject, position, rotation, scale);
    }

    public virtual void OnPointerDown(PointerEventData eventData)
    {
        if (!isInteractable) return;

        _isDragging = true;
    }

    public virtual void OnPointerUp(PointerEventData eventData)
    {
        _isDragging = false;
    }

    #endregion

    protected virtual void OnDestroy()
    {
        EventCenter_Singleton.Instance._priorityQueueEventCenter.UnSubscribe<OnCardArrangementStart_EA>(OnStartCardArrangement);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.UnSubscribe<OnCardArrangementEnd_EA>(OnCardArrangementEnd);
    }
}