using System;
using System.Collections.Generic;
using CardCrawlGame.Map;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.U2D;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class Test : MonoBehaviour
{
    public SpriteRenderer render;
 public async void Start()
 { 
     var spriteatlas = await Addressables.LoadAssetAsync<SpriteAtlas>("Assets/Art/Image/SpriteAtlas/Intent.spriteatlasv2");
    var temp= await AddressablesMgr.Instance.LoadAssetAsync<Sprite>("Assets/Art/Image/SpriteAtlas/Intent.spriteatlasv2[buff1L]"); 
    var temp2= await AddressablesMgr.Instance.LoadAssetAsync<Sprite>("Assets/Art/Image/SpriteAtlas/Intent.spriteatlasv2[debuff1]");
    render.sprite = temp;
    render.sprite = temp;
    render.sprite = spriteatlas.GetSprite("defend");
 }

 private void OnDestroy()
 {
     AddressablesMgr.Instance.Release("Assets/Art/Image/SpriteAtlas/Intent.spriteatlasv2[buff1L]");
     AddressablesMgr.Instance.Release("Assets/Art/Image/SpriteAtlas/Intent.spriteatlasv2[debuff1]");
 }
}