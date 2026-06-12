using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.U2D;
using UnityGameFramework.Runtime;
using Z_Tools;

public abstract class AbstractRoom
{
    public Sprite nodeSprite { get; protected set; }
    public Sprite nodeOutlineSprite { get; protected set; }
    protected abstract string roomSpriteName { get; set; }
    protected abstract string roomSpriteOutlineName { get; set; }

    public virtual void OnPointClicked(PointerEventData data)
    {
        GameEntry.UI.CloseUIForm(MapView.ID.ID, false);
        OnEnterRoom_EN.Fire(this,this);
    }

    public virtual void Init(SpriteAtlas atlas)
    {
        nodeSprite = atlas.GetSprite(roomSpriteName);
        nodeOutlineSprite = atlas.GetSprite(roomSpriteOutlineName);
    }
}