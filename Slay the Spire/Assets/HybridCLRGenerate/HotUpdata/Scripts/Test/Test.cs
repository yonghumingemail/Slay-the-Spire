using System;
using System.Collections.Generic;
using CardCrawlGame.Map;
using UnityEngine;
using Random = UnityEngine.Random;

public class Test : MonoBehaviour
{
    private MapGenerator mapGenerator;

    public SpriteRenderer roomPrefabRenderer; // 房间预制体

    [Header("基础设置")] public Vector2 mapOffset = new Vector2(0, 0); // 地图整体偏移
    public float nodeSpacingX = 2f; // 节点间距
    public float nodeSpacingY = 2f; // 节点间距

    [Header("随机圆内偏移")] public bool enableRandomOffset = true; // 是否开启随机偏移
    public float offsetCircleRadius = 1f; // 偏移圆半径

    [Header("地图参数")] public int mapHeight = 16;
    public int mapWidth = 7;
    public int pathCount = 6;
    public int seed;

    // 运行时数据
    private MapRoomNode[,] _map;
    private Dictionary<MapRoomNode, GameObject> _nodeToObj = new();
    private List<LineRenderer> _lines = new();
    private System.Random _random;


    [ContextMenu("Show")]
    public void Test23()
    {
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

    private void Awake()
    {
        mapGenerator = new MapGenerator();
        _random = new System.Random(seed);
        _map = mapGenerator.Generate(mapHeight, mapWidth, pathCount, _random);
        int rows = _map.GetLength(0);
        int cols = _map.GetLength(1);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (_map[i, j] == null) continue;
                GameObject temp = Instantiate(roomPrefabRenderer.gameObject, transform);
                Vector2 pos = Vector2.zero;
                pos.x = j * nodeSpacingX;
                pos.y = i * nodeSpacingY;
                //   pos += GetRandomCircleOffset(offsetCircleRadius);
                temp.transform.localPosition = pos;
            }
        }
    }

    public void Start()
    {
    }
}