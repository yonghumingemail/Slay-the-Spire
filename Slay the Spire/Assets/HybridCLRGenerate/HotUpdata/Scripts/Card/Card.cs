using System;
using CardEvent_Ironclad;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

public enum CardRecycleType
{
    Destroy,DiscardPile,DrawPile
}
public class Card : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler,
    IPointerDownHandler, IPointerUpHandler
{
    public float _magnification = 1.1f; //UI放大比率

    public bool cardUIEffect;

    //卡牌在屏幕中的位置信息
    public Vector3 _scale;
    public Quaternion _rotation;
    public Vector3 _position;

    public CardEvent_Abs cardEvent;
    public CardInfoComponent _infoComponent; //{ get; private set; }

    public EventCenter<string> _eventCenter { get; private set; } = new EventCenter<string>();

    public HandPile handPile;
    private CardDragLine cardDragLine;
    private DiscardPile discardPile;
    private Outline outline;

    private IDrag _drag;

    private Vector3 enterP; //鼠标进入卡牌后的位置

    private void Awake()
    {
        _scale = transform.localScale;
        _infoComponent = new CardInfoComponent(this);

        _drag = GetComponent<IDrag>();

        outline = transform.Find("Outline").GetComponent<Outline>();
        _eventCenter.AddEvent<Action>("EnableCardOutlineEffect", () => outline.Enable().Forget());
        _eventCenter.AddEvent<Action>("DisableCardOutlineEffect", () => outline.Disable());

        _eventCenter.AddEvent<Func<Card>>("Card", () => this);
        _eventCenter.AddEvent<Action>("OnTriggerCardEvent", OnTriggerCardEvent);
        _eventCenter.AddEvent<Action>("UnTriggerCardEvent", RegressPoint);
        _eventCenter.AddEvent<Action>("OnCardDataUpdated", () => { CardFactory.Instance.UpdateCardUI(this).Forget(); });

        handPile = GetComponentInParent<HandPile>();
        enterP.z = -0.1f * handPile.maxHandSize - 0.1f;
        enterP.y = Camera.main.ViewportToWorldPoint(new Vector3(0.5f, 0)).y + _infoComponent._background.bounds.size.y / 2;

        EventCenter_Singleton.Instance.GetEvent<Func<CardDragLine>>("CardDragLine",
            action => { cardDragLine = action.Invoke(); });
        EventCenter_Singleton.Instance.GetEvent<Func<DiscardPile>>("DiscardPile",
            action => { discardPile = action.Invoke(); });
    }

    public void RecordPositionInfo(Quaternion rotation, Vector3 position)
    {
        _rotation = rotation;
        _position = position;

        enterP.x = position.x;
    }

    private void OnTriggerCardEvent()
    {
        cardUIEffect = false;
        handPile.cardInstances.Remove(this);
    }

    private void DestroyCardAnimator()
    {
        Vector3 screenCenter = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        screenCenter.z = transform.position.z;

        DOTween.To(() => transform.position, value => { transform.position = value; }, screenCenter, move_speed).onComplete += () =>
        {
            gameObject.SetActive(false);
            transform.position = screenCenter;
            transform.localScale = _scale;
            //改,不是所有卡牌都回弃牌堆
            discardPile.AddCard(this).Forget();
        };
    }

    private void RecycleAnimator(CardRecycleType  recycleType)
    {
        //改用动画实现
        Vector3 screenCenter = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        screenCenter.z = transform.position.z;

        DOTween.To(() => transform.position, value => { transform.position = value; }, screenCenter, move_speed).onComplete += () =>
        {
            Vector3 screenRightDown = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, 0, 0f));
            screenRightDown.z = transform.position.z;
            DOTween.To(() => transform.position, value => { transform.position = value; },
                screenRightDown,
                move_speed);

            DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, Vector3.zero,
                move_speed).onComplete += () =>
            {
                Vector3 screenCenter = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
                screenCenter.z = transform.position.z;

                gameObject.SetActive(false);
                transform.position = screenCenter;
                transform.localScale = _scale;
                //改,不是所有卡牌都回弃牌堆
                discardPile.AddCard(this).Forget();
            };
        };
    }
    

    public async UniTask<bool> Initialized(CardEvent_Abs cardEventAbs)
    {
        cardEvent = cardEventAbs;
        cardEventAbs.EventRegister(_eventCenter);

        _drag.ClearEvent();

        if (!cardEvent.parameter.isDirected)
        {
            _drag.SetDragEnabled(true);
            _drag.OnEndDragEvent += _transform => { RegressPoint(); };
        }
        else
        {
            _drag.SetDragEnabled(false);
            cardDragLine.Register(_eventCenter);
        }

        return await CardFactory.Instance.UpdateCardUI(this, cardEventAbs);
    }


    private float magnification_speed = 0.15f;
    private float move_speed = 0.2f;
    private float rotation_speed = 0.15f;

    /// <summary>
    /// 回到原位置
    /// </summary>
    private void RegressPoint()
    {
        DOTween.To(() => transform.rotation, value => { transform.rotation = value; }, _rotation.eulerAngles,
            rotation_speed);
        DOTween.To(() => transform.position, value => { transform.position = value; },
            _position, move_speed);
        DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, _scale, magnification_speed);
    }


    public void OnPointerEnter(PointerEventData eventData)
    {
        if (!cardUIEffect || handPile == null || handPile.isDragging) return;

        DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, _scale * _magnification,
            magnification_speed);
        DOTween.To(() => transform.rotation, value => { transform.rotation = value; }, Vector3.zero, rotation_speed);
        DOTween.To(() => transform.position, value => { transform.position = value; }, enterP
            , move_speed);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if (!cardUIEffect || handPile == null || handPile.isDragging) return;

        RegressPoint();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (!cardUIEffect) return;

        handPile.isDragging = true;
        handPile.selectedCard = this;
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (!cardUIEffect) return;
        handPile.isDragging = false;
        handPile.selectedCard = null;

        _eventCenter.GetEvent<Action<PointerEventData>>("OnPointerUp")?.Invoke(eventData);
        handPile.AddAsyncCardEvent(cardEvent);
    }


    private void OnDestroy()
    {
        _eventCenter.Clear();
        transform.DOKill();
    }
}