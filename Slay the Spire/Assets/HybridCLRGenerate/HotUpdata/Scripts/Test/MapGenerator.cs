using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;


namespace CardCrawlGame.Map
{
    /// <summary>
    /// 地图连线：连接两个节点的路径
    /// </summary>
    public struct MapEdge : IComparable<MapEdge>, IEquatable<MapEdge>
    {
        public int SrcX, SrcY; // 起点坐标
        public int DstX, DstY; // 终点坐标


        /// <summary>
        /// 基础构造：仅记录坐标
        /// </summary>
        public MapEdge(int srcX, int srcY, int dstX, int dstY)
        {
            SrcX = srcX;
            SrcY = srcY;
            DstX = dstX;
            DstY = dstY;
        }

        /// <summary>
        /// 排序规则：先按X，再按Y
        /// </summary>
        public int CompareTo(MapEdge other)
        {
            return DstX != other.DstX ? DstX.CompareTo(other.DstX) : DstY.CompareTo(other.DstY);
        }

        public bool Equals(MapEdge other)
        {
            return SrcX == other.SrcX && SrcY == other.SrcY && DstX == other.DstX && DstY == other.DstY;
        }

        public override int GetHashCode()
        {
            return HashCode.Combine(SrcX, SrcY, DstX, DstY);
        }
    }


    /// <summary>
    /// 地图房间节点：可点击、带类型、带连线的核心单元
    /// </summary>
    public class MapRoomNode
    {
        public int X, Y; // 网格坐标
        public AbstractRoom Room; // 关联的房间数据
        public List<MapEdge> Edges = new List<MapEdge>(); // 输出连线
        public List<MapRoomNode> Parents = new List<MapRoomNode>(); // 父节点
        public bool Taken; // 是否已被探索

        public MapRoomNode(int x, int y)
        {
            X = x;
            Y = y;
        }

        // 是否拥有出边
        public bool HasEdges() => Edges.Count > 0;

        // 添加连线
        public void AddEdge(MapEdge e)
        {
            if (!Edges.Contains(e)) Edges.Add(e);
        }

        // 添加父节点
        public void AddParent(MapRoomNode p)
        {
            Parents.Add(p);
        }
    }


    /// <summary>
    /// 地图生成器：杀戮尖塔式随机地图路径生成（核心算法）
    /// </summary>
    public class MapGenerator
    {
        /// <summary>
        /// 对外入口：生成完整地图
        /// </summary>
        /// <param name="height">地图行数</param>
        /// <param name="width">每行节点数</param>
        /// <param name="pathDensity">路径数量</param>
        /// <param name="rng">随机数</param>
        /// <returns>节点网格</returns>
        public List<List<MapRoomNode>> Generate(int height, int width, int pathDensity, System.Random rng)
        {
            var map = CreateNodes(height, width);
            map = CreatePaths(map, pathDensity, rng);
            map = FilterRedundantEdges(map);
            return map;
        }

        /// <summary>
        /// 创建空节点网格
        /// </summary>
        private List<List<MapRoomNode>> CreateNodes(int h, int w)
        {
            var map = new List<List<MapRoomNode>>();
            for (int y = 0; y < h; y++)
            {
                var row = new List<MapRoomNode>();
                for (int x = 0; x < w; x++)
                {
                    row.Add(new MapRoomNode(x, y));
                }

                map.Add(row);
            }

            return map;
        }

        /// <summary>
        /// 创建多条主路径
        /// </summary>
        private List<List<MapRoomNode>> CreatePaths(List<List<MapRoomNode>> map, int pathDensity, System.Random rng)
        {
            int firstRow = 0;
            int rowSize = map[firstRow].Count - 1;
            int currentNode = -1;
            int lastNode = -1;

            // 生成N条独立路径
            for (int i = 0; i < pathDensity; i++)
            {
                currentNode = RandRange(rng, 0, rowSize);

                //上次生成的起点不能和这次生成的起点相同
                while (currentNode == lastNode)
                    currentNode = RandRange(rng, 0, rowSize);

                // 从起点开始生成路径
                var startEdge = new MapEdge(currentNode, 0, currentNode, 0);
                _CreatePaths(map, startEdge, rng);
                lastNode = currentNode;
            }

            // int firstRow = 0;
            // int rowSize = map[firstRow].Count - 1;
            // int firstStartingNode = -1;
            //
            // // 生成N条独立路径
            // for (int i = 0; i < pathDensity; i++)
            // {
            //     int startingNode = RandRange(rng, 0, rowSize);
            //     if (i == 0)
            //         firstStartingNode = startingNode;
            //
            //     // 第二条路径不能与第一条同一起点
            //     while (startingNode == firstStartingNode && i == 1)
            //         startingNode = RandRange(rng, 0, rowSize);
            //
            //     // 从起点开始生成路径
            //     var startEdge = new MapEdge(startingNode, -1, startingNode, 0);
            //     _CreatePaths(map, startEdge, rng);
            // }


            return map;
        }

