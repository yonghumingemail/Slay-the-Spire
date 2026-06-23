using UnityEngine.EventSystems;

/// <summary>
/// BOSS 房间（每幕最终战斗）
/// </summary>
public class MonsterRoomBoss : AbstractRoom
{
    protected override string roomSpriteName { get; set; }
    protected override string roomSpriteOutlineName { get; set; }
    public override void OnPointClicked(PointerEventData data)
    {
            
    }
}