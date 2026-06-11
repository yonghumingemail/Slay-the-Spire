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
        UIComponent uiComponent = GameEntry.GetManagerComponent<UIComponent>();
        uiComponent.CloseUIForm(MapView.ID.ID, false);
        OnEnterRoom_EN.Fire(this,this, EventCenter_Singleton.Instance._priorityQueueEventCenter);
    }

    public virtual void Init(SpriteAtlas atlas)
    {
        nodeSprite = atlas.GetSprite(roomSpriteName);
        nodeOutlineSprite = atlas.GetSprite(roomSpriteOutlineName);
    }
}