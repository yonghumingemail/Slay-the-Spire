using System;
using System.Collections.Generic;
using Z_Tools;

public class DiscardPile : Pile
{
    protected override void Awake()
    {
        base.Awake();
        EventCenter_Singleton.Instance.Subscribe(GetObject_GEA<DiscardPile>.id, Get);
    }

    private void Get(object send, BaseEventArgs baseEventHandler)
    {
        if (baseEventHandler is Func_T args)
        {
            args.value = this;
        }
    }
}