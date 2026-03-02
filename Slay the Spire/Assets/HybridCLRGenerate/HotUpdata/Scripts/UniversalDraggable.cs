using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;

/// <summary>
/// 通用可拖拽组件 - 可挂载到任何需要拖拽的对象上
/// 支持3D对象、2D对象和UI元素
/// </summary>
public class UniversalDraggable : MonoBehaviour, IDrag, IPointerDownHandler, IPointerUpHandler, IDragHandler
{
    [Header("拖拽设置")] [Tooltip("拖拽是否启用")] [SerializeField]
    private bool dragEnabled = true;

    [Tooltip("拖拽约束轴")] [SerializeField] private DragConstraint constraint = DragConstraint.None;

    [Tooltip("拖拽平滑时间")] [SerializeField] private float smoothTime = 0.1f;

    [Tooltip("拖拽时是否置顶")] [SerializeField] private bool bringToFront = true;

    [Header("高级设置")] [Tooltip("是否只在左键点击时拖拽")] [SerializeField]
    private bool leftClickOnly = true;

    [Header("事件回调")] public Action<Transform> OnBeginDragEvent { get; set; }
    public Action<Transform> OnDraggingEvent { get; set; }
    public Action<Transform> OnEndDragEvent { get; set; }

    private Camera mainCamera;
    private Vector3 dragOffset;
    private Vector2 velocity;
    private bool isDragging;
    private RectTransform rectTransform;
    private Canvas parentCanvas;
    private CancellationTokenSource dragTaskCts;

    public bool IsDragging => isDragging;

    public enum DragConstraint
    {
        None,
        X,
        Y,
        Z,
        XY,
        XZ,
        YZ
    }

    private void Awake()
    {
        mainCamera = Camera.main;
        rectTransform = GetComponent<RectTransform>();
        parentCanvas = GetComponentInParent<Canvas>();

        // 验证必要组件
        if (mainCamera == null)
        {
            Debug.LogWarning("UniversalDraggable: 未找到主摄像机，拖拽功能无法正常工作");
        }
    }

    private void OnDestroy()
    {
        // 组件销毁时取消拖拽任务
        dragTaskCts?.Cancel();
        dragTaskCts?.Dispose();
        dragTaskCts = null;

        ClearEvent();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        // 验证左键点击（如果启用）
        if (leftClickOnly && eventData.button != PointerEventData.InputButton.Left)
            return;

        if (!dragEnabled) return;

        // 计算偏移量
        CalculateDragOffset(eventData);

        // 置顶显示
        if (bringToFront)
        {
            transform.SetAsLastSibling();
        }

        // 重置速度
        velocity = Vector2.zero;

        OnBeginDragEvent?.Invoke(transform);

        // 启动拖拽任务
        StartDragTask().Forget();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (!isDragging) return;

        StopDragging();
    }

    // 实现 IDragHandler 以获得更好的拖拽事件支持
    public void OnDrag(PointerEventData eventData)
    {
        // 这个接口可以辅助检测拖拽，但主要逻辑还是在我们的任务中
    }

    /// <summary>
    /// 计算拖拽偏移量
    /// </summary>
    private void CalculateDragOffset(PointerEventData eventData)
    {
        if (rectTransform != null && parentCanvas != null)
        {
            // UI元素拖拽
            RectTransformUtility.ScreenPointToWorldPointInRectangle(
                rectTransform,
                eventData.position,
                eventData.pressEventCamera,
                out Vector3 worldPoint);

            dragOffset = transform.position - worldPoint;
        }
        else
        {
            // 3D/2D对象拖拽
            Vector3 screenPoint = mainCamera.WorldToScreenPoint(transform.position);
            Vector3 curScreenPoint = new Vector3(
                eventData.position.x,
                eventData.position.y,
                screenPoint.z);

            Vector3 curPosition = mainCamera.ScreenToWorldPoint(curScreenPoint);
            dragOffset = transform.position - curPosition;
        }
    }

