using System;
using System.Globalization;
using TMPro;
using UnityEngine;

public class Shield_Sprite2D_V : MonoBehaviour, IShield_V
{
    private TextMeshPro _textMeshPro;
    private float scale_X; 
    public GameObject GetViewObject() => gameObject;

    public void UpdateView(IShield shieldInfo)
    {
        _textMeshPro.SetText(shieldInfo.ShieldValue.ToString(CultureInfo.CurrentCulture));
        gameObject.SetActive(shieldInfo.ShieldValue > 0);
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="obj">获取目标对象的精灵信息用于尺寸适配</param>
    /// <param name="healthV">获取生命UI进行位置适配</param>
    public void InitializeView(GameObject obj, IHealth_V healthV)
    {
        gameObject.SetActive(false);

       
        SpriteRenderer targetSpriteRenderer = obj.GetComponentInChildren<SpriteRenderer>();
        Sprite targetSprite = targetSpriteRenderer.sprite;

        AdaptiveResize_Renderer _renderer = transform.GetComponent<AdaptiveResize_Renderer>();
        _renderer.SpriteResize(targetSpriteRenderer,healthV.Scale_X);
        
        GameObject block = transform.Find("Block").gameObject;
        _textMeshPro = block.transform.Find("Value").GetComponent<TextMeshPro>();

        Vector3 blockPos = _renderer.Left.transform.localPosition;
        blockPos.z = block.transform.localPosition.z;

        block.transform.localPosition = blockPos;
        transform.position = healthV.GetViewObject().transform.position;
    }
}