using System;
using System.Collections.Generic;
using UnityEngine;
using Z_Tools;

public class CardScrollView : MonoBehaviour
{
    public RectTransform content;
    public CanvasGroup canvasGroup { get; private set; }
    public Dictionary<Card, UICard> cardDic = new Dictionary<Card, UICard>();

    private void Awake()
    {
        content = transform.Find("Viewport/Content").GetComponent<RectTransform>();
        canvasGroup = GetComponent<CanvasGroup>();
        canvasGroup.alpha = 0;
        canvasGroup.blocksRaycasts = false;

        EventCenter_Singleton.Instance.AddEvent<Func<CardScrollView>>("CardScrollView", () => this);
    }
}