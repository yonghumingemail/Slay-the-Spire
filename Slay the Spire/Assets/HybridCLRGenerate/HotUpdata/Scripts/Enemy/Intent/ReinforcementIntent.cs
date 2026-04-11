using System;
using System.Threading;
using UnityEngine;

public struct ReinforcementIntent
{
   public Sprite sprite;
   public string text;
   public Action<GameObject,GameObject,CancellationToken> ExecuteAction;
}