        /// <summary>
        /// 递归生成单条路径（核心）
        /// 规则：向下一行延伸，X只能-1/0/+1，防环路、防交叉、防重叠
        /// </summary>
        private void _CreatePaths(List<List<MapRoomNode>> nodes, MapEdge edge, System.Random rng)
        {
            List<MapEdge> mapEdges = new List<MapEdge>();
            for (int j = 0; j < 3; j++)
            {Debug.Log(1111);
                while (true)
                {
                    MapRoomNode currentNode = GetNode(edge.DstX, edge.DstY, nodes);
                    int nextY = edge.DstY + 1;

                    // 到达顶层，连接BOSS节点
                    if (nextY >= nodes.Count)
                    {
                        var bossEdge = new MapEdge(edge.DstX, edge.DstY, 3, nextY + 1);

                        //  currentNode.AddEdge(bossEdge);
                        mapEdges.Add(bossEdge);
                        currentNode.Edges.Sort();
                        foreach (var VARIABLE in mapEdges)
                        {
                            GetNode(VARIABLE.SrcX, VARIABLE.SrcY, nodes).AddEdge(VARIABLE);
                        }

                        return;
                    }

                    // 限定下一步X范围：防止走出边界
                    int rowWidth = nodes[edge.DstY].Count;
                    int rowEnd = rowWidth - 1;
                    int min, max;

                    if (edge.DstX == 0)
                    {
                        min = 0;
                        max = 1;
                    }
                    else if (edge.DstX == rowEnd)
                    {
                        min = -1;
                        max = 0;
                    }
                    else
                    {
                        min = -1;
                        max = 1;
                    }

                    // 随机选择下一个X
                    int newEdgeX = edge.DstX + RandRange(rng, min, max);
                    int newEdgeY = nextY;

                    MapRoomNode target = GetNode(newEdgeX, newEdgeY, nodes);
                    // if (target.HasEdges())
                    // {
                    //     newEdgeX = edge.DstX + RandRange(rng, min, max);
                    //     target = GetNode(newEdgeX, newEdgeY, nodes);
                    // }

                    // 防环路核心：检测公共祖先，避免路径过早汇合
                    int minAncestorGap = 3;
                    var parents = target.Parents;

                    if (parents != null && parents.Count > 0)
                    {
                        foreach (var parent in parents)
                        {
                            if (parent == currentNode) continue;

                            MapRoomNode ancestor = GetCommonAncestor(parent, currentNode, minAncestorGap);
                            if (ancestor == null) continue;
                            int gap = newEdgeY - ancestor.Y;
                            if (gap >= minAncestorGap) continue;
                            // 调整X，避免过近形成环路

                            if (target.X > currentNode.X)
                            {
                                newEdgeX = edge.DstX + RandRange(rng, -1, 0);
                                if (newEdgeX < 0) newEdgeX = edge.DstX;
                            }
                            else if (target.X == currentNode.X)
                            {
                                newEdgeX = edge.DstX + RandRange(rng, -1, 1);
                                if (newEdgeX > rowEnd)
                                    newEdgeX = edge.DstX - 1;
                                else if (newEdgeX < 0) newEdgeX = edge.DstX + 1;
                            }
                            else
                            {
                                newEdgeX = edge.DstX + RandRange(rng, 0, 1);
                                if (newEdgeX > rowEnd) newEdgeX = edge.DstX;
                            }

                            int i = 0;
                            int maxIndex = 1;
                            int targetX = ConstraintEdge(edge, newEdgeX, nodes);

                            if (edge.DstX != 0 && edge.DstX <= rowEnd)
                            {
                                i = -1;
                            }
                            else if (edge.DstX == rowEnd)
                            {
                                i = -1;
                                maxIndex = 0;
                            }

                            while (targetX == newEdgeX && i <= maxIndex)
                            {
                                targetX = ConstraintEdge(edge, edge.DstX + i, nodes);
                                i++;
                            }

                            if (targetX != newEdgeX)
                            {
                                newEdgeX = targetX;
                                continue;
                            }

                            mapEdges = null;
                            break;
                        }

                        if (mapEdges == null)
                        {
                            break;
                        }
                    }

                    // 左边界约束：防止路径交叉覆盖
                    if (edge.DstX != 0)
                    {
                        MapRoomNode leftNode = nodes[edge.DstY][edge.DstX - 1];
                        if (leftNode.HasEdges())
                        {
                            MapEdge maxEdge = GetMaxEdge(leftNode.Edges);
                            if (maxEdge.DstX > newEdgeX)
                                newEdgeX = maxEdge.DstX;
                        }
                    }

                    // 右边界约束
                    if (edge.DstX < rowEnd)
                    {
                        MapRoomNode rightNode = nodes[edge.DstY][edge.DstX + 1];
                        if (rightNode.HasEdges())
                        {
                            MapEdge minEdge = GetMinEdge(rightNode.Edges);
                            if (minEdge.DstX < newEdgeX)
                                newEdgeX = minEdge.DstX;
                        }
                    }

                    //   Debug.Log($"newEdgeX{newEdgeX}, newEdgeY{newEdgeY},target{target}");
                    target = GetNode(newEdgeX, newEdgeY, nodes);

                    // 创建最终连线
                    MapEdge newEdge = new MapEdge(edge.DstX, edge.DstY, newEdgeX, newEdgeY);

                    //  currentNode.AddEdge(newEdge);
                    mapEdges.Add(newEdge);
                    currentNode.Edges.Sort();
                    target.AddParent(currentNode);

                    // 递归继续生成
                    edge = newEdge;
                }
            }
        }

