using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Cysharp.Threading.Tasks;
using HybridCLRGenerate.HotUpdata.Scripts.Tools.Event.EventArgs;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Splines;
using UnityEngine.Sprites;
using Z_Tools;

public class HandPile : MonoBehaviour, IPointerEnterHandler
{
    private SplineContainer spline;
    private DrawPile drawPile;
    private CardArrangement cardArrangement;

    public List<Card> cardInstances = new();
    public Card SelectedCard;

    public int drawCardsCount;
    public int drawCardsOffer;

    public float speed;
    public int maxHandCount { get; private set; } = 10;

    private void Awake()
    {
        cardArrangement = new CardArrangement(maxHandCount);
        spline = transform.Find("Spline").GetComponent<SplineContainer>();

        EventCenter_Singleton.Instance._priorityQueueEventCenter.SubscribeAsync<OnRoundStart_EN>(OnRoundStart,
            0);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.SubscribeAsync<OnRoundEnd_EN>(OnRoundEnd, 0);

        EventCenter_Singleton.Instance._priorityQueueEventCenter.Subscribe<OnMouseEnterEnemy_EA>(
            OnMouseEnterEnemy, 0);
        EventCenter_Singleton.Instance._priorityQueueEventCenter.Subscribe<OnMouseExitEnemy_EA>(
            OnMouseExitEnemy, 0);
        EventCenter_Singleton.Instance.Subscribe<GetObject_GEA<HandPile>>(Get);
    }

    private void Get(object send, GameEventArgs gameEventHandler)
    {
        if (gameEventHandler is Args_T args)
        {
            args.value = this;
        }
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

    private void OnMouseEnterEnemy(object sender, GameEventArgs args)
    {
        if (!SelectedCard || !(args is Args_T _args)) return;
        Args_T_EA<OnMouseEnterEnemy_EA>.Fire(_args.value, this, SelectedCard.priorityEventCenter);
    }

    private void OnMouseExitEnemy(object sender, GameEventArgs args)
    {
        if (!SelectedCard || !(args is Args_T _args)) return;
        Args_T_EA<OnMouseExitEnemy_EA>.Fire(_args.value, this, SelectedCard.priorityEventCenter);
    }

    public void SetSelectedCard(Card card)
    {
        if (!card)
        {
            SelectedCard?.UnSelectCard();
        }

        SelectedCard = card;
    }


    public async UniTaskVoid Test11()
    {
        drawPile = GetObject_GEA<DrawPile>.Fire(this, EventCenter_Singleton.Instance);

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

            card.OnTrigger += OnTriggerCard;
            card.OnSelectCard += SetSelectedCard;
            card.OnUnSelectCard += SetSelectedCard;
            card.Initialized().Forget();
            card.Disable();
            drawPile.AddCard(card).Forget();
        }
    }

    private void OnTriggerCard(Card card)
    {
        cardInstances.Remove(card);
        SortCards();
    }

    private async UniTask OnRoundEnd(object sender, GameEventArgs args)
    {
        var cardsToProcess = cardInstances;
        UniTask[] tasks = new UniTask[cardsToProcess.Count];

        for (int i = 0; i < cardsToProcess.Count; i++)
        {
            cardsToProcess[i].CardInteraction.Disable();
            tasks[i] = cardsToProcess[i].Recycle_DiscardPile();
        }

        await UniTask.WhenAll(tasks);
    }

    public float speed2;

    public async UniTask OnRoundStart(object sender, GameEventArgs args)
    {
        await DrawCard(drawCardsCount + drawCardsOffer);
    }

    private async UniTask DrawCard(int count)
    {
        var cards = drawPile.GetRandomSampleCards(count);

        cardArrangement.speed = speed;
        foreach (var card in cards)
        {
            card.Enable();
            card.CardInteraction.Disable();
            cardInstances.Add(card);
            SortCards();
            await Task.Delay((int)(1000 * speed2));
            card.CardInteraction.Enable();
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
            //  SetSelectedCard(null);
        }
    }
}