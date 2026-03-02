using System;
using UnityEngine;

[RequireComponent(typeof(RectTransform))]
public class SafeAreaHelper : MonoBehaviour
{
    public RectTransform trans;
    Rect LastSafeArea = new Rect(0, 0, 0, 0);
    public Rect SafeArea;
    private void Start()
    {
        RefreshSafeArea();
        SafeArea=Screen.safeArea;
    }

    void RefreshSafeArea()
    {
        Rect safeArea = Screen.safeArea;
        if (safeArea != LastSafeArea)
        {
            LastSafeArea = safeArea;

            Vector2 anchorMin = safeArea.position;
            anchorMin.x /= Screen.width;
            anchorMin.y = 0; // anchorMin.y /= Screen.height;
            trans.anchorMin = anchorMin;

            Vector2 anchorMax = safeArea.position + safeArea.size;
            anchorMax.x /= Screen.width;
            anchorMax.y = 1;  // anchorMax.y /= Screen.height;
            trans.anchorMax = anchorMax;
        }
    }
}