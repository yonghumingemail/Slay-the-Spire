using UnityEngine.EventSystems;

/// <summary>
/// 精英战斗房间（难度较高，通常出现在中后期）
/// </summary>
public class MonsterRoomElite : AbstractRoom
{
    protected override string roomSpriteName { get; set; } = "elite";
    protected override string roomSpriteOutlineName { get; set; } = "eliteOutline";
    public override void OnPointClicked(PointerEventData data)
    {
            
    }
}