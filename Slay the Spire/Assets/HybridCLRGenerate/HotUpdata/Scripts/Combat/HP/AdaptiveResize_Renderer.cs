using System;
using UnityEngine;

public class AdaptiveResize_Renderer : MonoBehaviour
{
    public Renderer Left { get; private set; }
    public Renderer Right { get; private set; }
    public Renderer Body { get; private set; }

    public float Length => Left.bounds.size.x +
                           Right.bounds.size.x +
                           Body.bounds.size.x;

    public void SpriteResize(Renderer _renderer, float scale_X = 1f)
    {
        Left = transform.Find("Left").GetComponent<Renderer>();
        Right = transform.Find("Right").GetComponent<Renderer>();
        Body = transform.Find("Body").GetComponent<Renderer>();
        if (Left == null || Right == null || Body == null)
        {
            Debug.Log("缺少必要子对象，检查子对象名字是否正确");
        }

        float rate = _renderer.bounds.size.x / Body.bounds.size.x * scale_X;

        Body.transform.localPosition = Vector3.zero;
        Vector3 scale = Body.transform.localScale;
        scale.x *= rate;
        Body.transform.localScale = scale;

        Vector3 leftPos = Body.transform.localPosition;
        leftPos.x = (Left.bounds.size.x / 2) + (Body.bounds.size.x / 2);
        leftPos.x *= -1;

        Left.transform.localPosition = leftPos;

        Vector3 rightPos = Body.transform.localPosition;
        rightPos.x += Right.bounds.size.x / 2 + ((Body.bounds.size.x) / 2);
        Right.transform.localPosition = rightPos;
    }
}