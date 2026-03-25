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
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Func<int, UniTask>>("PlayerTurnStart",
            OnPlayerTurnStart, 0);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Func<UniTask>>("OnRoundEnd", OnRoundEnd, 0);

        EventCenter_Singleton.Instance.AddEvent<Action<Card>>("OnSelectCard", OnSelectCard);
        EventCenter_Singleton.Instance.AddEvent<Action<Card>>("UnOnSelectCard", UnOnSelectCard);
    }

    private void Start()
    {
        Test11().Forget();
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.M))
        {
            DrawCard(3).Forget();
        }
    }

    private void OnSelectCard(Card card)
    {
        foreach (var VARIABLE in cardInstances)
        {
            if (card != VARIABLE)
            {
                VARIABLE.isInteractable = false;
            }
        }
    }

    private void UnOnSelectCard(Card card)
    {
        foreach (var VARIABLE in cardInstances)
        {
            VARIABLE.isInteractable = true;
        }
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
            drawPile.AddCard(card).Forget();
            
        }
    }

    private async UniTask OnRoundEnd()
    {
        // 创建副本，避免循环中列表变化的影响
        var cardsToProcess = cardInstances.ToArray();
        UniTask[] tasks = new UniTask[cardsToProcess.Length];
print(tasks.Length);
        for (int i = 0; i < cardsToProcess.Length; i++)
        {
            cardsToProcess[i].isInteractable = false;
            tasks[i] = cardsToProcess[i].Recycle_DiscardPile();
        }

        await UniTask.WhenAll(tasks);
        print("完成");
    }

    public float speed2;

    public async UniTask OnPlayerTurnStart(int roundCount)
    {
        await DrawCard(drawCardsCount + drawCardsOffer);
    }

    private async UniTask DrawCard(int count)
    {
        var cards = drawPile.GetRandomSampleCards(count);
        print(cards.Count);
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