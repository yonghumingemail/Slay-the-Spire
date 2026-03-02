using System;
using System.Collections.Generic;
using Z_Tools;

public class DiscardPile : Pile
{
    protected override void Awake()
    {
        base.Awake();
        EventCenter_Singleton.Instance.AddEvent<Func<DiscardPile>>("DiscardPile", () => this);
    }

    
}