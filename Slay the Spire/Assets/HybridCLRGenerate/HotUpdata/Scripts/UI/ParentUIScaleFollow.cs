using System;
using UnityEngine;
using UnityEngine.UI;

public class ParentUIScaleFollow : MonoBehaviour
{
    public Sprite sprite;
    public float rate;

    private void Start()
    {
        if (sprite==null)
        {
            sprite = GetComponent<Image>().sprite;
        }
        RectTransform rectT = GetComponent<RectTransform>();
        rate = rectT.rect.width / sprite.rect.width;

        for (int i = 0; i < transform.childCount; i++)
        {
            Vector2 tempPos = transform.GetChild(i).GetComponent<RectTransform>().anchoredPosition;
            tempPos.x += tempPos.x * (rate - transform.GetChild(i).GetComponent<RectTransform>().localScale.x);
            tempPos.y += tempPos.y * (rate - transform.GetChild(i).GetComponent<RectTransform>().localScale.x);

            transform.GetChild(i).GetComponent<RectTransform>().anchoredPosition = tempPos;
            transform.GetChild(i).GetComponent<RectTransform>().localScale = new Vector3(rate, rate, rate);
        }
    }
}