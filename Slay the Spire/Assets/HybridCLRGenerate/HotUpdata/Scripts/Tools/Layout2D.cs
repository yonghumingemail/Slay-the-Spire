using System;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 2D子对象布局排序工具类
/// 支持垂直/水平排序、偏移调整和每行数量限制
/// 使用本地坐标系进行布局计算，适用于普通2D游戏对象
/// </summary>
[ExecuteAlways] // 允许在编辑模式下实时预览效果
public class Layout2D : MonoBehaviour
{
    /// <summary>
    /// 布局类型枚举
    /// </summary>
    public enum LayoutType
    {
        Horizontal, // 水平排序：从左到右排列，到达最大列数后换行
        Vertical // 垂直排序：从上到下排列，到达最大行数后换列
    }

    // ========== 布局配置参数 ==========

    [Header("布局设置")] [Tooltip("选择水平或垂直排列方式")]
    public LayoutType layoutType = LayoutType.Horizontal;

    [Tooltip("每行/列最多容纳的子对象数量")] public int maxPerRow = 5;

    [Tooltip("子对象之间的水平间距")] public float HorizontalOffset;
    private float horizontalOffset;

    [Tooltip("子对象之间的垂直间距")] public float VerticalOffset;
    private float verticalOffset;

    [Header("对齐设置")] [Tooltip("子对象在布局区域内的对齐方式")]
    public TextAnchor alignment = TextAnchor.MiddleLeft;

    [Tooltip("是否相对于父对象中心进行布局")] public bool centerToParent = true;

    [Header("调试选项")] [Tooltip("参数修改时是否自动刷新布局")]
    public bool autoRefresh = true;

    // ========== 内部状态变量 ==========

    /// <summary>
    /// 存储所有活跃子对象的Transform引用
    /// </summary>
    public List<Transform> children = new List<Transform>();

    /// <summary>
    /// 布局区域的总尺寸（用于居中对齐计算）
    /// </summary>
    private Vector2 totalSize;

    // ========== 生命周期方法 ==========
    
    /// <summary>
    /// 游戏运行时初始化布局
    /// </summary>
    void Start()
    {
        if (Application.isPlaying)
        {
            RefreshLayout();
        }
    }

    /// <summary>
    /// 编辑模式下实时更新布局预览
    /// </summary>
    void Update()
    {
#if UNITY_EDITOR
        // 仅在编辑模式且开启自动刷新时执行
        if (!Application.isPlaying && autoRefresh)
        {
            RefreshLayout();
        }
#endif
    }

#if UNITY_EDITOR
    /// <summary>
    ///  Inspector面板参数变化回调
    /// </summary>
    void OnValidate()
    {
        // 参数变化时自动刷新布局
        if (autoRefresh)
        {
            RefreshLayout();
        }
    }
#endif
    // ========== 公共接口方法 ==========

    /// <summary>
    /// 刷新布局 - 主要入口方法
    /// 重新计算所有子对象的位置并应用布局
    /// </summary>
    [ContextMenu("刷新布局")]
    public void RefreshLayout()
    {
        UpdateChildrenList();
        if (children.Count == 0) return;
        SetValue(children[0].gameObject);
        // 根据选择的布局类型调用相应的布局方法
        switch (layoutType)
        {
            case LayoutType.Horizontal:
                LayoutHorizontally();
                break;
            case LayoutType.Vertical:
                LayoutVertically();
                break;
        }
    }


    /// <summary>
    /// 动态添加子对象并重新布局
    /// </summary>
    /// <param name="child">要添加的子对象</param>
    /// <param name="refreshLayout">添加后是否立即刷新布局</param>
    public void AddChild(GameObject child, bool refreshLayout = true)
    {
        if (child == null) return;

        SetValue(child);
        // 设置父对象并刷新子对象列表
        child.transform.SetParent(transform);
        if (refreshLayout)
        {
            RefreshLayout();
        }
    }

    /// <summary>
    /// 移除子对象并重新布局
    /// </summary>
    /// <param name="child">要移除的子对象</param>
    /// <param name="refreshLayout">移除后是否立即刷新布局</param>
    public void RemoveChild(GameObject child, bool refreshLayout = true)
    {
        if (child != null && child.transform.parent == transform)
        {
            DestroyImmediate(child);
            if (refreshLayout)
            {
                RefreshLayout();
            }
        }
    }

    // ========== 私有核心方法 ==========

    /// <summary>
    /// 更新子对象列表，过滤掉非活跃对象
    /// </summary>
    private void UpdateChildrenList()
    {
        children.Clear();
        foreach (Transform child in transform)
        {
            // 只包含活跃的子对象
            if (child.gameObject.activeInHierarchy)
            {
                children.Add(child);
            }
        }
    }

    /// <summary>
    /// 根据对象的大小自动设置间距
    /// </summary>
    private void SetValue(GameObject obj)
    {
        //print("auto update");
        var _renderer = obj.GetComponentInChildren<SpriteRenderer>(true);
        horizontalOffset = _renderer.sprite.rect.size.x / _renderer.sprite.pixelsPerUnit + HorizontalOffset;
        verticalOffset = _renderer.sprite.rect.size.y / _renderer.sprite.pixelsPerUnit + VerticalOffset;
        // var _renderer = obj.GetComponentInChildren<Renderer>(true);
        // horizontalOffset = _renderer.bounds.size.x + HorizontalOffset;
        // verticalOffset = _renderer.bounds.size.y+ VerticalOffset;
    }

