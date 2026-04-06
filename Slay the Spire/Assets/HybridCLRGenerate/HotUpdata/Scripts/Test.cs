using DG.Tweening;
using UnityEngine;

public class Test : MonoBehaviour
{
    public Vector3 angle;
    public float speed;

    private void Awake()
    {

    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            print(1);
            transform.DORotate(angle, speed, RotateMode.LocalAxisAdd);
        }
    }
}
