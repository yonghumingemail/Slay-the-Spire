using System;
using UnityEngine;
using UnityEngine.EventSystems;

public class MapView : MonoBehaviour
{
    private MouseInteraction maskInteraction;

    private void Awake()
    {
        maskInteraction=transform.Find("Mask").GetComponent<MouseInteraction>();
        maskInteraction.OnMouseDownDelegate += MouseDown;
    }

    void Start()
    {
        
    }


    void Update()
    {
        
    }

    private void MouseDown(PointerEventData data)
    {
        gameObject.SetActive(false);
    }
}
