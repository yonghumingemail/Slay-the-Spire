using System;
using System.Collections.Generic;
using UnityEngine;
using Z_Tools;

public class CardScrollView : MonoBehaviour
{
    public RectTransform content;
    public CanvasGroup canvasGroup { get; private set; }
    public Dictionary<CardEvent_Abs,(Card card, UICard uiCard)> cardDic=new Dictionary<CardEvent_Abs,(Card card, UICard uiCard)>();

    private void Awake()
    {
        content = transform.Find("Viewport/Content").GetComponent<RectTransform>();
        canvasGroup = GetComponent<CanvasGroup>();
        canvasGroup.alpha = 0;
        canvasGroup.blocksRaycasts = false;
        
        EventCenter_Singleton.Instance.AddEvent<Func<CardScrollView>>("CardScrollView", () => this);
    }
}