using UnityEngine;
using UnityEngine.U2D;

public class ReinforcementIntent : IIntent
{
    public Sprite _sprite { get; private set; }
    public string _text { get; private set; }

    public ReinforcementIntent(SpriteAtlas sprites)
    {
        _sprite = sprites.GetSprite("buff1");
        _text = string.Empty;
    }
        
    
    public void OnShow( Intent_V intentV)
    {
        
    }

    public void OnHide()
    {
    }

    public string GetDescription()
    {
        return "敌人将会进行强化";
    }
}