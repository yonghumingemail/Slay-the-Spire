using System;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
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


    private void Awake()
    {
        _drag = GetComponent<IDrag>();
        eventCenter.AddEvent<Func<Card>>("Card", () => this);
        
        handPile = GetComponentInParent<HandPile>();

        EventCenter_Singleton.Instance.GetEvent<Func<DiscardPile>>("DiscardPile",
            action => { discardPile = action.Invoke(); });
        EventCenter_Singleton.Instance.GetEvent<Func<DrawPile>>("drawPile",
            action => { drawPile = action.Invoke(); });
        cardView = GetComponent<CardView>();
        cardAnimator = GetComponent<CardAnimator>();
        cardInteraction = GetComponent<CardInteraction>();
    }

    private void Start()
    {
        _mainCamera = EventCenter_Singleton.Instance.GetEvent<Func<Camera>>("MainCamera").Invoke();

        eventCenter.AddEvent<Func<CardView>>("CardView", () => cardView);
        eventCenter.AddEvent<Func<CardAnimator>>("CardAnimator", () => cardAnimator);
        eventCenter.AddEvent<Func<CardInteraction>>("CardInteraction", () => cardInteraction);

        eventCenter.AddEvent<Action>("OnCardUpdateUI", () => cardView.UpdateCardUI(cardEvent));

        eventCenter.AddEvent<Func<UniTask>>("RecycleCard_DiscardPile", OnRecycleCard_DiscardPile);
        eventCenter.AddEvent<Action>("OnRecycleCard_DrawPile", OnRecycleCard_DrawPile);
        eventCenter.AddEvent<Action>("UnTriggerCardEvent", () =>
        {
            //未触发就回到手牌中的位置
            cardInteraction.TransformEffect(
                cardInteraction._cardTransformInfo.Position,
                cardInteraction._cardTransformInfo.Rotation,
                cardInteraction._cardTransformInfo.Scale);
        });
    }

    private UniTask OnRecycleCard_DiscardPile()
    {
        handPile.cardInstances.Remove(this);
        var source = new UniTaskCompletionSource();
        cardAnimator.MoveToScreenCenter(() =>
        {
            cardAnimator.Recycle_DiscardPile(() =>
            {
                gameObject.SetActive(false);
                Vector3 screenCenter =
                    _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
                screenCenter.z = transform.position.z;
                transform.position = screenCenter;
                transform.localScale = cardInteraction._cardTransformInfo.Scale;

                discardPile.AddCard(this).Forget();
                source.TrySetResult();
            });
        });
        return source.Task;
    }

   
    
    private void OnRecycleCard_DrawPile()
    {
        handPile.cardInstances.Remove(this);
        cardAnimator.MoveToScreenCenter(() =>
        {
            cardAnimator.Recycle_DrawPile(() =>
            {
                gameObject.SetActive(false);

                Vector3 screenCenter =
                    _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
                screenCenter.z = transform.position.z;
                transform.position = screenCenter;
                transform.localScale = cardInteraction._cardTransformInfo.Scale;

                drawPile.AddCard(this).Forget();
            });
        });
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