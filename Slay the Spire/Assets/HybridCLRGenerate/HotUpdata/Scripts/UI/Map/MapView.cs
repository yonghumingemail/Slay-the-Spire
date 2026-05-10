using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MapView : UIFormLogic
{
    private MouseInteraction maskInteraction;

    private void Awake()
    {
        maskInteraction = transform.Find("Mask").GetComponent<MouseInteraction>();
        maskInteraction.OnMouseDownDelegate += data => { gameObject.SetActive(false); };
        // var graphic = gameObject.GetComponent<Graphic>();
        // graphic.raycastTarget = false;
    }

    protected internal override void OnInit(object userData)
    {
        base.OnInit(userData);
        if (userData is Button button)
        {
            button.onClick.AddListener(OnUIButtonClick);
        }
    }

    private void OnUIButtonClick()
    {
        transform.SetAsLastSibling();
        gameObject.SetActive(true);
    }
}