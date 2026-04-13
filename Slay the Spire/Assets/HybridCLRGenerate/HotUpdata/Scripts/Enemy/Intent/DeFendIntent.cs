using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.U2D;

public class DeFendIntent : IIntent
{
    public Sprite _sprite { get; private set; }
    public string _text { get; private set; }
    
    public GainShield _gainShield { get; private set; }
    
    public DeFendIntent(int value, SpriteAtlas sprites)
    {
        _gainShield = new GainShield(value);
        _sprite = sprites.GetSprite("defend");
        _text = string.Empty;
    }
    
    public void OnShow(Intent_V intentV)
    {
        
    }

    public void OnHide()
    {
        
    }


    public string GetDescription()
    {
        return "敌人将要获得防御";
    }
}