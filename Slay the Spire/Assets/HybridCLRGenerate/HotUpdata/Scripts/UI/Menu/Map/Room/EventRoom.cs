using UnityEngine.EventSystems;

/// <summary>
/// 事件房间（触发随机事件）
/// </summary>
public class EventRoom : AbstractRoom
{
    protected override string roomSpriteName { get; set; } = "event";
    protected override string roomSpriteOutlineName { get; set; } = "eventOutline";
    public override void OnPointClicked(PointerEventData data)
    {
            
    }
}