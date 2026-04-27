using System;
using System.Linq;
using CardCrawlGame.Map;
using UnityEngine;

#if UNITY_EDITOR
using UnityEditor;
#endif

public class MapVisualizer : MonoBehaviour
{
    public Vector2 nodeSpacing = new Vector2(120, 120);
    public Vector2 nodeSize = new Vector2(50, 50);
    public Color visitedColor = Color.blue;
    public Color availableColor = Color.green;
    public Color unvisitedColor = Color.gray;
    public Color bossColor = Color.magenta;

    public MapRoomNode[,] _currentMap;

    [Range(1, 7)] public int pathCount = 2;
    public int seed = 0;
    public Vector3 Offest;

    public int BOSS_X;
    public int BOSS_Y;

    [ContextMenu("生成并显示地图")]
    public void GenerateAndVisualize()
    {
        var mapGenerator = new MapGenerator();

        _currentMap = mapGenerator.Generate(16, 7, pathCount, new System.Random(seed));
        Debug.Log($"地图生成成功，种子：{seed}，总层数：" + _currentMap.GetLength(0));
        BOSS_X = _currentMap.GetLength(1) / 2;
        BOSS_Y = _currentMap.GetLength(0) ;
    }

    // ================================================================================
    // ✅ 只在 Gizmos 里画图形，不画文字（避免坐标偏移）
    // ================================================================================
    private void OnDrawGizmos()
    {
        if (_currentMap == null) return;

        int rowCount = _currentMap.GetLength(0);
        int colCount = _currentMap.GetLength(1);

        for (int y = 0; y < rowCount; y++)
        {
            for (int x = 0; x < colCount; x++)
            {
                MapRoomNode node = _currentMap[y, x];
                if (node == null) continue;

                Vector3 nodePos = GetWorldPos(x, y);

                // 颜色
                if (node.Taken) Gizmos.color = visitedColor;
                else if (IsNodeAvailable(node)) Gizmos.color = availableColor;
                else Gizmos.color = unvisitedColor;

                // 绘制节点
                Gizmos.DrawSphere(nodePos, nodeSize.x * 0.4f);

                // 绘制连线
                DrawNodeEdges(node, nodePos);
            }
        }

        DrawBossNode();
    }

    // ================================================================================
    // ✅ 坐标文字 单独用 OnSceneGUI 绘制（绝对不偏移）
    // ================================================================================
#if UNITY_EDITOR
    private void OnSceneGUI(SceneView view)
    {
        if (_currentMap == null) return;

        Handles.zTest = UnityEngine.Rendering.CompareFunction.Always;
        float labelHeight = Mathf.Min(nodeSpacing.x, nodeSpacing.y) * 0.3f;

        int rows = _currentMap.GetLength(0);
        int cols = _currentMap.GetLength(1);

        for (int y = 0; y < rows; y++)
        {
            for (int x = 0; x < cols; x++)
            {
                var node = _currentMap[y, x];
                if (node == null) continue;

                Vector3 pos = GetWorldPos(x, y) + Vector3.up * labelHeight;
                GUIStyle style = new GUIStyle(EditorStyles.boldLabel)
                {
                    alignment = TextAnchor.MiddleCenter,
                    normal = { textColor = Color.white }
                };
                Handles.Label(pos, $"({x},{y})", style);
            }
        }

        // BOSS 文字
        Vector3 bossPos = GetWorldPos(BOSS_X, BOSS_Y) + Vector3.up * labelHeight * 1.2f;
        Handles.Label(bossPos, "BOSS", EditorStyles.boldLabel);
    }

    [InitializeOnLoadMethod]
    private static void Register()
    {
        SceneView.duringSceneGui -= OnSceneDraw;
        SceneView.duringSceneGui += OnSceneDraw;
    }

    private static void OnSceneDraw(SceneView view)
    {
        if (Selection.activeGameObject?.TryGetComponent(out MapVisualizer viz) ?? false)
            viz.OnSceneGUI(view);
    }
#endif

