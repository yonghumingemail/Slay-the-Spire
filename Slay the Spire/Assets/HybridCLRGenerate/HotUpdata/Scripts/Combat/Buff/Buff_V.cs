using TMPro;
using UnityEngine;
using UnityEngine.U2D;

public class Buff_V : MonoBehaviour,IBuff_V
{
    private TextMeshPro _stackText;
    private SpriteRenderer _buffSprite;
    public BuffObj _buffObj { get;private set; }

    private void Awake()
    {
        _stackText = transform.GetComponentInChildren<TextMeshPro>();
        _buffSprite = GetComponent<SpriteRenderer>();
    }

    public void Initialized(BuffObj BuffObj,SpriteAtlas spriteAtlas)
    {
        if(BuffObj==null) return;
        _buffObj = BuffObj;
        _buffSprite.sprite = spriteAtlas.GetSprite(_buffObj.name);
        UpdateBuffUI(_buffObj);

    }

    public void UpdateBuffUI(BuffObj BuffObj)
    {
        _stackText.text = BuffObj.stack.ToString(); 
    }
    
}
