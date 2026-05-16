using System;
using CardCrawlGame.Map;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.U2D;
using UnityEngine.UI;

public class MapRoomNodeView : MonoBehaviour, IPointerClickHandler
{
    private Image nodeImage;
    private Image nodeOutlineImage;
    public RectTransform rectTransform { get; private set; }
    public Action<PointerEventData> onPointerClick;

    private void Awake()
    {
        nodeImage = transform.GetChild(1).GetComponent<Image>();
        nodeOutlineImage = transform.GetChild(0).GetComponent<Image>();
        rectTransform = transform as RectTransform;
    }


    public void OnPointerClick(PointerEventData eventData)
    {
        onPointerClick?.Invoke(eventData);
    }

    public void UpdateView(Sprite room, Sprite roomOutline)
    {
        nodeImage.sprite = room;
        nodeOutlineImage.sprite = roomOutline;
    }
}