    // ================================================================================
    // ✅ 统一获取世界坐标（所有位置都走这里，绝对不会乱）
    // ================================================================================
    private Vector3 GetWorldPos(int x, int y)
    {
        return new Vector3(x * nodeSpacing.x, y * nodeSpacing.y, 0) + Offest;
    }

    private void DrawBossNode()
    {
        Vector3 bossPos = GetWorldPos(BOSS_X, BOSS_Y);
        Gizmos.color = bossColor;
        Gizmos.DrawSphere(bossPos, nodeSize.x * 0.6f);

        if (_currentMap == null) return;
        int rows = _currentMap.GetLength(0)-1;
        int cols = _currentMap.GetLength(1);


        for (int x = 0; x < cols; x++)
        {
            MapRoomNode node = _currentMap[rows, x];
            if (node == null || node.Edges == null) continue;

            foreach (var edge in node.Edges)
            {
                if (edge.DstX == BOSS_X && edge.DstY == BOSS_Y)
                {
                    Vector3 from = GetWorldPos(node.X, node.Y);
                    Gizmos.color = Color.yellow;
                    Gizmos.DrawLine(from, bossPos);
                    DrawArrow(from, bossPos);
                }
            }
        }
    }

    private void DrawNodeEdges(MapRoomNode node, Vector3 fromPos)
    {
        if (node.Edges == null || node.Edges.Count == 0) return;

        foreach (var edge in node.Edges)
        {
            if (edge.DstX == BOSS_X && edge.DstY == BOSS_Y) continue;

            MapRoomNode targetNode = GetNode(edge.DstX, edge.DstY);
            if (targetNode == null) continue;

            Vector3 toPos = GetWorldPos(edge.DstX, edge.DstY);
            Gizmos.color = Color.yellow;
            Gizmos.DrawLine(fromPos, toPos);
            DrawArrow(fromPos, toPos);
        }
    }

    private void DrawArrow(Vector3 from, Vector3 to)
    {
        Vector3 dir = to - from;
        if (dir.magnitude < 0.1f) return;

        float arrowSize = Mathf.Min(nodeSpacing.x, nodeSpacing.y) * 0.1f;
        float cut = Mathf.Min(arrowSize * 2, dir.magnitude * 0.5f);
        Vector3 start = from + dir.normalized * (dir.magnitude - cut);

        Vector3 right = Quaternion.LookRotation(dir) * Quaternion.Euler(0, 180 + 30, 0) * Vector3.forward;
        Vector3 left = Quaternion.LookRotation(dir) * Quaternion.Euler(0, 180 - 30, 0) * Vector3.forward;

        Gizmos.DrawRay(start, right * arrowSize);
        Gizmos.DrawRay(start, left * arrowSize);
    }

    private bool IsNodeAvailable(MapRoomNode node)
    {
        if (node.Parents == null) return false;
        foreach (var p in node.Parents)
            if (p != null && p.Taken)
                return true;
        return false;
    }

    private MapRoomNode GetNode(int x, int y)
    {
        if (_currentMap == null) return null;
        if (y < 0 || y >= _currentMap.GetLength(0)) return null;
        if (x < 0 || x >= _currentMap.GetLength(1)) return null;
        return _currentMap[y, x];
    }

    [ContextMenu("打印地图结构")]
    public void PrintMapRawStructure()
    {
        if (_currentMap == null)
        {
            Debug.LogWarning("请先生成地图！");
            return;
        }

        int rows = _currentMap.GetLength(0);
        int cols = _currentMap.GetLength(1);

        for (int y = 0; y < rows; y++)
        {
            for (int x = 0; x < cols; x++)
            {
                MapRoomNode node = _currentMap[y, x];
                if (node == null) continue;

                string parentInfo = node.Parents != null && node.Parents.Count > 0
                    ? string.Join(",", node.Parents.Select(p => p == null ? "null" : $"({p.X},{p.Y})"))
                    : "起点";

                string edgeInfo = node.Edges != null && node.Edges.Count > 0
                    ? string.Join(" | ", node.Edges.Select(e => $"→({e.DstX},{e.DstY})"))
                    : "终点";

                Debug.Log($"节点 ({x},{y}) | 父节点：[{parentInfo}] | 出口：[{edgeInfo}]");
            }
        }
    }
}