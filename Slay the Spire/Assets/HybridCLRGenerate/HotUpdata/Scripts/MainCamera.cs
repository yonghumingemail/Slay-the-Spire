using System;
using UnityEngine;
using Z_Tools;

public class MainCamera : MonoBehaviour
{
  private Camera _camera;
  private void Awake()
  {
    _camera = GetComponent<Camera>();
    EventCenter_Singleton.Instance.AddEvent<Func<Camera>>("MainCamera",()=>_camera);
  }
}
