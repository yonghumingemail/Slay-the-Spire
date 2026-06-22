using System;
using UnityEngine;
using UnityEngine.U2D;


public interface IIntent
{
    public Sprite _sprite { get;  }
    public string _text { get; }

    void OnShow( Intent_V intentV);
    void OnHide();
    string GetDescription();
}