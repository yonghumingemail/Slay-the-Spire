using System;
using System.Collections.Generic;
using Z_Tools;

public class DiscardPile : Pile
{
    protected override void Awake()
    {
        base.Awake();
        EventCenter_Singleton.Instance.Subscribe(GetObject_EventArgs<DiscardPile>.id, Get);
    }

    private void Get(object send, BaseEventArgs baseEventHandler)
    {
        GetObject_EventArgs<DiscardPile>.Subscribe(baseEventHandler, this);
    }
}