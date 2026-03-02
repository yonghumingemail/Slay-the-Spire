using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;

public class UIScaleEffect : MonoBehaviour,IPointerEnterHandler,IPointerExitHandler
{
    public float magnification=1.1f;
    public float magnification_speed=0.15f;
    private Vector3 _scale;
    
    private void Awake()
    {
       _scale = transform.localScale;
    }


    public void OnPointerEnter(PointerEventData eventData)
    {
        DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, _scale * magnification,
            magnification_speed);
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        DOTween.To(() => transform.localScale, value => { transform.localScale = value; }, _scale, magnification_speed);
    }
}
