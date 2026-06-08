using System;
using UnityEngine;

public class AdaptiveResize_Renderer : MonoBehaviour
{
    public Renderer Left => _left;
    public Renderer Right => _right;
    public Renderer Body => _body;

    [SerializeField] private Renderer _left;
    [SerializeField] private Renderer _right;
    [SerializeField] private Renderer _body;

    public float Length => Left.bounds.size.x +
                           Right.bounds.size.x +
                           Body.bounds.size.x;

    public void SpriteResize(Renderer _renderer, float scale_X = 1f)
    {
        if (_left == null|| _right == null || _body == null)
        {
            _left = transform.Find("Left").GetComponent<Renderer>();
            _right = transform.Find("Right").GetComponent<Renderer>();
            _body = transform.Find("Body").GetComponent<Renderer>();
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