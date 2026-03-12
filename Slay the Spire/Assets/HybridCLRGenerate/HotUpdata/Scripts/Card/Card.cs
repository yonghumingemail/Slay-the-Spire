using System;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

public class Card : MonoBehaviour, IEventCenterObject<string>
{
    public CardView cardView { get; private set; }
    public CardAnimator cardAnimator { get; private set; }
    public CardInteraction cardInteraction { get; private set; }

    public CardEvent_Abs cardEvent;

    public IEventCenter<string> eventCenter { get; private set; } = new EventCenter<string>();

    public HandPile handPile;

    private DiscardPile discardPile;
    private DrawPile drawPile;
    private Outline outline;

    private Camera _mainCamera;

    private IDrag _drag;
    private MouseInteraction _mouseInteraction;

    private void Awake()
    {
        _drag = GetComponent<IDrag>();
        _mouseInteraction = GetComponent<MouseInteraction>();
        handPile = GetComponentInParent<HandPile>();
        
        _mouseInteraction.OnMouseEnter += data => { eventCenter.GetEvent<Action<PointerEventData>>("OnMouseEnter")?.Invoke(data); };
        _mouseInteraction.OnMouseExit += data => { eventCenter.GetEvent<Action<PointerEventData>>("OnMouseExit")?.Invoke(data); };
        _mouseInteraction.OnMouseDown += data => { eventCenter.GetEvent<Action<PointerEventData>>("OnMouseDown")?.Invoke(data); };
        _mouseInteraction.OnMouseUp += data => { eventCenter.GetEvent<Action<PointerEventData>>("OnMouseUp")?.Invoke(data); };

        _mainCamera = EventCenter_Singleton.Instance.GetEvent<Func<Camera>>("MainCamera").Invoke();

        eventCenter.AddEvent<Func<Card>>("Card", () => this);
        eventCenter.AddEvent<Func<HandPile>>("HandPile", () => handPile);
        eventCenter.AddEvent<Func<Camera>>("MainCamera", () => _mainCamera);

        eventCenter.AddEvent<Func<CardView>>("CardView", () => cardView);
        eventCenter.AddEvent<Func<CardAnimator>>("CardAnimator", () => cardAnimator);
        eventCenter.AddEvent<Func<CardInteraction>>("CardInteraction", () => cardInteraction);

        eventCenter.AddEvent<Action>("OnCardUpdateUI", () => cardView.UpdateCardUI(cardEvent));

        eventCenter.AddEvent<Func<UniTask>>("RecycleCard_DiscardPile", OnRecycleCard_DiscardPile);
        eventCenter.AddEvent<Action>("OnRecycleCard_DrawPile", OnRecycleCard_DrawPile);
        eventCenter.AddEvent<Action>("UnTriggerCardEvent", () =>
        {
            // 未触发就回到手牌中的位置
            cardInteraction.TransformEffect(
                cardInteraction._position,
                cardInteraction._rotation,
                cardInteraction._scale);
        });

        cardView = new CardView(eventCenter);
        cardAnimator = new CardAnimator();
        cardInteraction = new CardInteraction(eventCenter);
        
        EventCenter_Singleton.Instance.GetEvent<Func<DiscardPile>>("DiscardPile",
            action => { discardPile = action.Invoke(); });
        EventCenter_Singleton.Instance.GetEvent<Func<DrawPile>>("drawPile",
            action => { drawPile = action.Invoke(); });
    }

    private UniTask OnRecycleCard_DiscardPile()
    {
        handPile.cardInstances.Remove(this);
        var source = new UniTaskCompletionSource();
        // cardAnimator.MoveToScreenCenter(() =>
        // {
        //     cardAnimator.Recycle_DiscardPile(() =>
        //     {
        //         gameObject.SetActive(false);
        //         Vector3 screenCenter =
        //             _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        //         screenCenter.z = transform.position.z;
        //         transform.position = screenCenter;
        //         transform.localScale = cardInteraction._scale;
        //
        //         discardPile.AddCard(this).Forget();
        //         source.TrySetResult();
        //     });
        // });
        return source.Task;
    }


    private void OnRecycleCard_DrawPile()
    {
        handPile.cardInstances.Remove(this);
        // cardAnimator.MoveToScreenCenter(() =>
        // {
        //     cardAnimator.Recycle_DrawPile(() =>
        //     {
        //         gameObject.SetActive(false);
        //
        //         Vector3 screenCenter =
        //             _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        //         screenCenter.z = transform.position.z;
        //         transform.position = screenCenter;
        //         transform.localScale = cardInteraction._scale;
        //
        //         drawPile.AddCard(this).Forget();
        //     });
        // });
    }

    public void Initialized(CardEvent_Abs cardEventAbs)
    {
        cardEvent?.OnDestroy();
        cardEvent = cardEventAbs;
        cardEventAbs.EventRegister(eventCenter);

        _drag.ClearEvent();

        if (!cardEvent.parameter.isDirected)
        {
            _drag.SetDragEnabled(true);
        }
        else
        {
            _drag.SetDragEnabled(false);
            handPile.cardDragLine.Register(eventCenter);
        }

        cardView.UpdateCardUI(cardEventAbs);
    }


    private void OnDestroy()
    {
        eventCenter.Clear();
        cardEvent?.OnDestroy();
        transform.DOKill();
    }
}