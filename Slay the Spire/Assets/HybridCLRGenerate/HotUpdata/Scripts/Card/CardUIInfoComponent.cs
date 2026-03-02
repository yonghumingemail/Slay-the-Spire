using System;
using TMPro;
using UnityEngine.UI;

[Serializable]
public struct CardUIInfoComponent
{
    public Image _background;
    public Image _frame;
    public Image _banners;
    public Image _image;
    public Image _orb;
    public TextMeshProUGUI _name;
    public TextMeshProUGUI _typeName;
    public TextMeshProUGUI _point;
    public TextMeshProUGUI _describe;

    public CardUIInfoComponent(UICard uiCard)
    {
        _background = uiCard.transform.Find("UI").GetComponent<Image>();
        _frame = uiCard.transform.Find("UI/Head/Frame").GetComponent<Image>();
        _banners = uiCard.transform.Find("UI/Head/Frame/Banners").GetComponent<Image>();
        _image = uiCard.transform.Find("UI/Head/Image").GetComponent<Image>();
        _orb = uiCard.transform.Find("UI/Head/Orb").GetComponent<Image>();

        _name = uiCard.transform.Find("UI/Head/Frame/Banners/CardName").GetComponent<TextMeshProUGUI>();
        _typeName = uiCard.transform.Find("UI/Head/Frame/TypeName").GetComponent<TextMeshProUGUI>();
        _point = uiCard.transform.Find("UI/Head/Orb/Point").GetComponent<TextMeshProUGUI>();
        _describe = uiCard.transform.Find("UI/Describe").GetComponent<TextMeshProUGUI>();
    }
}
