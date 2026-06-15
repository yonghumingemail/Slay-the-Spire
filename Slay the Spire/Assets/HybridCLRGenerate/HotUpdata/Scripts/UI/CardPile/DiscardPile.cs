using System;
using System.Collections.Generic;
using UnityGameFramework.Runtime;
using Z_Tools;

public class DiscardPile : Pile
{
    protected override void Awake()
    {
        base.Awake();
        GameEntry.Event.Subscribe<GetObject_EventArgs<DiscardPile>>(Get);
    }

    private void Get(object send, GameEventArgs gameEventHandler)
    {
        if (gameEventHandler is Args_T args)
        {
            args.value = this;
        }
    }
}