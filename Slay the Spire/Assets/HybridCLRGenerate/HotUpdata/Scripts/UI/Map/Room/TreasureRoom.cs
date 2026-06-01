using UnityEngine.EventSystems;

/// <summary>
/// 宝箱房间（获得随机宝藏）
/// </summary>
public class TreasureRoom : AbstractRoom
{
    protected override string roomSpriteName { get; set; } = "chest";
    protected override string roomSpriteOutlineName { get; set; } = "chestOutline";
    public override void OnPointClicked(PointerEventData data)
    {
            
    }
}