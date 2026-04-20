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

    public List<List<MapRoomNode>> _currentMap = new();
    [Range(1, 7)] public int pathCount = 2; // 路径密度
    public int seed = 0;
    public Vector3 Offest;

    [ContextMenu("生成并显示地图")]
    public void GenerateAndVisualize()
    {
        _currentMap = MapGenerator.Generate(16, 7, pathCount, new System.Random(seed));
        Debug.Log($"地图生成成功，种子：{seed}，总层数：{_currentMap.Count}");
    }

    private void OnDrawGizmos()
    {
        if (_currentMap == null || _currentMap.Count == 0) return;
        DrawMapGizmos();
    }

    private void DrawMapGizmos()
    {
        for (int y = 0; y < _currentMap.Count; y++)
        {
            var row = _currentMap[y];
            if (row == null) continue;

            for (int x = 0; x < row.Count; x++)
            {
                var node = row[x];
                if (node == null) continue;

                // 世界坐标：从下往上生成
                Vector3 nodePos = new Vector3(
                    x * nodeSpacing.x,
                    y * nodeSpacing.y,
                    0
                )+Offest;

                // 绘制节点
                if (node.Taken)
                    Gizmos.color = visitedColor;
                else if (IsNodeAvailable(node))
                    Gizmos.color = availableColor;
                else
                    Gizmos.color = unvisitedColor;

                Gizmos.DrawSphere(nodePos, nodeSize.x * 0.4f);

                // 绘制标签
#if UNITY_EDITOR
                Handles.Label(nodePos + Vector3.up * 25, $"({x},{y})");
#endif

                // 绘制连线
                DrawNodeEdges(node, nodePos);
            }
        }
    }

    // 绘制当前节点的所有出口连线
    private void DrawNodeEdges(MapRoomNode node, Vector3 fromPos)
    {
        if (node.Edges == null || node.Edges.Count == 0) return;

        foreach (var edge in node.Edges)
        {
            int targetX = edge.DstX;
            int targetY = edge.DstY;

            // 获取目标节点
            MapRoomNode targetNode = GetNode(targetX, targetY, _currentMap);
            if (targetNode == null) continue;

            // 目标坐标
            Vector3 toPos = new Vector3(
                targetX * nodeSpacing.x,
                targetY * nodeSpacing.y,
                0
            )+Offest;

            // 连线颜色
            Gizmos.color = edge.Taken ? Color.cyan : Color.yellow;
            Gizmos.DrawLine(fromPos, toPos);

            // 箭头
            DrawArrow(fromPos, toPos);
        }
    }

    // 箭头绘制
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

    // 判断节点是否可到达（简单逻辑）
    private bool IsNodeAvailable(MapRoomNode node)
    {
        if (node.Parents == null) return false;
        foreach (var p in node.Parents)
        {
            if (p.Taken) return true;
        }

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

        // 遍历每一层
        for (int y = 0; y < _currentMap.Count; y++)
        {
            var row = _currentMap[y];
            if (row == null || row.Count == 0)
            {
                Debug.Log($"第 {y} 层：空");
                continue;
            }

            Debug.Log($"➡️ 第 {y} 层 节点数量：{row.Count(n => n != null)}");

            // 遍历该行所有节点
            foreach (var node in row)
            {
                if (node == null) continue;

                // 父节点信息
                string parentInfo = node.Parents != null && node.Parents.Count > 0
                    ? string.Join(",", node.Parents.Select(p => $"({p.X},{p.Y})"))
                    : "无父节点(起点)";

                // 边（出口）信息
                string edgeInfo = node.Edges != null && node.Edges.Count > 0
                    ? string.Join(" | ", node.Edges.Select(e => $"→({e.DstX},{e.DstY})"))
                    : "无出口(终点)";

                // 打印单个节点完整信息
                Debug.Log($"  节点 ({node.X},{node.Y}) | 父节点：[{parentInfo}] | 出口：[{edgeInfo}]");
            }
        }

        Debug.Log("=====================================");
        Debug.Log("✅ 地图结构打印完成！");
    }

    // 安全获取节点
    private MapRoomNode GetNode(int x, int y, List<List<MapRoomNode>> map)
    {
        if (y < 0 || y >= map.Count) return null;
        var row = map[y];
        if (x < 0 || x >= row.Count) return null;
        return row[x];
    }
}