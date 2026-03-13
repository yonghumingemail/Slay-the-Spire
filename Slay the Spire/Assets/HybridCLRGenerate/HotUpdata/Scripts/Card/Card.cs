using System;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

public class Card : MonoBehaviour, IEventCenterObject<string>
{
    public CardView CardView => cardView;
    public CardAnimator CardAnimator => cardAnimator;
    public CardInteraction CardInteraction => cardInteraction;
    public CardEvent_Abs CardEvent => cardEvent;

    [SerializeField] private CardView cardView;
    [SerializeField] private CardAnimator cardAnimator;
    [SerializeField] private CardInteraction cardInteraction;
    private CardEvent_Abs cardEvent;

    public IEventCenter<string> eventCenter { get; private set; } = new EventCenter<string>();
    public HandPile handPile;

    private DiscardPile discardPile;
    private DrawPile drawPile;
    private Outline outline;

    public Camera _mainCamera { get; private set; }

    private IDrag _drag;
    private MouseInteraction _mouseInteraction;

    private void Awake()
    {
        _drag = GetComponent<IDrag>();
        _mouseInteraction = GetComponent<MouseInteraction>();
        handPile = GetComponentInParent<HandPile>();

        _mouseInteraction.OnMouseEnter += data =>
        {
            eventCenter.GetEvent<Action<PointerEventData>>("OnPointerEnter")?.Invoke(data);
        };
        _mouseInteraction.OnMouseExit += data =>
        {
            eventCenter.GetEvent<Action<PointerEventData>>("OnPointerExit")?.Invoke(data);
        };
        _mouseInteraction.OnMouseDown += data =>
        {
            EventCenter_Singleton.Instance.GetEvent<Action<Card>>("OnSelectCard")?.Invoke(this);
            eventCenter.GetEvent<Action<PointerEventData>>("OnPointerDown")?.Invoke(data);
        };
        _mouseInteraction.OnMouseUp += data =>
        {
            EventCenter_Singleton.Instance.GetEvent<Action<Card>>("OnUnSelectCard")?.Invoke(this);
            eventCenter.GetEvent<Action<PointerEventData>>("OnPointerUp")?.Invoke(data);
            handPile.AddAsyncCardEvent(this);
        };

        _mainCamera = Camera.main;
        cardView = new CardView(eventCenter, gameObject);
        cardAnimator = new CardAnimator(eventCenter, gameObject, _mainCamera);
        cardInteraction = new CardInteraction(eventCenter, this);
        cardView.Enable(false);

        eventCenter.AddEvent<Action>("OnCardUpdateUI", () => cardView.UpdateCardUI(cardEvent));

        eventCenter.AddEvent<Func<UniTask>>("RecycleCard_DiscardPile", OnRecycleCard_DiscardPile);
        eventCenter.AddEvent<Func<UniTask>>("OnRecycleCard_DrawPile", OnRecycleCard_DrawPile);
        eventCenter.AddEvent<Action>("UnTriggerCardEvent", () =>
        {
            // 未触发就回到手牌中的位置
            cardInteraction.TransformEffect(
                gameObject,
                cardInteraction.position,
                cardInteraction.rotation,
                cardInteraction.scale);
        });


        EventCenter_Singleton.Instance.GetEvent<Func<DiscardPile>>("DiscardPile",
            action => { discardPile = action.Invoke(); });
        EventCenter_Singleton.Instance.GetEvent<Func<DrawPile>>("drawPile",
            action => { drawPile = action.Invoke(); });
    }

    private void Start()
    {
    }

    private UniTask OnRecycleCard_DiscardPile()
    {
        handPile.cardInstances.Remove(this);
        var source = new UniTaskCompletionSource();
        cardAnimator.MoveToScreenCenter(gameObject, () =>
        {
            cardAnimator.Recycle_DiscardPile(gameObject, () =>
            {
                gameObject.SetActive(false);
                Vector3 screenCenter =
                    _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
                screenCenter.z = transform.position.z;
                transform.position = screenCenter;
                transform.localScale = cardInteraction.scale;

                discardPile.AddCard(this).Forget();
                source.TrySetResult();
            });
        });
        return source.Task;
    }


    private UniTask OnRecycleCard_DrawPile()
    {
        handPile.cardInstances.Remove(this);
        var source = new UniTaskCompletionSource();
        cardAnimator.MoveToScreenCenter(gameObject, () =>
        {
            cardAnimator.Recycle_DrawPile(gameObject, () =>
            {
                gameObject.SetActive(false);

                Vector3 screenCenter =
                    _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
                screenCenter.z = transform.position.z;
                transform.position = screenCenter;
                transform.localScale = cardInteraction.scale;
                source.TrySetResult();
                drawPile.AddCard(this).Forget();
            });
        });
        return source.Task;
    }

    public void Initialized(CardEvent_Abs cardEventAbs)
    {
        gameObject.SetActive(true);

        cardEvent?.OnDestroy();
        cardEvent = cardEventAbs;
        cardEventAbs.EventRegister(eventCenter);

        _drag.ClearEvent();

        if (!cardEvent.Parameter.isDirected)
        {
            _drag.SetDragEnabled(true);
        }
        else
        {
            _drag.SetDragEnabled(false);
            handPile.cardDragLine.Register(eventCenter);
        }

        cardView.UpdateCardUI(cardEventAbs);
        cardView.Enable(true);
    }


    private void OnDestroy()
    {
        print("OnDestroy");
        eventCenter.GetEvent<Action>("OnDestroy")?.Invoke();
        eventCenter.Clear();
        transform.DOKill();
    }
}