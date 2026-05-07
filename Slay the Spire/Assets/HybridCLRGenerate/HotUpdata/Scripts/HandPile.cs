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
    public DirectionalArrowLine DirectionalArrowLine { get; private set; }
    public List<Card> cardInstances = new List<Card>();
    public Card SelectedCard;

    public int drawCardsCount;
    public int drawCardsOffer;

    public float speed;
    public int maxHandSize { get; private set; } = 10;

    private void Awake()
    {
        cardArrangement = new CardArrangement(maxHandSize);
        spline = transform.Find("Spline").GetComponent<SplineContainer>();
        DirectionalArrowLine = transform.Find("DirectionalArrowLine").GetComponent<DirectionalArrowLine>();

        EventCenter_Singleton.Instance._priorityQueueEventCenter.SubscribeAsync(OnRoundStart_EventArgs.id, OnRoundStart, 0);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.SubscribeAsync(OnRoundEnd_EventArgs.id, OnRoundEnd, 0);

        EventCenter_Singleton.Instance._priorityQueueEventCenter.Subscribe(OnMouseEnterEnemy_EventArgs.id,
            OnMouseEnterEnemy, 0);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.Subscribe(OnMouseExitEnemy_EventArgs.id,
            OnMouseExitEnemy, 0);
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

    private void OnMouseEnterEnemy(object sender, BaseEventArgs args)
    {
        if (!SelectedCard || !(args is Enemy_EventArgs _args)) return;
        Enemy_EventArgs.Fire(_args.value, OnMouseEnterEnemy_EventArgs.id, this, SelectedCard.priorityEventCenter);
    }

    private void OnMouseExitEnemy(object sender, BaseEventArgs args)
    {
        if (!SelectedCard || !(args is Enemy_EventArgs _args)) return;
        Enemy_EventArgs.Fire(_args.value, OnMouseExitEnemy_EventArgs.id, this, SelectedCard.priorityEventCenter);
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
            Card_EventArgs.Fire(SelectedCard, OnSelectCard_EventArgs.id, this,
                EventCenter_Singleton.Instance._priorityQueueEventCenter);
        }
        else
        {
            Card_EventArgs.Fire(SelectedCard, OnUnSelectCard_EventArgs.id, this,
                EventCenter_Singleton.Instance._priorityQueueEventCenter);
        }
    }


    public async UniTaskVoid Test11()
    {
        drawPile = GetObject_EventArgs<DrawPile>.Fire(this, EventCenter_Singleton.Instance);

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

            card.Initialized().Forget();
            card.Enable(false);
            drawPile.AddCard(card).Forget();
        }
    }

    private async UniTask OnRoundEnd(object sender, BaseEventArgs args)
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

    public async UniTask OnRoundStart(object sender, BaseEventArgs args)
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
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
    }
}