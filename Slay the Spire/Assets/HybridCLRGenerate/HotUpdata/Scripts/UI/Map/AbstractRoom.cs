using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.U2D;

public abstract class AbstractRoom
{
    public Sprite nodeSprite { get; protected set; }
    public Sprite nodeOutlineSprite { get; protected set; }
    protected abstract string roomSpriteName { get; set; } 
    protected abstract string roomSpriteOutlineName { get; set; }

    public abstract void OnPointClicked(PointerEventData data);
    public virtual void Init(SpriteAtlas atlas)
    {
        nodeSprite = atlas.GetSprite(roomSpriteName);
        nodeOutlineSprite = atlas.GetSprite(roomSpriteOutlineName);
    }
}