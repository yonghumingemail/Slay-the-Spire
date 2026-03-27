using System;
using TMPro;
using UnityEngine;

public class Shield_Sprite2D_V : MonoBehaviour,IShieldV
{
    private TextMeshPro _textMeshPro;

    public void UpdateView(IShield shieldInfo)
    {
        _textMeshPro.SetText(shieldInfo.ShieldValue.ToString());
        gameObject.SetActive(shieldInfo.ShieldValue > 0);
    }
    
    public void InitializeView(GameObject obj )
    {
        gameObject.SetActive(false);
        
        // 获取目标对象的精灵信息用于尺寸适配
        SpriteRenderer targetSpriteRenderer = obj.GetComponentInChildren<SpriteRenderer>();
        Sprite targetSprite = targetSpriteRenderer.sprite;
        
        AdaptiveResize_Renderer _renderer = transform.GetComponent<AdaptiveResize_Renderer>();
        
        GameObject block = transform.Find("Block").gameObject;
        _textMeshPro = block.transform.Find("Value").GetComponent<TextMeshPro>();
        
        Vector3 blockPos = _renderer.Left.transform.localPosition;
        blockPos.z = block.transform.localPosition.z;

        block.transform.localPosition = blockPos;
    }
}