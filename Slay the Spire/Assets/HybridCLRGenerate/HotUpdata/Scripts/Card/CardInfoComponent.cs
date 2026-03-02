using System;
using TMPro;
using UnityEngine;

[Serializable]
public struct CardInfoComponent
{
    public SpriteRenderer _background;
    public SpriteRenderer _frame;
    public SpriteRenderer _banners;
    public SpriteRenderer _image;
    public SpriteRenderer _orb;
    
    public TextMeshPro _name;
    public TextMeshPro _typeName;
    public TextMeshPro _point;
    public TextMeshPro _describe;
    
    public CardInfoComponent(Card card)
    {
        _background = card.transform.Find("UI").GetComponent<SpriteRenderer>();
        _frame = card.transform.Find("UI/Head/Frame").GetComponent<SpriteRenderer>();
        _banners = card.transform.Find("UI/Head/Frame/Banners").GetComponent<SpriteRenderer>();
        _image = card.transform.Find("UI/Head/Image").GetComponent<SpriteRenderer>();
        _orb = card.transform.Find("UI/Head/Orb").GetComponent<SpriteRenderer>();

        _name = card.transform.Find("UI/Head/Frame/Banners/CardName").GetComponent<TextMeshPro>();
        _typeName = card.transform.Find("UI/Head/Frame/TypeName").GetComponent<TextMeshPro>();
        _point = card.transform.Find("UI/Head/Orb/Point").GetComponent<TextMeshPro>();
        _describe = card.transform.Find("UI/Describe").GetComponent<TextMeshPro>();
    }
}
