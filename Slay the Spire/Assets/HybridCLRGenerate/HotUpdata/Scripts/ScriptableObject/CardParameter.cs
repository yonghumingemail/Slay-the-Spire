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
public class CardParameter : ScriptableObject
{
    public string cardName;
    public int orbValue;
    public bool canStrengthen = true;
    public CardType cardType;
    public bool isDirected;
    [Header("Sprite")]
    public Sprite banner;
    public Sprite background;
    public Sprite orb;
    public Sprite frame;
    public Sprite image;
   

    public CardParameter Copy()
    {
        var returnValue = CreateInstance<CardParameter>();
        returnValue.cardName = cardName;
        returnValue.orbValue= orbValue;
        returnValue.canStrengthen = canStrengthen;
        returnValue.cardType = cardType;
        returnValue.isDirected = isDirected;
        returnValue.banner = banner;
        returnValue.background = background;
        returnValue.orb = orb;
        returnValue.frame = frame;
        returnValue.image = image;
        return returnValue;
    }
}