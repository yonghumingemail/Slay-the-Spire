using System;
using System.Collections.Generic;
using CardCrawlGame.Map;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class Test : MonoBehaviour
{
    public Canvas Canvas;
    public CanvasGroup canvasGroup;

    public bool isActive;

    [ContextMenu("Active")]
    public void SetActive()
    {
        gameObject.SetActive(isActive);
        
    }


    [ContextMenu("Layer")]
    public void SetLayer()
    {
        gameObject.layer = isActive ? 5 : 0;
    }

    [ContextMenu("Group")]
    public void SeGroup()
    {
        if (isActive)
        {
            canvasGroup.alpha = 1;
            canvasGroup.interactable = true;
            canvasGroup.blocksRaycasts = true;
        }
        else
        {
            canvasGroup.alpha = 0;
            canvasGroup.interactable = false;
            canvasGroup.blocksRaycasts = false;
        }
    }
}