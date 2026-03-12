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
    
    private SplineContainer spline;
    private DrawPile drawPile;
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
        spline = transform.Find("Spline").GetComponent<SplineContainer>();
        cardDragLine = transform.Find("DragLineUI").GetComponent<CardDragLine>();

        EventCenter_Singleton.Instance.GetEvent<Func<DrawPile>>("DrawPile",
            (action) => { drawPile = action.Invoke(); });
        EventCenter_Singleton.Instance.AddEvent<Func<HandPile>>("HandPile", () => this);
    }

    public float speed2;


    private void Update()
    {
        Test().Forget();
    }


    public async UniTaskVoid Test()
    {
        if (Input.GetKeyDown(KeyCode.Q))
        {
            var cards = drawPile.GetRandomSampleCards(drawCardsCount + drawCardsOffer);
            cardArrangement.speed = speed;
            foreach (var card in cards)
            {
                card.CardInteraction.isInteractable = false;
                card.gameObject.SetActive(true);
                cardInstances.Add(card);
                UpdateCardPositions();
                await Task.Delay((int)(1000 * speed2));
            }
        }
    }

    private Queue<Card> triggerQueue = new Queue<Card>();
    public bool isExecute;

    public void AddAsyncCardEvent(Card action)
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

        while (triggerQueue.Count != 0)
        {
            var current = triggerQueue.Dequeue();
            EventCenter_Singleton.Instance.GetEvent<Action<Card>>("OnTriggerCardEvent")?.Invoke(current);
            await current.CardEvent.Trigger();
        }

        UpdateCardPositions();
        isExecute = false;
    }

    public void UpdateCardPositions()
    {
        cardArrangement.UpdateCardPositions(spline, cardInstances, null);
    }
}