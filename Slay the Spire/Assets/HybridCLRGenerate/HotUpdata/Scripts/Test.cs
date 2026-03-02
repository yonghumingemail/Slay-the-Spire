using System;
using CardEvent_Ironclad;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;


public class Test : MonoBehaviour
{
    public Vector3 temp2;
    public Vector3 Localtemp2;
    

    private void Start()
    {
        
    }

    private void Update()
    {
        temp2 = transform.position;
        Localtemp2 = transform.localPosition;
    }
}