        private int ConstraintEdge(MapEdge edge, int newX, List<List<MapRoomNode>> map)
        {
            int rowEnd = map[edge.DstY].Count - 1;
            int newEdgeX = newX;
            // 左边界约束：防止路径交叉覆盖
            if (edge.DstX != 0)
            {
                MapRoomNode leftNode = map[edge.DstY][edge.DstX - 1];
                if (leftNode.HasEdges())
                {
                    MapEdge maxEdge = GetMaxEdge(leftNode.Edges);
                    if (maxEdge.DstX > newEdgeX)
                        newEdgeX = maxEdge.DstX;
                }
            }

            // 右边界约束
            if (edge.DstX < rowEnd)
            {
                MapRoomNode rightNode = map[edge.DstY][edge.DstX + 1];
                if (rightNode.HasEdges())
                {
                    MapEdge minEdge = GetMinEdge(rightNode.Edges);
                    if (minEdge.DstX < newEdgeX)
                        newEdgeX = minEdge.DstX;
                }
            }

            Debug.Log(newX + "  " + newEdgeX);
            return newX;
        }


        /// <summary>
        /// 过滤冗余边：删除重复连线
        /// </summary>
        private List<List<MapRoomNode>> FilterRedundantEdges(List<List<MapRoomNode>> map)
        {
            var existing = new List<MapEdge>();
            var deleteList = new List<MapEdge>();

            foreach (var node in map[0])
            {
                if (!node.HasEdges()) continue;

                foreach (var edge in node.Edges)
                {
                    foreach (var prev in existing)
                    {
                        if (edge.DstX == prev.DstX && edge.DstY == prev.DstY)
                            deleteList.Add(edge);
                    }

                    existing.Add(edge);
                }

                foreach (var e in deleteList)
                    node.Edges.Remove(e);

                deleteList.Clear();
            }

            return map;
        }

        // ====================== 工具方法 ======================

        /// <summary>
        /// 获取X最大的边
        /// </summary>
        private MapEdge GetMaxEdge(List<MapEdge> edges)
        {
            if (edges == null || edges.Count == 0) return default;
            int maxIndex = 0;
            for (int i = 1; i < edges.Count; i++)
            {
                if (edges[i].DstX > edges[i - 1].DstX)
                {
                    maxIndex = i;
                }
            }

            return edges[maxIndex];
        }

        /// <summary>
        /// 获取X最小的边
        /// </summary>
        private MapEdge GetMinEdge(List<MapEdge> edges)
        {
            if (edges == null || edges.Count == 0) return default;
            edges.Sort();
            return edges.First();
        }

        /// <summary>
        /// 获取X最大的节点
        /// </summary>
        private MapRoomNode GetNodeWithMaxX(List<MapRoomNode> nodes)
        {
            if (nodes == null || nodes.Count == 0) return null;
            var max = nodes[0];
            foreach (var n in nodes)
                if (n.X > max.X)
                    max = n;
            return max;
        }

        /// <summary>
        /// 获取X最小的节点
        /// </summary>
        private MapRoomNode GetNodeWithMinX(List<MapRoomNode> nodes)
        {
            if (nodes == null || nodes.Count == 0) return null;
            var min = nodes[0];
            foreach (var n in nodes)
                if (n.X < min.X)
                    min = n;
            return min;
        }

        /// <summary>
        /// 查找两个节点的公共祖先（防环路核心）
        /// </summary>
        private MapRoomNode GetCommonAncestor(MapRoomNode a, MapRoomNode b, int maxDepth)
        {
            if (a.Y != b.Y || a == b) return null;

            MapRoomNode left = a.X < b.X ? a : b;
            MapRoomNode right = a.X < b.X ? b : a;
            int currY = a.Y;


            //while (currY >= 0 && currY >= a.Y - maxDepth)
            while (currY >= 0 && maxDepth > 0)
            {
                if (left.Parents == null || right.Parents == null) return null;
                if (left.Parents.Count == 0 || right.Parents.Count == 0) return null;

                left = GetNodeWithMaxX(left.Parents);
                right = GetNodeWithMinX(right.Parents);

                if (left == right) return left;
                currY--;
                maxDepth--;
            }

            return null;
        }

        /// <summary>
        /// 安全获取节点（防越界）
        /// </summary>
        private MapRoomNode GetNode(int x, int y, List<List<MapRoomNode>> nodes)
        {
            if (y < 0 || y >= nodes.Count) return null;
            var row = nodes[y];
            if (x < 0 || x >= row.Count) return null;
            return row[x];
        }

        /// <summary>
        /// 闭区间随机 [min, max]
        /// </summary>
        private int RandRange(System.Random rng, int min, int max)
        {
            return rng.Next(max - min + 1) + min;
        }
    }


    public class AbstractRoom
    {
    }
}