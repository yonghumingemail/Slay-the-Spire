using System;
using UnityEngine;

public class Test : MonoBehaviour
{
    public int index;
    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            transform.SetSiblingIndex(index);
        }
    }
}