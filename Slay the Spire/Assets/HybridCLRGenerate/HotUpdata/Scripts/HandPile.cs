using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.Splines;
using Z_Tools;

public class HandPile : MonoBehaviour
{
    private CardArrangement cardArrangement;
    public AlertBox alertBox { get; private set; }

    private SplineContainer spline;
    private DrawPile drawPile;

    public Card selectedCard;
    public CardDragLine cardDragLine { get; private set; }
    public List<Card> cardInstances = new List<Card>();

    public int drawCardsCount;
    public int drawCardsOffer;

    public float speed;

    public bool isDragging;
    public int maxHandSize { get; private set; } = 10;

    private void Awake()
    {
        cardArrangement = new CardArrangement(maxHandSize);
        alertBox = transform.Find("AlertBox").GetComponent<AlertBox>();
        spline = transform.Find("Spline").GetComponent<SplineContainer>();
        cardDragLine = transform.Find("DragLineUI").GetComponent<CardDragLine>();

        EventCenter_Singleton.Instance.GetEvent<Func<DrawPile>>("DrawPile", (action) => { drawPile = action.Invoke(); });
        EventCenter_Singleton.Instance.AddEvent<Func<HandPile>>("HandPile", () => this);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Action>("OnRoundEnd", OnRoundEnd, 0);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Action>("OnRoundStart", OnRoundStart, 0);
     
    }
    public float speed2;


    private void Update()
    {
        Test().Forget();
    }

    private void OnRoundEnd()
    {
        foreach (var card in cardInstances)
        {
            card.cardUIEffect = false;
        }
    }

    private void OnRoundStart()
    {
    }

    private async UniTaskVoid Test()
    {
        if (Input.GetKeyDown(KeyCode.Q))
        {
            var cards = drawPile.GetRandomSampleCards(drawCardsCount + drawCardsOffer);
            cardArrangement.speed = speed;
            foreach (var card in cards)
            {
                card.cardUIEffect = false;
                card.gameObject.SetActive(true);
                cardInstances.Add(card);
                UpdateCardPositions();
                await Task.Delay((int)(1000 * speed2));
            }
        }
    }

    private Queue<CardEvent_Abs> triggerQueue = new Queue<CardEvent_Abs>();
    public bool isExecute;

    public void AddAsyncCardEvent(CardEvent_Abs action)
    {
        triggerQueue.Enqueue(action);
        if (!isExecute)
        {
            ExecuteQueue().Forget();
        }
    }

    private async UniTask ExecuteQueue()
    {
        isExecute = true;
        CardEvent_Abs current = triggerQueue.Dequeue();

        while (current != null)
        {
            await current.Trigger();
            EventCenter_Singleton.Instance.GetEvent<Action<CardEvent_Abs>>("OnTriggerCardEvent")?.Invoke(current);
            current = triggerQueue.Dequeue();
        }
        
        UpdateCardPositions();
        isExecute = false;
    }

    public void UpdateCardPositions()
    {
        cardArrangement.UpdateCardPositions(spline, cardInstances, null);
    }
}