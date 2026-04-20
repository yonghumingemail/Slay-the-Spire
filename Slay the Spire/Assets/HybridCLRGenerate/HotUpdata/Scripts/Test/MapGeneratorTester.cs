using System;
using System.Collections.Generic;
using System.Linq;
using CardCrawlGame.Map;
using UnityEngine;
using Random = UnityEngine.Random;

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
    public Color bossColor = Color.magenta; // BOSS 颜色

    public List<List<MapRoomNode>> _currentMap = new();
    [Range(1, 7)] public int pathCount = 2;
    public int seed = 0;
    public Vector3 Offest;

    // BOSS 节点固定坐标
    private const int BOSS_X = 3;
    private const int BOSS_Y = 17;

    [ContextMenu("生成并显示地图")]
    public void GenerateAndVisualize()
    {
        var mapGenerator=new MapGenerator();
        _currentMap = mapGenerator.Generate(16, 7, pathCount, new System.Random(seed));
        Debug.Log($"地图生成成功，种子：{seed}，总层数：{_currentMap.Count}");
    }

    private void OnDrawGizmos()
    {
        if (_currentMap == null || _currentMap.Count == 0) return;
        DrawMapGizmos();
    }

    private void DrawMapGizmos()
    {
        // 1. 绘制正常节点
        for (int y = 0; y < _currentMap.Count; y++)
        {
            var row = _currentMap[y];
            if (row == null) continue;

            for (int x = 0; x < row.Count; x++)
            {
                var node = row[x];
                if (node == null) continue;

                Vector3 nodePos = new Vector3(x * nodeSpacing.x, y * nodeSpacing.y, 0) + Offest;

                // 节点颜色
                if (node.Taken)
                    Gizmos.color = visitedColor;
                else if (IsNodeAvailable(node))
                    Gizmos.color = availableColor;
                else
                    Gizmos.color = unvisitedColor;

                Gizmos.DrawSphere(nodePos, nodeSize.x * 0.4f);

#if UNITY_EDITOR
                Handles.Label(nodePos + Vector3.up * 25, $"({x},{y})");
#endif

                DrawNodeEdges(node, nodePos);
            }
        }

        // 2. 🔥 绘制 BOSS 节点
        DrawBossNode();
    }

    // 🔥 绘制 BOSS 节点 + 所有通往 BOSS 的连线
    private void DrawBossNode()
    {
        Vector3 bossPos = new Vector3(BOSS_X * nodeSpacing.x, BOSS_Y * nodeSpacing.y, 0) + Offest;
        Gizmos.color = bossColor;
        Gizmos.DrawSphere(bossPos, nodeSize.x * 0.6f);

#if UNITY_EDITOR
        Handles.Label(bossPos + Vector3.up * 30, "BOSS");
#endif

        // 遍历所有节点，把连到 BOSS 的线画出来
        foreach (var row in _currentMap)
        {
            foreach (var node in row)
            {
                if (node == null || node.Edges == null) continue;

                foreach (var edge in node.Edges)
                {
                    if (edge.DstX == BOSS_X && edge.DstY == BOSS_Y)
                    {
                        Vector3 from = new Vector3(node.X * nodeSpacing.x, node.Y * nodeSpacing.y, 0) + Offest;
                        Gizmos.color = Color.yellow;
                        Gizmos.DrawLine(from, bossPos);
                        DrawArrow(from, bossPos);
                    }
                }
            }
        }
    }

    // 绘制节点出口连线
    private void DrawNodeEdges(MapRoomNode node, Vector3 fromPos)
    {
        if (node.Edges == null || node.Edges.Count == 0) return;

        foreach (var edge in node.Edges)
        {
            // 跳过 BOSS 边（单独绘制）
            if (edge.DstX == BOSS_X && edge.DstY == BOSS_Y)
                continue;

            MapRoomNode targetNode = GetNode(edge.DstX, edge.DstY, _currentMap);
            if (targetNode == null) continue;

            Vector3 toPos = new Vector3(edge.DstX * nodeSpacing.x, edge.DstY * nodeSpacing.y, 0) + Offest;
            Gizmos.color =   Color.yellow;
            Gizmos.DrawLine(fromPos, toPos);
            DrawArrow(fromPos, toPos);
        }
    }

    // 箭头
    private void DrawArrow(Vector3 from, Vector3 to)
    {
        Vector3 dir = to - from;
        if (dir.magnitude < 0.1f) return;

        float arrowSize = 8f;
        Vector3 right = Quaternion.LookRotation(dir) * Quaternion.Euler(0, 180 + 30, 0) * Vector3.forward;
        Vector3 left = Quaternion.LookRotation(dir) * Quaternion.Euler(0, 180 - 30, 0) * Vector3.forward;

        Gizmos.DrawRay(from + dir.normalized * (dir.magnitude - arrowSize * 0.8f), right * arrowSize);
        Gizmos.DrawRay(from + dir.normalized * (dir.magnitude - arrowSize * 0.8f), left * arrowSize);
    }

    private bool IsNodeAvailable(MapRoomNode node)
    {
        if (node.Parents == null) return false;
        foreach (var p in node.Parents)
            if (p.Taken) return true;
        return false;
    }

    [ContextMenu("打印地图原生结构（真实生成数据）")]
    public void PrintMapRawStructure()
    {
        if (_currentMap == null || _currentMap.Count == 0)
        {
            Debug.LogWarning("请先生成地图！");
            return;
        }

        Debug.Log("=====================================");
        Debug.Log($"📊 地图原生结构 - 总层数：{_currentMap.Count}");
        Debug.Log("=====================================");

        for (int y = 0; y < _currentMap.Count; y++)
        {
            var row = _currentMap[y];
            if (row == null || row.Count == 0)
            {
                Debug.Log($"第 {y} 层：空");
                continue;
            }

            Debug.Log($"➡️ 第 {y} 层 节点数量：{row.Count(n => n != null)}");

            foreach (var node in row)
            {
                if (node == null) continue;

                string parentInfo = node.Parents != null && node.Parents.Count > 0
                    ? string.Join(",", node.Parents.Select(p => $"({p.X},{p.Y})"))
                    : "无父节点(起点)";

                string edgeInfo = node.Edges != null && node.Edges.Count > 0
                    ? string.Join(" | ", node.Edges.Select(e => $"→({e.DstX},{e.DstY})"))
                    : "无出口(终点)";

                Debug.Log($"  节点 ({node.X},{node.Y}) | 父节点：[{parentInfo}] | 出口：[{edgeInfo}]");
            }
        }

        Debug.Log("=====================================");
        Debug.Log("✅ 地图结构打印完成！");
    }

    private MapRoomNode GetNode(int x, int y, List<List<MapRoomNode>> map)
    {
        if (y < 0 || y >= map.Count) return null;
        var row = map[y];
        if (x < 0 || x >= row.Count) return null;
        return row[x];
    }
}