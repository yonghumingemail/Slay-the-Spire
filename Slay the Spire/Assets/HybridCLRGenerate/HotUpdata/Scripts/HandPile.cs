using System;
using System.Collections.Generic;
using System.Threading;
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
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Func<int, UniTask>>("PlayerTurnStart", OnPlayerTurnStart, 0);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Func<UniTask>>("OnRoundEnd", OnRoundEnd, 0);
    }

    private void Start()
    {
        Test11().Forget();
    }

    public async UniTaskVoid Test11()
    {
        GameObject prefab =
            await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/Card/Card.prefab");
        GameObject[] cardObjs = new GameObject[10];
        for (int i = 0; i < 10; i++)
        {
            cardObjs[i] = Instantiate(prefab, transform);
            Card card;
            if (i < 5)
            {
                card = cardObjs[i].AddComponent<Card_Ironclad_Strike>();
            }
            else
            {
                card = cardObjs[i].AddComponent<Card_Ironclad_Bash>();
            }

            card.gameObject.SetActive(false);
            card.Initialized().Forget();
            cardInstances.Add(card);
            drawPile.AddCard(card).Forget();
        }
    }

    private UniTask OnRoundEnd()
    {
        foreach (var VARIABLE in cardInstances)
        {
            VARIABLE.isInteractable = false;
            VARIABLE.Recycle_DiscardPile();
        }
        return UniTask.CompletedTask;
    }
    
    public float speed2;
    public async UniTask OnPlayerTurnStart(int roundCount)
    {
        var cards = drawPile.GetRandomSampleCards(drawCardsCount + drawCardsOffer);
        cardArrangement.speed = speed;
        foreach (var card in cards)
        {
            card.Enable(true);
            cardInstances.Add(card);
            SortCards();
            await Task.Delay((int)(1000 * speed2));
        }
    }


    public void SortCards(Action callback = null)
    {
        cardArrangement.UpdateCardPositions(spline, cardInstances, callback);
    }
}