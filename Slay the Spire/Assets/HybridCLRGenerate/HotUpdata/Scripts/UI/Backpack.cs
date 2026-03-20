using System;
using System.Collections.Generic;
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
     
    }
    

    public void RemoveCard(Card cardEvent)
    {
        cardList.Remove(cardEvent);
        cardScrollView.cardDic.Remove(cardEvent);
    }
}