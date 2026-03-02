using UnityEngine;
public enum CardType
{
    攻击,
    技能,
    能力,
    状态,
    诅咒
}

public enum CardRarity
{
    灰色,
    蓝色,
    金色
}

public enum CardColour
{
    红,
    蓝,
    绿,
    紫,
    灰,
    黑
}


public enum CardName_Chinese
{
    打击,
    防御,
    痛击,
    愤怒,
    武装,
    顺劈斩,
    活动肌肉,
    全身撞击,
    交锋,
    破灭,
    燃烧
}

[CreateAssetMenu(fileName = "NewCardParameter", menuName = "SO/Card Parameter")]
public class CardParameter : ScriptableObject
{
    public CardName_Chinese cardName;
    public CardType type;
    public CardColour colour;
    public CardRarity rarity;
    public Sprite image;
    public bool isDirected;

    public CardParameter Copy()
    {
        var returnValue = CreateInstance<CardParameter>();
        returnValue.cardName = cardName;
        returnValue.type = type;
        returnValue.colour = colour;
        returnValue.rarity = rarity;
        returnValue.image = image;
        returnValue.isDirected = isDirected;
        return returnValue;
    }
}