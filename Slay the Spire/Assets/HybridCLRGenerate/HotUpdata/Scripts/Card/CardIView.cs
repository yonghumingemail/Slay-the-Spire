using System;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;

public class CardView : MonoBehaviour
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

    private void Awake()
    {
        _background = transform.Find("UI").GetComponent<SpriteRenderer>();
        _frame = transform.Find("UI/Head/Frame").GetComponent<SpriteRenderer>();
        _banners = transform.Find("UI/Head/Frame/Banners").GetComponent<SpriteRenderer>();
        _image = transform.Find("UI/Head/Image").GetComponent<SpriteRenderer>();
        _orb = transform.Find("UI/Head/Orb").GetComponent<SpriteRenderer>();

        _name = transform.Find("UI/Head/Frame/Banners/CardName").GetComponent<TextMeshPro>();
        _typeName = transform.Find("UI/Head/Frame/TypeName").GetComponent<TextMeshPro>();
        _orbValue = transform.Find("UI/Head/Orb/Point").GetComponent<TextMeshPro>();
        _describe = transform.Find("UI/Describe").GetComponent<TextMeshPro>();
        cardOutline = transform.Find("Outline").GetComponent<Outline>();
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