using System;
using Cysharp.Threading.Tasks;
using TMPro;
using UnityEngine;

public class Intent_V : MonoBehaviour
{
    public SpriteRenderer _spriteRenderer { get; private set; }
    public TextMeshPro _textMeshPro{get; private set;}
    
    private void Awake()
    {
        _spriteRenderer = GetComponent<SpriteRenderer>();
        _textMeshPro = GetComponentInChildren<TextMeshPro>();
    }

    public void UpdateUI(IIntent intent)
    {
        if(intent == null) return;
        _spriteRenderer.sprite =intent._sprite;
        _textMeshPro.SetText(intent._text);
    }

    public void Enable(bool enable)
    {
        gameObject.SetActive(enable);
    }
    


    private void OnDestroy()
    {
    }
}