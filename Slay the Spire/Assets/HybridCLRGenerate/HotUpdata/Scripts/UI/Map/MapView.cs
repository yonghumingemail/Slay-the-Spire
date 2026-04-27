using System;
using UnityEngine;

public class MapView : MonoBehaviour
{
    private MouseInteraction maskInteraction;

    private void Awake()
    {
        maskInteraction=transform.Find("Mask").GetComponent<MouseInteraction>();

    }

    void Start()
    {
        
    }


    void Update()
    {
        
    }
}
