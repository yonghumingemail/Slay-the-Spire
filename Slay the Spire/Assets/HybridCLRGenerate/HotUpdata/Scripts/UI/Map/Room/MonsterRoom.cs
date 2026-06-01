using UnityEngine.EventSystems;

/// <summary>
/// 普通战斗房间
/// </summary>
public class MonsterRoom : AbstractRoom
{
    protected override string roomSpriteName { get; set; } = "monster";
    protected override string roomSpriteOutlineName { get; set; } = "monsterOutline";

    public override void OnPointClicked(PointerEventData data)
    {
        base.OnPointClicked(data);
    }
}