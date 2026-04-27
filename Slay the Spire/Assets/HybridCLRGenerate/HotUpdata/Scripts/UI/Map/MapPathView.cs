using System.Collections.Generic;
using CardCrawlGame.Map;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class MapPathView : MonoBehaviour
{
    private MapGenerator mapGenerator;

    private GameObject lineSpritePrefab;
    private GameObject roomPrefab;
    private GameObject Lines;
    private GameObject MapRoomNodes;

    public float nodeSpacingX; // 节点间距
    public float nodeSpacingY; // 节点间距

    public float offsetCircleRadius = 1f; // 偏移圆半径

    [Header("地图参数")] public int mapHeight = 16;
    public int mapWidth = 7;
    public int pathCount = 6;
    public int seed;

    // 运行时数据
    private MapRoomNode[,] _map;
    private Dictionary<MapRoomNode, RectTransform> _nodeToObj = new();
    private System.Random _random;


    private void Awake()
    {
        mapGenerator = new MapGenerator();
        _random = new System.Random(seed);
        _map = mapGenerator.Generate(mapHeight, mapWidth, pathCount, _random);
        Lines = transform.Find("Lines").gameObject;
        MapRoomNodes = transform.Find("MapRoomNodes").gameObject;
        Initialized().Forget();
    }

    public async UniTaskVoid Initialized()
    {
        lineSpritePrefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/Line.prefab");
        roomPrefab = await AddressablesMgr.Instance.LoadAssetAsync<GameObject>("Assets/Art/Prefab/UI/MapRoomNode.prefab");

        Image nodeUI = roomPrefab.GetComponentInChildren<Image>();
        nodeSpacingX += nodeUI.rectTransform.sizeDelta.x * nodeUI.rectTransform.localScale.x;
        nodeSpacingY += nodeUI.rectTransform.sizeDelta.y * nodeUI.rectTransform.localScale.y;
        transform.localPosition += new Vector3(-(nodeSpacingX * (mapWidth - 1) / 2), -(nodeSpacingY * (mapHeight - 1) / 2), transform.localPosition.z);
        
        CreateMap();
    }


    /// <summary>
    /// 获取圆内随机偏移（均匀分布，不扎堆圆心）
    /// </summary>
    private Vector2 GetRandomCircleOffset(float radius)
    {
        float angle = Random.Range(0, Mathf.PI * 2);
        float r = Mathf.Sqrt(Random.value) * radius;

        float x = Mathf.Cos(angle) * r;
        float y = Mathf.Sin(angle) * r;

        return new Vector2(x, y);
    }

    private void CreateMap()
    {
        int rows = _map.GetLength(0);
        int cols = _map.GetLength(1);

        // 生成房间节点
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (_map[i, j] == null) continue;
                GameObject temp = Instantiate(roomPrefab.gameObject, MapRoomNodes.transform);
                Vector2 pos = Vector2.zero;
                pos.x = j * nodeSpacingX;
                pos.y = i * nodeSpacingY;
                pos += GetRandomCircleOffset(offsetCircleRadius);
                temp.transform.localPosition = pos;
                _nodeToObj.Add(_map[i, j], temp.transform as RectTransform);
            }
        }

        // 生成线条
        // 生成连线（使用 RectTransform 本地坐标计算）
        RectTransform linesRect = Lines.GetComponent<RectTransform>();
        foreach (var info in _nodeToObj)
        {
            foreach (var edge in info.Key.Edges)
            {
                if (edge.DstY >= rows) continue; // Boss虚拟边

                RectTransform srcRect = _nodeToObj[_map[edge.SrcY, edge.SrcX]];
                RectTransform dstRect = _nodeToObj[_map[edge.DstY, edge.DstX]];

                // 将两个节点的世界坐标转为 Lines 的本地坐标
                Vector2 srcLocal = linesRect.InverseTransformPoint(srcRect.position);
                Vector2 dstLocal = linesRect.InverseTransformPoint(dstRect.position);

                // 实例化线条（作为 Lines 的子物体）
                Image line = Instantiate(lineSpritePrefab, Lines.transform).GetComponentInChildren<Image>();
                RectTransform lineRect = line.rectTransform;

                Vector2 dir = dstLocal - srcLocal;
                float length = dir.magnitude;
                float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;

                // 设置线条的本地位置、旋转和尺寸
                lineRect.localPosition = srcLocal;
                lineRect.localRotation = Quaternion.Euler(0, 0, angle);

                // sizeDelta.y 保持预制体粗细，x 设为线条长度（UI空间单位）
                Vector2 currentSize = lineRect.sizeDelta;
                lineRect.sizeDelta = new Vector2(length / line.rectTransform.localScale.x, currentSize.y);
            }
        }
    }
}
