using Cysharp.Threading.Tasks;
using UnityEngine;

public delegate void GameEventHandler<TEventArgs>(object sender, TEventArgs e) where TEventArgs : BaseEventArgs;

public delegate UniTask GameEventHandlerAsync<TEventArgs>(object sender, TEventArgs e) where TEventArgs : BaseEventArgs;