    /// <summary>
    /// 开始拖拽任务
    /// </summary>
    private async UniTaskVoid StartDragTask()
    {
        // 取消之前的任务
        dragTaskCts?.Cancel();
        dragTaskCts = new CancellationTokenSource();
        var cancellationToken = dragTaskCts.Token;

        isDragging = true;

        try
        {
            while (isDragging && !cancellationToken.IsCancellationRequested)
            {
                await UniTask.Yield(PlayerLoopTiming.Update, cancellationToken);

                // 安全检查
                if (mainCamera == null || this == null) break;

                // 计算目标位置
                Vector3 targetPosition = CalculateTargetPosition();

                // 应用约束
                ApplyConstraints(ref targetPosition);

                // 平滑移动
                PerformSmoothMovement(targetPosition);

                // 触发拖拽中事件
                OnDraggingEvent?.Invoke(transform);
            }
        }
        catch (OperationCanceledException)
        {
            // 任务取消是正常行为
        }
        catch (Exception e)
        {
            Debug.LogError($"拖拽任务错误: {e.Message}", this);
        }
        finally
        {
            // 确保状态正确重置
            if (isDragging)
            {
                StopDragging();
            }
        }
    }

    /// <summary>
    /// 计算目标位置
    /// </summary>
    private Vector3 CalculateTargetPosition()
    {
        Vector3 mousePosition = Input.mousePosition;
        Vector3 targetPosition;

        if (rectTransform != null && parentCanvas != null)
        {
            // UI元素位置计算
            RectTransformUtility.ScreenPointToWorldPointInRectangle(
                rectTransform,
                mousePosition,
                mainCamera, // 使用主摄像机
                out targetPosition);
        }
        else
        {
            // 3D/2D对象位置计算
            Vector3 screenPoint = mainCamera.WorldToScreenPoint(transform.position);
            Vector3 curScreenPoint = new Vector3(
                mousePosition.x,
                mousePosition.y,
                screenPoint.z);

            targetPosition = mainCamera.ScreenToWorldPoint(curScreenPoint);
        }

        return targetPosition + dragOffset;
    }

    /// <summary>
    /// 执行平滑移动
    /// </summary>
    private void PerformSmoothMovement(Vector3 targetPosition)
    {
        // 使用 Vector2.SmoothDamp 处理 X/Y 轴
        Vector2 currentPos = new Vector2(transform.position.x, transform.position.y);
        Vector2 targetPos = new Vector2(targetPosition.x, targetPosition.y);

        Vector2 smoothedPosition = Vector2.SmoothDamp(
            currentPos,
            targetPos,
            ref velocity,
            smoothTime);

        // 应用位置（保持 Z 轴不变）
        transform.position = new Vector3(
            smoothedPosition.x,
            smoothedPosition.y,
            transform.position.z
        );
    }

    /// <summary>
    /// 应用拖拽约束
    /// </summary>
    private void ApplyConstraints(ref Vector3 position)
    {
        Vector3 originalPosition = transform.position;

        switch (constraint)
        {
            case DragConstraint.X:
                position.y = originalPosition.y;
                position.z = originalPosition.z;
                break;
            case DragConstraint.Y:
                position.x = originalPosition.x;
                position.z = originalPosition.z;
                break;
            case DragConstraint.Z:
                position.x = originalPosition.x;
                position.y = originalPosition.y;
                break;
            case DragConstraint.XY:
                position.z = originalPosition.z;
                break;
            case DragConstraint.XZ:
                position.y = originalPosition.y;
                break;
            case DragConstraint.YZ:
                position.x = originalPosition.x;
                break;
        }
    }

    /// <summary>
    /// 停止拖拽
    /// </summary>
    private void StopDragging()
    {
        if (!isDragging) return;

        isDragging = false;
        dragTaskCts?.Cancel();

        OnEndDragEvent?.Invoke(transform);
    }

    /// <summary>
    /// 清空事件订阅
    /// </summary>
    public void ClearEvent()
    {
        OnBeginDragEvent = null;
        OnDraggingEvent = null;
        OnEndDragEvent = null;
    }

    /// <summary>
    /// 设置拖拽启用状态
    /// </summary>
    public void SetDragEnabled(bool _enabled)
    {
        dragEnabled = _enabled;
        if (!_enabled && isDragging)
        {
            StopDragging();
        }
    }

    /// <summary>
    /// 强制停止拖拽
    /// </summary>
    public void ForceStopDrag()
    {
        StopDragging();
    }
}