using System;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;
using Z_Tools;

[Serializable]
public class CardView
{
    public SpriteRenderer Background => _background;
    public SpriteRenderer Frame => _frame;
    public SpriteRenderer Banners => _banners;
    public SpriteRenderer Image => _image;
    public SpriteRenderer Orb => _orb;
    public TextMeshPro Name => _name;
    public TextMeshPro TypeName => _typeName;
    public TextMeshPro OrbValue => _orbValue;
    public TextMeshPro Describe => _describe;
    public Outline CardOutline => cardOutline;

    [Header("图片信息组件")] [SerializeField] private SpriteRenderer _background;
    [SerializeField] private SpriteRenderer _frame;
    [SerializeField] private SpriteRenderer _banners;
    [SerializeField] private SpriteRenderer _image;
    [SerializeField] private SpriteRenderer _orb;
    [Header("文本信息组件")] [SerializeField] private TextMeshPro _name;
    [SerializeField] private TextMeshPro _typeName;
    [SerializeField] private TextMeshPro _orbValue;
    [SerializeField] private TextMeshPro _describe;
    [SerializeField] private Outline cardOutline;


    public CardView(IEventCenter<string> eventCenter,GameObject obj)
    {
        _background = obj.transform.Find("UI").GetComponent<SpriteRenderer>();
        _frame = obj.transform.Find("UI/Head/Frame").GetComponent<SpriteRenderer>();
        _banners = obj.transform.Find("UI/Head/Frame/Banners").GetComponent<SpriteRenderer>();
        _image = obj.transform.Find("UI/Head/Image").GetComponent<SpriteRenderer>();
        _orb = obj.transform.Find("UI/Head/Orb").GetComponent<SpriteRenderer>();

        _name = obj.transform.Find("UI/Head/Frame/Banners/CardName").GetComponent<TextMeshPro>();
        _typeName = obj.transform.Find("UI/Head/Frame/TypeName").GetComponent<TextMeshPro>();
        _orbValue = obj.transform.Find("UI/Head/Orb/Point").GetComponent<TextMeshPro>();
        _describe = obj.transform.Find("UI/Describe").GetComponent<TextMeshPro>();
        cardOutline = obj.transform.Find("Outline").GetComponent<Outline>();
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

    public void Enable(bool enable)
    {
        _background.gameObject.SetActive(enable);
    }

    public void UpdateCardTextUI(CardEvent_Abs cardEventAbs)
    {
        _name.SetText(cardEventAbs.cardName);
        _typeName.SetText(Enum.GetName(cardEventAbs.cardType.GetType(), cardEventAbs.cardType));
        _orbValue.SetText(cardEventAbs.orbValue.ToString());
        _describe.SetText(cardEventAbs.describe);
    }

    public void UpdateCardSpriteUI(CardEvent_Abs cardEventAbs)
    {
        _background.sprite = cardEventAbs.SpriteData.background;
        _frame.sprite = cardEventAbs.SpriteData.frame;
        _banners.sprite = cardEventAbs.SpriteData.banner;
        _image.sprite = cardEventAbs.SpriteData.image;
        _orb.sprite = cardEventAbs.SpriteData.orb;
    }

    public void UpdateCardUI(CardEvent_Abs cardEventAbs)
    {
        UpdateCardTextUI(cardEventAbs);
        UpdateCardSpriteUI(cardEventAbs);
    }
}