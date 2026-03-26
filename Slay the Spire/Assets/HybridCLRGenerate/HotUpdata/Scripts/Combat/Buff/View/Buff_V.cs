using System;
using TMPro;
using UnityEngine;
using UnityEngine.U2D;

public class Buff_V : MonoBehaviour,IBuff_V
{
    private Animator _buffAnimator;
    private TextMeshPro _stackText;
    private SpriteRenderer _buffSprite;
    private SpriteRenderer _buffAnimatorSprite;
    public BuffObj _buffObj { get;private set; }

    private void Awake()
    {
        _buffAnimator = GetComponent<Animator>();
        _stackText = transform.GetComponentInChildren<TextMeshPro>();
        _buffSprite = transform.Find("UI").GetComponent<SpriteRenderer>();
        _buffAnimatorSprite = transform.Find("UI/AnimatorEffect").GetComponent<SpriteRenderer>();
    }

    public void Initialized(BuffObj BuffObj,SpriteAtlas spriteAtlas)
    {
        if(BuffObj==null) return;
        _buffObj = BuffObj;
        _buffObj.view = gameObject;
        _buffSprite.sprite = spriteAtlas.GetSprite(_buffObj.name);
        _buffAnimatorSprite.sprite = _buffSprite.sprite;
        
        UpdateBuffUI(_buffObj);

    }

    public void TriggerAnimator()
    {
        _buffAnimator.Play("Update",0);
    }
    public void UpdateBuffUI(BuffObj BuffObj)
    {
        _stackText.text = BuffObj.stack.ToString(); 
    }
    
}
