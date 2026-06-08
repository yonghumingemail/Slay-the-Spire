using System.Collections.Generic;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.U2D;

/// <summary>
/// Buff列表视图控制器
/// 负责管理Buff的UI显示、对象池和生命周期
/// </summary>
public class BuffList_V : MonoBehaviour, IBuffList_V,INeedToInitialize
{
    public int rowMaxCount = 5;
    public float intervalX;
    public float intervalY;
    private float firstPos;

    /// <summary>Buff数据到UI对象的映射字典</summary>
    public Dictionary<BuffObj, Buff_V> buffGameDic = new();
    public List<BuffObj> buffObjs = new();

    /// <summary>Buff UI对象池（用于复用减少实例化开销）</summary>
    private Stack<Buff_V> buffPool = new();

    /// <summary>Buff图标图集（包含所有Buff的图标）</summary>
    private SpriteAtlas spriteAtlas;

    /// <summary>Buff UI预设体（用于实例化新的Buff UI）</summary>
    private GameObject buffVPrefab;
    
    public async UniTask Initialize()
    {
        // 并行加载多个资源，提高加载效率
        var taskList = new[]
        {
            // 加载Buff图标图集
            AddressablesMgr.Instance.LoadAssetAsync<object>("Assets/Art/Image/SpriteAtlas/Powers.spriteatlasv2"),

            // 加载Buff UI预设体
            AddressablesMgr.Instance.LoadAssetAsync<object>("Assets/Art/Prefab/UI/Combat/Buff.prefab"),
        };

        // 等待所有资源加载完成
        var results = await UniTask.WhenAll(taskList);

        // 类型转换并赋值
        spriteAtlas = results[0] as SpriteAtlas; // 第一个结果是图集
        buffVPrefab = results[1] as GameObject; // 第二个结果是预设体
        firstPos = intervalX * rowMaxCount / -2;
    }


    /// <summary>
    /// 添加Buff到UI列表
    /// </summary>
    /// <param name="buffObj">要添加的Buff数据对象</param>
    public void AddBuff(BuffObj buffObj)
    {
        if (buffGameDic.ContainsKey(buffObj)) return;
        // 检查对象池是否为空，为空则创建新实例
        if (buffPool.Count < 1)
        {
            // 实例化新的Buff UI对象
            var tempObj = Instantiate(buffVPrefab, transform);
            tempObj.SetActive(false); // 初始设置为不活跃
            var buffV = tempObj.GetComponent<Buff_V>();
            buffV.Init();
            buffPool.Push(buffV); // 加入对象池
            
        }

        // 从对象池中获取可用的Buff UI
        var tempBuff_V = buffPool.Pop();
        
        // 初始化Buff UI（设置图标、数据等）
       
        buffObj.view = tempBuff_V.gameObject;
        buffObjs.Add(buffObj);
        buffGameDic.Add(buffObj, tempBuff_V);
        
        UpdateBuffUIPos();
        tempBuff_V.UpdateBuffUI(buffObj, spriteAtlas);
        tempBuff_V.gameObject.SetActive(true); 
        tempBuff_V.TriggerAnimator();
    }

    /// <summary>
    /// 从UI列表中移除Buff
    /// </summary>
    /// <param name="buffObj">要移除的Buff数据对象</param>
    public void RemoveBuff(BuffObj buffObj)
    {
        // 检查Buff是否存在
        if (!buffGameDic.TryGetValue(buffObj, out var tempBuff_V))
        {
            Debug.Log("要移除的对象不存在");
            return;
        }


        // 重置位置
        tempBuff_V.gameObject.transform.localPosition =
            new Vector3(0, 0, tempBuff_V.gameObject.transform.localPosition.z);
        tempBuff_V.UpdateBuffUI(null, null);
        tempBuff_V.gameObject.SetActive(false); // 隐藏对象


        // 从字典中移除映射关系
        buffObj.view = null;
        buffObjs.Remove(buffObj);
        buffGameDic.Remove(buffObj);
        UpdateBuffUIPos();

        // 回收对象到对象池
        buffPool.Push(tempBuff_V);
    }

    /// <summary>
    /// 更新Buff的UI显示
    /// 当Buff数据变化时调用，更新对应UI的显示
    /// </summary>
    /// <param name="buffObj">要更新的Buff数据对象</param>
    public void UpdateBuffView(BuffObj buffObj)
    {
        // 查找对应的UI对象
        if (!buffGameDic.TryGetValue(buffObj, out var tempBuff_V)) return;
        // 调用UI更新方法
        tempBuff_V.UpdateBuffUI(buffObj);
        tempBuff_V.TriggerAnimator();
    }

    [ContextMenu("更新buff位置")]
    public void UpdateBuffUIPosEditor()
    {
        firstPos = intervalX * rowMaxCount / -2;
        for (int i = 0; i < transform.childCount; i++)
        {
            transform.GetChild(i).transform.localPosition = new Vector3(firstPos + (i%rowMaxCount)  * intervalX, -i / (rowMaxCount) * intervalY, 0);
        }
    }
    private void UpdateBuffUIPos()
    {
        int i = 0;
        foreach (var buffV in buffObjs)
        {
            buffGameDic[buffV].transform.localPosition = new Vector3(firstPos + (i%rowMaxCount) * intervalX, -i / (rowMaxCount + 1) * intervalY, 0);
            i++;
        }
    }

    /// <summary>
    /// Unity生命周期方法：对象销毁时调用
    /// 释放已加载的Addressables资源
    /// </summary>
    private void OnDestroy()
    {
        AddressablesMgr.Instance.Release("Assets/Art/Image/SpriteAtlas/Powers.spriteatlasv2");
        AddressablesMgr.Instance.Release("Assets/Art/Prefab/UI/Buff.prefab");
    }

   
}