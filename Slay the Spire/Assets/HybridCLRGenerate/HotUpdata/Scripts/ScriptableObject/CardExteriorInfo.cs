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
public class CardExteriorInfo : ScriptableObject
{  
    public string cardName;
    public CardType cardType;
    public int orbValue;
    
    public Sprite banner;
    public Sprite background;
    public Sprite orb;
    public Sprite frame;
    public Sprite image;
}