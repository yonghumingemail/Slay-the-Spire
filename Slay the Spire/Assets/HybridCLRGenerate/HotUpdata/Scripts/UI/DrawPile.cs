using System;
using System.Collections.Generic;
using Z_Tools;

public class DrawPile : Pile
{
    private DiscardPile _discardPile;

    protected override void Awake()
    {
        base.Awake();
        _discardPile = transform.parent.Find("DiscardPile").GetComponent<DiscardPile>();
        EventCenter_Singleton.Instance.AddEvent<Func<DrawPile>>("DrawPile", () => this);
    }

    public virtual List<Card> GetRandomSampleCards(int count)
    {
        if (cardList.Count == 0)
        {
            cardList = _discardPile.GetCarAll();
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