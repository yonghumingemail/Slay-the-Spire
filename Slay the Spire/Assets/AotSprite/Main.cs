using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;

public class Main : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
   public void OnPointerDown(PointerEventData eventData)
   {
      print("TestDown");
   }

   public void OnPointerUp(PointerEventData eventData)
   {
      print("TestUp");
   }
}