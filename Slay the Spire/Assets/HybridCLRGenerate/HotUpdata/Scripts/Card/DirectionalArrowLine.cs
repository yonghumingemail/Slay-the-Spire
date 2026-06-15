using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;

public class DirectionalArrowLine : MonoBehaviour
{
    // 直接缓存 Transform，消除每帧的 .transform 访问
    private Transform[] lineTransforms;
    public SpriteRenderer[] sprites;

    public Color triggerColor = new Color(1, 100f / 255, 100f / 255, 1);
    public Color defaultColor = new Color(1, 1, 1, 1);
    private Camera mainCamera;

    private CancellationTokenSource _tokenSource;

    public void Init(Camera camera_)
    {
        mainCamera = camera_;
        int childCount = transform.childCount;
        lineTransforms = new Transform[childCount];
        sprites = new SpriteRenderer[childCount];

        for (int i = 0; i < childCount; i++)
        {
            Transform child = transform.GetChild(i);
            child.localPosition = Vector3.zero;
            lineTransforms[i] = child;
            sprites[i] = child.GetComponent<SpriteRenderer>();
        }

        gameObject.SetActive(false);
    }

    public void Interrupt()
    {
        _tokenSource?.Cancel();
    }

    public void Enable(PointerEventData data)
    {
        _tokenSource?.Cancel();
        _tokenSource?.Dispose();

        gameObject.SetActive(true);
        transform.localPosition = Vector3.zero;
        Trigger(data.pointerEnter).Forget();
    }

    private async UniTaskVoid Trigger(GameObject target)
    {
        _tokenSource = new CancellationTokenSource();
        CancellationToken token = _tokenSource.Token;

        int lineCount = lineTransforms.Length;
        float inverseLineLength = 1f / lineCount;
        // 最终线段索引
        int lastIdx = lineCount - 1;

        while (!token.IsCancellationRequested)
        {
            // 1. 计算控制点
            Vector2 startPoint = target.transform.position;
            Vector2 endPoint = mainCamera.ScreenToWorldPoint(Input.mousePosition);
            Vector2 midPoint = new Vector2(startPoint.x, (startPoint.y + endPoint.y) * 0.5f);

            // 2. 更新中间点（除最末点外）
            for (int i = lineCount - 2; i >= 0; i--)
            {
                float t = i * inverseLineLength;
                Vector2 pos = GetQuadraticPoint(startPoint, midPoint, endPoint, t);
                lineTransforms[i].position = new Vector3(pos.x, pos.y, target.transform.position.z - 0.1f);

                // 计算方向
                Vector3 dir = lineTransforms[i + 1].position - lineTransforms[i].position;
                float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
                lineTransforms[i].eulerAngles = new Vector3(0, 0, angle - 90f);
            }

            // 3. 更新最末点（位置在曲线终点，旋转跟随倒数第二点）
            Vector2 lastPos = GetQuadraticPoint(startPoint, midPoint, endPoint, lastIdx * inverseLineLength);
            lineTransforms[lastIdx].position = new Vector3(lastPos.x, lastPos.y, target.transform.position.z - 0.1f);
            lineTransforms[lastIdx].eulerAngles = lineTransforms[lastIdx - 1].eulerAngles;

            await UniTask.Yield(PlayerLoopTiming.PreLateUpdate);
        }

        // 结束后隐藏并重置
        gameObject.SetActive(false);
        foreach (var sprite in sprites)
        {
            sprite.color = defaultColor;
            sprite.transform.localPosition = Vector3.zero;
        }
    }

    public void TriggerEnter()
    {
        foreach (var sprite in sprites)
            sprite.color = triggerColor;
    }

    public void TriggerExit()
    {
        foreach (var sprite in sprites)
            sprite.color = defaultColor;
    }

    // 二阶贝塞尔曲线（保持原有实现）
    private static Vector2 GetQuadraticPoint(Vector2 p0, Vector2 p1, Vector2 p2, float t)
    {
        float u = 1 - t;
        return u * u * p0 + 2 * u * t * p1 + t * t * p2;
    }

    private void OnDestroy()
    {
        if (_tokenSource != null)
        {
            _tokenSource.Cancel();
            _tokenSource.Dispose();
        }
    }
}