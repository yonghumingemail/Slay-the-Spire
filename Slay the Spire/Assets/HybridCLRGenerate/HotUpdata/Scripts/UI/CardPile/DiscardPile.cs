using System;
using System.Collections.Generic;
using Z_Tools;

public class DiscardPile : Pile
{
    protected override void Awake()
    {
        base.Awake();
        EventCenter_Singleton.Instance.Subscribe<GetObject_GEA<DiscardPile>>(Get);
    }

    private void Get(object send, GameEventArgs gameEventHandler)
    {
        if (gameEventHandler is Args_T args)
        {
            args.value = this;
        }
    }
}