    /// <summary>
    /// 水平布局算法：从左到右，到达最大列数后换行
    /// </summary>
    private void LayoutHorizontally()
    {
        // 计算需要的总行数
        int rows = Mathf.CeilToInt((float)children.Count / maxPerRow);
        int currentRow = 0; // 当前行索引
        int currentCol = 0; // 当前列索引

        float startX = 0f; // 起始X坐标
        float startY = 0f; // 起始Y坐标

        // 计算布局区域总尺寸（用于居中对齐）
        totalSize.x = (maxPerRow - 1) * horizontalOffset; // 宽度 = (列数-1) * 水平间距
        totalSize.y = (rows - 1) * verticalOffset; // 高度 = (行数-1) * 垂直间距

        // 居中对齐：计算布局起始偏移量
        if (centerToParent)
        {
            startX = -totalSize.x * 0.5f; // 向左偏移一半宽度
            startY = totalSize.y * 0.5f; // 向上偏移一半高度
        }

        // 遍历所有子对象计算位置
        for (int i = 0; i < children.Count; i++)
        {
            if (children[i] == null) continue;

            // 计算当前子对象的本地坐标
            float x = startX + currentCol * horizontalOffset; // X坐标递增
            float y = startY - currentRow * verticalOffset; // Y坐标递减（向下排列）

            Vector3 newPosition = new Vector3(x, y, children[i].localPosition.z);
            // 应用对齐方式并设置位置
            children[i].localPosition = ApplyAlignment(newPosition, currentRow, currentCol, rows, maxPerRow);

            // 更新行列索引
            currentCol++;
            // 换行判断：达到最大列数时重置列索引，行索引增加
            if (currentCol >= maxPerRow)
            {
                currentCol = 0;
                currentRow++;
            }
        }
    }

    /// <summary>
    /// 垂直布局算法：从上到下，到达最大行数后换列
    /// </summary>
    private void LayoutVertically()
    {
        // 计算需要的总列数
        int cols = Mathf.CeilToInt((float)children.Count / maxPerRow);
        int currentRow = 0; // 当前行索引
        int currentCol = 0; // 当前列索引

        float startX = 0f; // 起始X坐标
        float startY = 0f; // 起始Y坐标

        // 计算布局区域总尺寸
        totalSize.x = (cols - 1) * horizontalOffset; // 宽度 = (列数-1) * 水平间距
        totalSize.y = (maxPerRow - 1) * verticalOffset; // 高度 = (行数-1) * 垂直间距

        // 居中对齐计算
        if (centerToParent)
        {
            startX = -totalSize.x * 0.5f; // 向左偏移一半宽度
            startY = totalSize.y * 0.5f; // 向上偏移一半高度
        }

        // 遍历布局所有子对象
        for (int i = 0; i < children.Count; i++)
        {
            if (children[i] == null) continue;

            // 计算当前位置（垂直布局先改变Y坐标）
            float x = startX + currentCol * horizontalOffset; // X坐标按列递增
            float y = startY - currentRow * verticalOffset; // Y坐标递减（向下排列）

            Vector3 newPosition = new Vector3(x, y, children[i].localPosition.z);
            children[i].localPosition = ApplyAlignment(newPosition, currentRow, currentCol, maxPerRow, cols);

            // 更新行列索引（垂直布局优先增加行索引）
            currentRow++;
            // 换列判断：达到最大行数时重置行索引，列索引增加
            if (currentRow >= maxPerRow)
            {
                currentRow = 0;
                currentCol++;
            }
        }
    }

    /// <summary>
    /// 应用对齐方式到位置坐标
    /// 根据不同的TextAnchor值调整子对象的最终位置
    /// </summary>
    /// <param name="position">原始计算位置</param>
    /// <param name="row">当前行索引</param>
    /// <param name="col">当前列索引</param>
    /// <param name="totalRows">总行数</param>
    /// <param name="totalCols">总列数</param>
    /// <returns>应用对齐后的新位置</returns>
    private Vector3 ApplyAlignment(Vector3 position, int row, int col, int totalRows, int totalCols)
    {
        Vector3 alignedPosition = position;

        // 根据不同的对齐方式调整坐标偏移
        switch (alignment)
        {
            case TextAnchor.UpperLeft: // 左上对齐：无需调整
                break;
            case TextAnchor.UpperCenter: // 上中对齐：水平居中
                alignedPosition.x += (totalCols - 1) * horizontalOffset * 0.5f;
                break;
            case TextAnchor.UpperRight: // 右上对齐：水平居右
                alignedPosition.x += (totalCols - 1) * horizontalOffset;
                break;
            case TextAnchor.MiddleLeft: // 左中对齐：垂直居中
                alignedPosition.y -= (totalRows - 1) * verticalOffset * 0.5f;
                break;
            case TextAnchor.MiddleCenter: // 中心对齐：水平和垂直都居中
                alignedPosition.x += (totalCols - 1) * horizontalOffset * 0.5f;
                alignedPosition.y -= (totalRows - 1) * verticalOffset * 0.5f;
                break;
            case TextAnchor.MiddleRight: // 右中对齐：水平居右，垂直居中
                alignedPosition.x += (totalCols - 1) * horizontalOffset;
                alignedPosition.y -= (totalRows - 1) * verticalOffset * 0.5f;
                break;
            case TextAnchor.LowerLeft: // 左下对齐：垂直居下
                alignedPosition.y -= (totalRows - 1) * verticalOffset;
                break;
            case TextAnchor.LowerCenter: // 下中对齐：水平居中，垂直居下
                alignedPosition.x += (totalCols - 1) * horizontalOffset * 0.5f;
                alignedPosition.y -= (totalRows - 1) * verticalOffset;
                break;
            case TextAnchor.LowerRight: // 右下对齐：水平居右，垂直居下
                alignedPosition.x += (totalCols - 1) * horizontalOffset;
                alignedPosition.y -= (totalRows - 1) * verticalOffset;
                break;
        }

        return alignedPosition;
    }
}