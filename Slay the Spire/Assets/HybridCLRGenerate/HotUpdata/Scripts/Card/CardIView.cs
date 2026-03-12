using System;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using Z_Tools;

public class CardView 
{
    public SpriteRenderer _background { get; private set; }
    public SpriteRenderer _frame { get; private set; }
    public SpriteRenderer _banners { get; private set; }
    public SpriteRenderer _image { get; private set; }
    public SpriteRenderer _orb { get; private set; }
    public TextMeshPro _name { get; private set; }
    public TextMeshPro _typeName { get; private set; }
    public TextMeshPro _orbValue { get; private set; }
    public TextMeshPro _describe { get; private set; }
    private Outline cardOutline { get; set; }
    

    public CardView(IEventCenter<string> eventCenter)
    {
       Card card= eventCenter.GetEvent<Func<Card>>("Card").Invoke();
        _background = card.transform.Find("UI").GetComponent<SpriteRenderer>();
        _frame = card.transform.Find("UI/Head/Frame").GetComponent<SpriteRenderer>();
        _banners = card.transform.Find("UI/Head/Frame/Banners").GetComponent<SpriteRenderer>();
        _image = card.transform.Find("UI/Head/Image").GetComponent<SpriteRenderer>();
        _orb = card.transform.Find("UI/Head/Orb").GetComponent<SpriteRenderer>();

        _name = card.transform.Find("UI/Head/Frame/Banners/CardName").GetComponent<TextMeshPro>();
        _typeName = card.transform.Find("UI/Head/Frame/TypeName").GetComponent<TextMeshPro>();
        _orbValue = card.transform.Find("UI/Head/Orb/Point").GetComponent<TextMeshPro>();
        _describe = card.transform.Find("UI/Describe").GetComponent<TextMeshPro>();
        cardOutline = card.transform.Find("Outline").GetComponent<Outline>();
    }



    public void ShowOutline(bool enable)
    {
        if (enable)
        {
            cardOutline.Enable().Forget();
        }
        else
        {
            cardOutline.Disable();
        }
    }

    public void UpdateCardTextUI(CardEvent_Abs cardEventAbs)
    {
        _name.SetText(cardEventAbs.parameter.cardName);
        _typeName.SetText(Enum.GetName(cardEventAbs.parameter.cardType.GetType(), cardEventAbs.parameter.cardType));
        _orbValue.SetText(cardEventAbs.parameter.orbValue.ToString());
        _describe.SetText(cardEventAbs.describe);
    } 
    public void UpdateCardSpriteUI(CardEvent_Abs cardEventAbs)
    {
        _background.sprite = cardEventAbs.parameter.background;
        _frame.sprite = cardEventAbs.parameter.frame;
        _banners.sprite = cardEventAbs.parameter.banner;
        _image.sprite = cardEventAbs.parameter.image;
        _orb.sprite = cardEventAbs.parameter.orb;
    } 
    
    public void UpdateCardUI(CardEvent_Abs cardEventAbs)
    {
        UpdateCardTextUI(cardEventAbs);
        UpdateCardSpriteUI(cardEventAbs);
    }
}