using System;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;

[Serializable]
public class CardComponentInfo : MonoBehaviour
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
    public Outline CardOutline => _cardOutline;
    public HandPile HandPile => _handPile;
    public Camera MainCamera => _mainCamera;
    public Animator Animator => _animator;

    [Header("图片信息组件")] [SerializeField] private SpriteRenderer _background;
    [SerializeField] private SpriteRenderer _frame;
    [SerializeField] private SpriteRenderer _banners;
    [SerializeField] private SpriteRenderer _image;
    [SerializeField] private SpriteRenderer _orb;
    [Header("文本信息组件")] [SerializeField] private TextMeshPro _name;
    [SerializeField] private TextMeshPro _typeName;
    [SerializeField] private TextMeshPro _orbValue;
    [SerializeField] private TextMeshPro _describe;
    [SerializeField] private Outline _cardOutline;

    private HandPile _handPile;
    private Camera _mainCamera;
    private Animator _animator;


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
        _cardOutline = transform.Find("Outline").GetComponent<Outline>();

        _handPile = GetComponentInParent<HandPile>();
        _mainCamera = Camera.main;
        _animator = GetComponent<Animator>();
    }


    public void UpdateCardTextUI(Card card)
    {
        _name.SetText(card.ExteriorInfo.cardName);
        _typeName.SetText(Enum.GetName(card.ExteriorInfo.cardType.GetType(), card.ExteriorInfo.cardType));
        _orbValue.SetText(card.ExteriorInfo.orbValue.ToString());
        _describe.SetText(card.describe);
    }

    public void UpdateCardSpriteUI(CardExteriorInfo exteriorInfo)
    {
        _background.sprite = exteriorInfo.background;
        _frame.sprite = exteriorInfo.frame;
        _banners.sprite = exteriorInfo.banner;
        _image.sprite = exteriorInfo.image;
        _orb.sprite = exteriorInfo.orb;
    }

    public void UpdateCardUI(Card card)
    {
        UpdateCardTextUI(card);
        UpdateCardSpriteUI(card.ExteriorInfo);
    }
}