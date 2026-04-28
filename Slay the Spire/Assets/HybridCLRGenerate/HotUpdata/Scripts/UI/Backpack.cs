using System;
using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using Z_Tools;

public class Backpack : Pile
{
    protected RectTransform Content;


    protected override void Awake()
    {
        base.Awake();

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