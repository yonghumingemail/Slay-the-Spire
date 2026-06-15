using System;
using System.Collections.Generic;
using UnityGameFramework.Runtime;
using Z_Tools;

public class DrawPile : Pile
{
    private DiscardPile _discardPile;

    protected override void Awake()
    {
        base.Awake();
        _discardPile = transform.parent.Find("DiscardPile").GetComponent<DiscardPile>();
        GameEntry.Event.Subscribe<GetObject_EventArgs<DrawPile>>( Get);
    }
    private void Get(object send, GameEventArgs gameEventHandler)
    {
        if (gameEventHandler is Args_T args)
        {
            args.value = this;
        }
    }
    
    public virtual List<Card> GetRandomSampleCards(int count)
    {
        if (cardList.Count == 0 || cardList.Count < count)
        {
            cardList.AddRange(_discardPile.GetCarAll());
            countText.SetText(cardList.Count.ToString());
        }

        var cards = RandomSample(cardList, count);
        List<Card> returnCards = new List<Card>(count);
        foreach (var card in cards)
        {
            returnCards.Add(card);
        }

        cardList.RemoveAll(card => cards.Contains(card));

        countText.SetText(cardList.Count.ToString());
        return returnCards;
    }
}