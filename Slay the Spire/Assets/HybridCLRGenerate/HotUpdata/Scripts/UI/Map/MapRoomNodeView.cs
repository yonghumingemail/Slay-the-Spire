using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MapRoomNodeView : MonoBehaviour, IPointerClickHandler
{
    public Image nodeImage { get; private set; }
    public Image nodeOutlineImage { get; private set; }
    public RectTransform rectTransform { get; private set; }

    private void Awake()
    {
        nodeImage = transform.GetChild(1).GetComponent<Image>();
        nodeOutlineImage = transform.GetChild(0).GetComponent<Image>();
        rectTransform = transform.GetComponent<RectTransform>();
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        print("click");
    }

    public void UpdateView(Sprite nodeSprite, Sprite nodeOutlineSprite)
    {
        nodeImage.sprite = nodeSprite;
        nodeOutlineImage.sprite = nodeOutlineSprite;
    }
}