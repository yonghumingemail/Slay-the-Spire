using UnityEngine;

public delegate void GameEventHandler<TEventArgs>(object sender, TEventArgs e) where TEventArgs : EventArgs;