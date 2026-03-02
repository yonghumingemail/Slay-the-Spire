using System;
using System.Collections.Generic;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.SceneManagement;
using UnityEngine.U2D;
using Z_Tools;

public class SceneResourceManage : MonoBehaviour
{
    List<string> keys = new List<string>();

    /// <summary>
    /// 已加载资源的缓存字典 [资源键, 资源对象]
    /// </summary>
    Dictionary<string, object> resources = new Dictionary<string, object>();

    public List<Sprite> sprites = new List<Sprite>();
    public GameObject testG;

    /// <summary>
    /// 取消令牌源，用于控制异步操作的取消
    /// </summary>
    private CancellationTokenSource cancellationTokenSource;
    private void Awake()
    {
      
    }

    
   

    void Start()
    {
    }


  void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
          
          // var value= await AddressablesMgr.Instance.LoadAssetAsync<SpriteAtlas>("Assets/Art/Image/SpriteAtlas/Powers.spriteatlasv2");
          // value.GetSprite("ai");
          //   AddressablesMgr.Instance.Show();
        }
    }
}