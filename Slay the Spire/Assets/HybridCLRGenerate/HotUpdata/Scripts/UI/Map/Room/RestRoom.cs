using UnityEngine.EventSystems;

/// <summary>
/// 休息房间（火堆，可回血、升级卡牌等）
/// </summary>
public class RestRoom : AbstractRoom
{
    protected override string roomSpriteName { get; set; } = "rest";
    protected override string roomSpriteOutlineName { get; set; } = "restOutline";
    public override void OnPointClicked(PointerEventData data)
    {
            
    }
}