using System.Collections.Generic;
using UnityEngine;

namespace CardCrawlGame.Map
{
    /// <summary>
    /// 杀戮尖塔地图 可视化绘制（对接你的MapGenerator）
    /// 空房间不绘制
    /// </summary>
    public class MapVisualizer : MonoBehaviour
    {
        [Header("基础设置")]
        public GameObject roomPrefab; // 房间预制体
        public Vector2 mapOffset = new Vector2(0, 0); // 地图整体偏移
        public float nodeSpacing = 200f; // 节点间距

        [Header("随机圆内偏移")]
        public bool enableRandomOffset = true; // 是否开启随机偏移
        public float offsetCircleRadius = 1f; // 偏移圆半径

        [Header("地图参数")]
        public int mapHeight = 10;
        public int mapWidth = 7;
        public int pathCount = 3;
        public int seed;

        [Header("连线设置")]
        public LineRenderer linePrefab;
        public float lineWidth = 4f;
        public Color lineColor = Color.white;

        // 运行时数据
        private List<List<MapRoomNode>> _mapNodes;
        private Dictionary<MapRoomNode, GameObject> _nodeToObj = new();
        private List<LineRenderer> _lines = new();

        void Start()
        {
            GenerateAndShowMap();
        }

        /// <summary>
        /// 生成地图 + 可视化
        /// </summary>
        public void GenerateAndShowMap()
        {
            ClearOldMap();

            // 1. 生成地图数据（使用你的原有生成器）
            var generator = new MapGenerator();
            _mapNodes = generator.Generate(mapHeight, mapWidth, pathCount, new System.Random(seed));

            // 2. 创建房间对象
            CreateRoomObjects();

            // 3. 绘制路径连线
            DrawAllEdges();
        }

        /// <summary>
        /// 清空旧地图
        /// </summary>
        void ClearOldMap()
        {
            foreach (var obj in _nodeToObj.Values) Destroy(obj);
            foreach (var line in _lines) Destroy(line.gameObject);

            _nodeToObj.Clear();
            _lines.Clear();
        }

        /// <summary>
        /// 创建所有房间的GameObject —— 空房间不创建
        /// </summary>
        void CreateRoomObjects()
        {
            for (int y = 0; y < _mapNodes.Count; y++)
            {
                var row = _mapNodes[y];
                for (int x = 0; x < row.Count; x++)
                {
                    var node = row[x];

                    // ====================== 关键修改 ======================
                    // 没有边 且 没有父节点 = 真正的空房间 → 跳过不生成
                    if (!node.HasEdges() && node.Parents.Count == 0)
                    {
                        continue;
                    }
                    // ======================================================

                    // 网格基础位置
                    float baseX = mapOffset.x + x * nodeSpacing;
                    float baseY = mapOffset.y + y * nodeSpacing;

                    // 圆内随机偏移
                    Vector2 offset = enableRandomOffset ? GetRandomCircleOffset(offsetCircleRadius) : Vector2.zero;

                    // 最终世界坐标
                    Vector3 worldPos = new Vector3(baseX + offset.x, baseY + offset.y, 0);

                    // 实例化房间
                    GameObject roomObj = Instantiate(roomPrefab, transform);
                    roomObj.transform.position = worldPos;
                    roomObj.name = $"Room_{x}_{y}";

                    _nodeToObj.Add(node, roomObj);
                }
            }
        }

        /// <summary>
        /// 获取圆内随机偏移（均匀分布，不扎堆圆心）
        /// </summary>
        Vector2 GetRandomCircleOffset(float radius)
        {
            float angle = Random.Range(0, Mathf.PI * 2);
            float r = Mathf.Sqrt(Random.value) * radius;

            float x = Mathf.Cos(angle) * r;
            float y = Mathf.Sin(angle) * r;

            return new Vector2(x, y);
        }

        /// <summary>
        /// 绘制所有路径连线
        /// </summary>
        void DrawAllEdges()
        {
            foreach (var row in _mapNodes)
            {
                foreach (var node in row)
                {
                    if (!node.HasEdges()) continue;
                    if (!_nodeToObj.TryGetValue(node, out GameObject fromObj)) continue;

                    foreach (var edge in node.Edges)
                    {
                        var targetNode = GetNodeByGrid(edge.DstX, edge.DstY);
                        if (targetNode == null) continue;
                        if (!_nodeToObj.TryGetValue(targetNode, out GameObject toObj)) continue;

                        DrawLine(fromObj.transform.position, toObj.transform.position);
                    }
                }
            }
        }

        /// <summary>
        /// 绘制单条连线
        /// </summary>
        void DrawLine(Vector3 from, Vector3 to)
        {
            LineRenderer line;
            if (linePrefab != null)
            {
                line = Instantiate(linePrefab, transform);
            }
            else
            {
                var go = new GameObject("EdgeLine");
                go.transform.SetParent(transform);
                line = go.AddComponent<LineRenderer>();
            }

            line.positionCount = 2;
            line.SetPosition(0, from);
            line.SetPosition(1, to);
            line.startWidth = lineWidth;
            line.endWidth = lineWidth;
            line.startColor = lineColor;
            line.endColor = lineColor;

            _lines.Add(line);
        }

        /// <summary>
        /// 根据网格坐标获取节点
        /// </summary>
        MapRoomNode GetNodeByGrid(int x, int y)
        {
            if (y < 0 || y >= _mapNodes.Count) return null;
            var row = _mapNodes[y];
            if (x < 0 || x >= row.Count) return null;
            return row[x];
        }
    }
}