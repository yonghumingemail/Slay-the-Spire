using System;
using System.Diagnostics.CodeAnalysis;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;


public interface IIntent
{
    Sprite _sprite { get; }
    string _text { get; }
    Action<IIntent> OnUpdate { get; set; }
    Func<Action<Animator>,UniTask> OnAnimatorPlay { get; set; }
    UniTask Execute(GameObject sender, [NotNull] GameObject receiver,CancellationToken  token);
}

