using UnityEngine;
public enum CardType
{
    攻击,
    技能,
    能力,
    状态,
    诅咒
}

[CreateAssetMenu(fileName = "NewCardParameter", menuName = "SO/Card Parameter")]
public class CardSpriteData : ScriptableObject
{
    public Sprite banner;
    public Sprite background;
    public Sprite orb;
    public Sprite frame;
    public Sprite image;
    public CardSpriteData Copy()
    {
        var returnValue = CreateInstance<CardSpriteData>();
        returnValue.banner = banner;
        returnValue.background = background;
        returnValue.orb = orb;
        returnValue.image = image;
        returnValue.frame = frame;
        return returnValue;
    }
}