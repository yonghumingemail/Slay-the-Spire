using System;
using TMPro;
using UnityEngine;
using UnityEngine.U2D;

public class Buff_V : MonoBehaviour, IBuff_V
{
    private Animator _buffAnimator;
    private TextMeshPro _stackText;
    private SpriteRenderer _buffSprite;
    private SpriteRenderer _buffEffectSprite;

    private void Awake()
    {
        _buffAnimator = GetComponent<Animator>();
        _stackText = transform.GetComponentInChildren<TextMeshPro>();
        _buffSprite = transform.Find("UI").GetComponent<SpriteRenderer>();
        _buffEffectSprite = transform.Find("UI/AnimatorEffect").GetComponent<SpriteRenderer>();
    }

    public GameObject GetViewObject() => gameObject;

    public void UpdateBuffUI(BuffObj BuffObj)
    {
        _stackText.text = BuffObj?.stack.ToString();
    }

    public void UpdateBuffUI(BuffObj BuffObj, SpriteAtlas spriteAtlas)
    {
        if (BuffObj == null) return;

        _buffSprite.sprite = spriteAtlas?.GetSprite(BuffObj.name);
        _buffEffectSprite.sprite = _buffSprite?.sprite;
        UpdateBuffUI(BuffObj);
    }

    public void TriggerAnimator()
    {
        _buffAnimator.Play("Update", 0);
    }
}