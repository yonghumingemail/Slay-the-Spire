using System;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;

public class Intent_V : MonoBehaviour
{
    public SpriteRenderer _spriteRenderer { get; private set; }
    public TextMeshPro _textMeshPro{get; private set;}
    public float speed = 1;
    public Vector3 animatorMovePointA;
    public Vector3 animatorMovePointB;
    public bool animatorEffect = true;
    public PlayerLoopTiming playerLoopTiming = PlayerLoopTiming.Update;

    private void Awake()
    {
        _spriteRenderer = GetComponentInChildren<SpriteRenderer>();
        _textMeshPro = GetComponentInChildren<TextMeshPro>();
        AnimatorEffect().Forget();
    }

    public void UpdateUI(IIntent intent)
    {
        _spriteRenderer.sprite =intent._sprite;
        _textMeshPro.SetText(intent._text);
    }

    public void Enable(bool enable)
    {
        gameObject.SetActive(enable);
    }
    
    private async UniTaskVoid AnimatorEffect()
    {
        while (animatorEffect)
        {
            float time = Mathf.PingPong(Time.time * speed, 1);
            transform.localPosition = Vector3.Lerp(animatorMovePointA, animatorMovePointB, time);
            await UniTask.Yield(playerLoopTiming);
        }
    }

    private void OnDestroy()
    {
        animatorEffect = false;
    }
}