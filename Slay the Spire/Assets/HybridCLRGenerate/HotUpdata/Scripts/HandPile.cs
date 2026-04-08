using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Splines;
using Z_Tools;

public class HandPile : MonoBehaviour, IPointerEnterHandler,
    IPointerExitHandler
{
    private CardArrangement cardArrangement;

    private SplineContainer spline;
    private DrawPile drawPile;
    public CardDragLine cardDragLine { get; private set; }
    public List<Card> cardInstances = new List<Card>();
    public Card SelectedCard;

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

        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Action<Enemy>>("OnMouseEnterEnemy", OnMouseEnterEnemy, 0);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.AddEvent<Action<Enemy>>("OnMouseExitEnemy", OnMouseExitEnemy, 0);
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

    private void OnMouseExitEnemy(Enemy enemy)
    {
        if (!SelectedCard) return;
        foreach (var priorityEvent in SelectedCard.priorityEventCenter.GetEvent("OnMouseExitEnemy"))
        {
            (priorityEvent._delegate as Action<Enemy>)?.Invoke(enemy);
        }
    }
    private void OnMouseEnterEnemy(Enemy enemy)
    {
        if (!SelectedCard) return;
        foreach (var priorityEvent in SelectedCard.priorityEventCenter.GetEvent("OnMouseEnterEnemy"))
        {
            (priorityEvent._delegate as Action<Enemy>)?.Invoke(enemy);
        }
    }

    public void SetSelectedCard(Card card)
    {
        SelectedCard = card;
        bool isSelected = SelectedCard != null;
        foreach (var VARIABLE in cardInstances)
        {
            if (card != VARIABLE)
            {
                //card不为空时，即当前选择了卡牌，则将其他卡牌的交互禁用，反之则启用
                VARIABLE.CardInteraction.isInteractable = !isSelected;
            }
        }

        if (isSelected)
        {
            foreach (var VARIABLE in   EventCenter_Singleton.Instance._priorityQueueEventCenter.GetEvent("OnSelectCard"))
            {
               (VARIABLE._delegate as Action<Card>)?.Invoke(SelectedCard);
            }
        }
        else
        {
            foreach (var VARIABLE in   EventCenter_Singleton.Instance._priorityQueueEventCenter.GetEvent("OnUnSelectCard"))
            {
                (VARIABLE._delegate as Action)?.Invoke();
            }
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

        for (int i = 0; i < cardsToProcess.Length; i++)
        {
            cardsToProcess[i].CardInteraction.isInteractable = false;
            tasks[i] = cardsToProcess[i].Recycle_DiscardPile();
        }

        await UniTask.WhenAll(tasks);
    }

    public float speed2;

    public async UniTask OnPlayerTurnStart(int roundCount)
    {
        // print("抽牌："+Time.time);
        await DrawCard(drawCardsCount + drawCardsOffer);
    }

    private async UniTask DrawCard(int count)
    {
        var cards = drawPile.GetRandomSampleCards(count);

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


    public void OnPointerEnter(PointerEventData eventData)
    {
        if (SelectedCard)
        {
            SelectedCard.UnSelectCard();
            cardDragLine._tokenSource?.Cancel();
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
       
    }
}