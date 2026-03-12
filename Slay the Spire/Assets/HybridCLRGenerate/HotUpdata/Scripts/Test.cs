using System;
using CardEvent_Ironclad;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;


public class Test : MonoBehaviour
{
    public GameObject testcard;

    private void Start()
    {
       
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            OnMouseOver2();
        }
    }

    public void OnMouseOver2()
    {
        GameObject temp = Instantiate(testcard, transform);
        temp.SetActive(false);
    }
}