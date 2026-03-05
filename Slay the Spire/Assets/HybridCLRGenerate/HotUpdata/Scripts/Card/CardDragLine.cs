using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

public class CardDragLine : MonoBehaviour
{
    public GameObject[] lines;
    public SpriteRenderer[] sprites;

    public Color triggerColor = new Color(1, 100.0f / 255, 100.0f / 255, 1);
    public Color defaultColor = new Color(1, 1, 1, 1);
    private Camera mainCamera;

    private void Awake()
    {
        Initialized();
    }


    private void Initialized()
    {
        mainCamera = Camera.main;
        lines = new GameObject[transform.childCount];
        sprites = new SpriteRenderer[transform.childCount];
        for (int i = 0; i < transform.childCount; i++)
        {
            lines[i] = transform.GetChild(i).gameObject;
            lines[i].gameObject.SetActive(false);
            sprites[i] = transform.GetChild(i).GetComponent<SpriteRenderer>();
        }

        EventCenter_Singleton.Instance.AddEvent<Func<CardDragLine>>("CardDragLine", () => this);
        gameObject.SetActive(false);
    }


    public void Register(EventCenter<string> eventCenter)
    {
        eventCenter.AddEvent<Action<PointerEventData>>("OnPointerDown", (instanceObj) =>
        {
            transform.position = instanceObj.position;
            gameObject.SetActive(true);
            foreach (var t in lines)
            {
                t.gameObject.SetActive(true);
            }

            Trigger(instanceObj).Forget();
        });

        eventCenter.AddEvent<Action<PointerEventData>>("OnPointerUp", (instanceObj) =>
        {
            _tokenSource?.Cancel();
            _tokenSource?.Dispose();
            
            
            gameObject.SetActive(false);
            foreach (var t in sprites)
            {
                t.color = defaultColor;
                t.transform.localPosition = Vector3.zero;
            }
        });
    }

    private CancellationTokenSource _tokenSource;

    private async UniTaskVoid Trigger(PointerEventData _data)
    {
        float inverseLinesLength = 1f / lines.Length;
        // 缓存常用向量计算
        Vector2 startPoint = mainCamera.ScreenToWorldPoint(_data.pressPosition);
        print(startPoint);
        Vector2 endPoint = mainCamera.ScreenToWorldPoint(_data.position);
        Vector2 midPoint = new Vector2(startPoint.x, (startPoint.y + endPoint.y) * 0.5f); // 优化：直接计算中点

        Vector3 pointPosition;
        Vector3 lastPoint;
        Vector3 direction;

        _tokenSource = new CancellationTokenSource();
        CancellationToken  _token = _tokenSource.Token;
        while (!_token.IsCancellationRequested)
        {
            endPoint = mainCamera.ScreenToWorldPoint(Input.mousePosition);
            midPoint.y =  (startPoint.y + endPoint.y) * 0.5f;
            // 优化：减少循环中的计算量
            for (int i = lines.Length - 2; i > -1; i--)
            {
                float t = i * inverseLinesLength; // 使用预计算的倒数

                pointPosition = GetQuadraticPoint(startPoint, midPoint, endPoint, t);
                lines[i].transform.position = pointPosition + Vector3.back * (1 / transform.localScale.x);


                direction = lines[i + 1].transform.position - pointPosition;
                float angle = FastAtan2(direction.y, direction.x); 
                lines[i].transform.eulerAngles = new Vector3(0, 0, angle - 90f);
            }

            lastPoint = GetQuadraticPoint(startPoint, midPoint, endPoint, (lines.Length - 1f) * inverseLinesLength);
            lines[^1].transform.position = lastPoint + Vector3.back;
            lines[^1].transform.eulerAngles = lines[^2].transform.eulerAngles; 
            await UniTask.Yield(PlayerLoopTiming.PreLateUpdate);;
        }
    }

    public void TriggerEnter()
    {
        foreach (var VARIABLE in sprites)
        {
            VARIABLE.color = triggerColor;
        }
    }

    public void TriggerExit()
    {
        foreach (var VARIABLE in sprites)
        {
            VARIABLE.color = defaultColor;
        }
    }

    private static float FastAtan2(float y, float x)
    {
        if (x == 0f) return y > 0f ? 90f : -90f;

        float atan = Mathf.Atan(y / x) * Mathf.Rad2Deg;
        if (x < 0f) atan += 180f;
        return atan;
    }

    // 二阶贝塞尔曲线公式实现
    private static Vector2 GetQuadraticPoint(Vector2 p0, Vector2 p1, Vector2 p2, float t)
    {
        var u = 1 - t;
        return u * u * p0 + 2 * u * t * p1 + t * t * p2;
    }
}