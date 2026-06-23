using UnityEngine.EventSystems;

/// <summary>
/// 商店房间（可购买卡牌、药水、遗物等）
/// </summary>
public class ShopRoom : AbstractRoom
{
    protected override string roomSpriteName { get; set; } = "shop";
    protected override string roomSpriteOutlineName { get; set; } = "shopOutline";
    public override void OnPointClicked(PointerEventData data)
    {
            
    }
}