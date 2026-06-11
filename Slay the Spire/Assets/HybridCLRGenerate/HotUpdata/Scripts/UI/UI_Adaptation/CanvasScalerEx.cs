using System;
using UnityEngine;
using UnityEngine.UI;

public class CanvasScalerEx : CanvasScaler
{
    protected override void HandleScaleWithScreenSize()
    {
        if (Screen.width / m_ReferenceResolution.x < Screen.height / m_ReferenceResolution.y)
            matchWidthOrHeight = 0f;
        else
            matchWidthOrHeight = 1f;
        
        base.HandleScaleWithScreenSize();
    }
}