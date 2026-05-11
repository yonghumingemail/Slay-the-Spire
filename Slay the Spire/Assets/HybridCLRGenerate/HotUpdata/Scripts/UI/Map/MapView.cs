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
        maskInteraction.OnMouseDownDelegate += data => { InternalSetVisible(false); };
    }
    

    protected internal override void OnInit(object userData)
    {
        base.OnInit(userData);
        InternalSetVisible(false);
        if (userData is Button button)
        {
            button.onClick.AddListener(() => { InternalSetVisible(true);});
        }
    }
    
   
}