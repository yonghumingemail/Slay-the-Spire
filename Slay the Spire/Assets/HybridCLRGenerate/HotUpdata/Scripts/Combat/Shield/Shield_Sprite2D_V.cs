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
    
    public void InitializeView(IHealth_V healthV,Renderer targetRenderer)
    {
        gameObject.SetActive(false);

        AdaptiveResize_Renderer _renderer = transform.GetComponent<AdaptiveResize_Renderer>();
        _renderer.SpriteResize(targetRenderer,healthV.Scale_X);
        
        GameObject block = transform.Find("Block").gameObject;
        _textMeshPro = block.transform.Find("Value").GetComponent<TextMeshPro>();

        Vector3 blockPos = _renderer.Left.transform.localPosition;
        blockPos.z = block.transform.localPosition.z;

        block.transform.localPosition = blockPos;
        transform.position = healthV.GetViewObject().transform.position;
    }
}