using System;
using System.Collections.Generic;
using CardEvent_Ironclad;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public class Backpack : Pile
{
    protected RectTransform Content;
    private HandPile _handPile;

    protected override void Awake()
    {
        base.Awake();

        EventCenter_Singleton.Instance.GetEvent<Func<HandPile>>("HandPile",
            (action) => { _handPile = action.Invoke(); });
        EventCenter_Singleton.Instance.AddEvent<Func<Backpack>>("Backpack", () => this);
    }

    private void Start()
    {
        Test().Forget();
    }

    private async UniTaskVoid Test()
    {

        List<UniTask<Card>> tasks = new List<UniTask<Card>>()
        {
            CardFactory.Instance.CreateCardInstanceAsync(await (new CardEvent_Ironclad_Strike()).Initialize(),
                _handPile.transform),
            CardFactory.Instance.CreateCardInstanceAsync(await (new CardEvent_Ironclad_Strike()).Initialize(),
                _handPile.transform),
            CardFactory.Instance.CreateCardInstanceAsync(await (new CardEvent_Ironclad_Strike()).Initialize(),
                _handPile.transform),
            CardFactory.Instance.CreateCardInstanceAsync(await (new CardEvent_Ironclad_Strike()).Initialize(),
                _handPile.transform),
            CardFactory.Instance.CreateCardInstanceAsync(await (new CardEvent_Ironclad_Strike()).Initialize(),
                _handPile.transform),
            CardFactory.Instance.CreateCardInstanceAsync(await (new CardEvent_Ironclad_Bash()).Initialize(),
                _handPile.transform),
            CardFactory.Instance.CreateCardInstanceAsync(await (new CardEvent_Ironclad_Bash()).Initialize(),
                _handPile.transform),
            CardFactory.Instance.CreateCardInstanceAsync(await (new CardEvent_Ironclad_Bash()).Initialize(),
                _handPile.transform),
            CardFactory.Instance.CreateCardInstanceAsync(await (new CardEvent_Ironclad_Bash()).Initialize(),
                _handPile.transform),
            CardFactory.Instance.CreateCardInstanceAsync(await (new CardEvent_Ironclad_Bash()).Initialize(),
                _handPile.transform),
        };


        var objinstace = await UniTask.WhenAll(tasks);
        foreach (var VARIABLE in objinstace)
        {
            await AddCard(VARIABLE);
        }
        EventCenter_Singleton.Instance.GetEvent<Func<DrawPile>>("DrawPile", (action) =>
        {
          var drawPile = action.Invoke();
          foreach (var VARIABLE in objinstace)
          {
              drawPile.AddCard(VARIABLE).Forget();
          }
        });
    }

    public void RemoveCard(CardEvent_Abs cardEvent)
    {
        cardList.Remove(cardEvent);
        cardScrollView.cardDic.Remove(cardEvent);
    }
}