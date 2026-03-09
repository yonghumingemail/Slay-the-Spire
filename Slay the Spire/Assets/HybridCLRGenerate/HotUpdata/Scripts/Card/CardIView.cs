using System;
using TMPro;
using UnityEngine;

public struct CardView
{
    public SpriteRenderer _background { get;private set; }
    public SpriteRenderer _frame { get;private set; }
    public SpriteRenderer _banners { get;private set; }
    public SpriteRenderer _image { get;private set; }
    public SpriteRenderer _orb { get;private set; }
    public TextMeshPro _name { get;private set; }
    public TextMeshPro _typeName { get;private set; }
    public TextMeshPro _orbValue { get;private set; }
    public TextMeshPro _describe { get;private set; }

    public CardView(GameObject card)
    {
        _background = card.transform.Find("UI").GetComponent<SpriteRenderer>();
        _frame = card.transform.Find("UI/Head/Frame").GetComponent<SpriteRenderer>();
        _banners = card.transform.Find("UI/Head/Frame/Banners").GetComponent<SpriteRenderer>();
        _image = card.transform.Find("UI/Head/Image").GetComponent<SpriteRenderer>();
        _orb = card.transform.Find("UI/Head/Orb").GetComponent<SpriteRenderer>();

        _name = card.transform.Find("UI/Head/Frame/Banners/CardName").GetComponent<TextMeshPro>();
        _typeName = card.transform.Find("UI/Head/Frame/TypeName").GetComponent<TextMeshPro>();
        _orbValue = card.transform.Find("UI/Head/Orb/Point").GetComponent<TextMeshPro>();
        _describe = card.transform.Find("UI/Describe").GetComponent<TextMeshPro>();
    }
    
    public void UpdateCardUI(CardEvent_Abs cardEventAbs)
    {
        _background.sprite = cardEventAbs.parameter.background;
        _frame.sprite = cardEventAbs.parameter.frame;
        _banners.sprite = cardEventAbs.parameter.banner;
        _image.sprite = cardEventAbs.parameter.image;
        _orb.sprite = cardEventAbs.parameter.orb;

        _name.SetText(cardEventAbs.parameter.cardName);
        _typeName.SetText(Enum.GetName(cardEventAbs.parameter.cardType.GetType(), cardEventAbs.parameter.cardType));
        _orbValue.SetText(cardEventAbs.parameter.orbValue.ToString());
        _describe.SetText(cardEventAbs.describe);
    }
}