using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace CardCrawlGame.Map
{
    public struct MapEdge : IComparable<MapEdge>, IEquatable<MapEdge>
    {
        public int SrcX, SrcY;
        public int DstX, DstY;

        public MapEdge(int srcX, int srcY, int dstX, int dstY)
        {
            SrcX = srcX;
            SrcY = srcY;
            DstX = dstX;
            DstY = dstY;
        }

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

    public class MapRoomNode
    {
        public int X, Y;
        public AbstractRoom Room;
        public List<MapEdge> Edges = new List<MapEdge>();
        public List<MapRoomNode> Parents = new List<MapRoomNode>();
        public bool Taken;

        public MapRoomNode(int x, int y)
        {
            X = x;
            Y = y;
        }

        public bool HasEdges() => Edges.Count > 0;

        public void AddEdge(MapEdge e)
        {
            if (!Edges.Contains(e)) Edges.Add(e);
        }

        public void AddParent(MapRoomNode p)
        {
            Parents.Add(p);
        }
    }

    public class MapGenerator
    {
        public MapRoomNode[,] Generate(int height, int width, int pathDensity, System.Random rng)
        {
            var map = CreateNodes(height, width);
            map = CreatePaths(map, pathDensity, rng);
           // map = FilterRedundantEdges(map);
            return map;
        }

        private MapRoomNode[,] CreateNodes(int height, int width)
        {
            return new MapRoomNode[height, width];
        }

        private MapRoomNode[,] CreatePaths(MapRoomNode[,] map, int pathDensity, System.Random rng)
        {
            int cols = map.GetLength(1);
            int firstStartingNode = -1;

            for (int i = 0; i < pathDensity; i++)
            {
                int startingNode = RandRange(rng, 0, cols - 1);
                if (i == 0) firstStartingNode = startingNode;

                while (startingNode == firstStartingNode && i == 1)
                    startingNode = RandRange(rng, 0, cols - 1);

                var startEdge = new MapEdge(startingNode, -1, startingNode, 0);
                _CreatePaths(map, startEdge, rng);
            }

            return map;
        }

        private MapRoomNode[,] _CreatePaths(MapRoomNode[,] nodes, MapEdge edge, System.Random rng)
        {
            int rows = nodes.GetLength(0);
            int cols = nodes.GetLength(1);

            while (true)
            {
                int currX = edge.DstX;
                int currY = edge.DstY;
                int nextY = currY + 1;

                // --------------------------
                // 到达顶部，连接BOSS
                // --------------------------
                if (nextY >= rows)
                {
                    MapRoomNode currentNode = GetOrCreateNode(nodes, currX, currY);
                    var bossEdge = new MapEdge(currX, currY, 3, nextY + 1);
                    currentNode.AddEdge(bossEdge);
                    currentNode.Edges.Sort();
                    return nodes;
                }

                // --------------------------
                // 计算可移动方向
                // --------------------------
                int rowEnd = cols - 1;
                int min, max;
                if (currX == 0)
                {
                    min = 0;
                    max = 1;
                }
                else if (currX == rowEnd)
                {
                    min = -1;
                    max = 0;
                }
                else
                {
                    min = -1;
                    max = 1;
                }

                // --------------------------
                // 尝试获取下一个节点
                // --------------------------
                int newEdgeX = currX + RandRange(rng, min, max);
                int newEdgeY = nextY;
                MapRoomNode target = GetNode(newEdgeX, newEdgeY, nodes);

                // 重试一次
                if (target != null)
                {
                    newEdgeX = currX + RandRange(rng, min, max);
                    target = GetNode(newEdgeX, newEdgeY, nodes);
                }

                // --------------------------
                // 防环路调整
                // --------------------------
                int minAncestorGap = 3;
                if (target != null && target.Parents != null)
                {
                    foreach (var parent in target.Parents)
                    {
                        if (parent == null) continue;
                        MapRoomNode ancestor = GetCommonAncestor(parent, GetOrCreateNode(nodes, currX, currY),
                            minAncestorGap);
                        int? gap = newEdgeY - ancestor?.Y;
                        if (gap < minAncestorGap)
                        {
                            int i = 0;
                            while (target.X == newEdgeX || i++ < 2)
                            {
                                if (target.X > currX)
                                {
                                    newEdgeX = currX + RandRange(rng, -1, 0);
                                    if (newEdgeX < 0) newEdgeX = currX;
                                }
                                else if (target.X == currX)
                                {
                                    newEdgeX = currX + RandRange(rng, -1, 1);
                                    if (newEdgeX > rowEnd) newEdgeX = currX - 1;
                                    else if (newEdgeX < 0) newEdgeX = currX + 1;
                                }
                                else
                                {
                                    newEdgeX = currX + RandRange(rng, 0, 1);
                                    if (newEdgeX > rowEnd) newEdgeX = currX;
                                }
                            }
                        }
                    }
                }

                // --------------------------
                // 边界约束
                // --------------------------
                if (currX != 0)
                {
                    MapRoomNode leftNode = GetNode(currX - 1, currY, nodes);
                    if (leftNode != null && leftNode.HasEdges())
                    {
                        MapEdge maxEdge = GetMaxEdge(leftNode.Edges);
                        if (maxEdge.DstX > newEdgeX) newEdgeX = maxEdge.DstX;
                    }
                }

                if (currX < rowEnd)
                {
                    MapRoomNode rightNode = GetNode(currX + 1, currY, nodes);
                    if (rightNode != null && rightNode.HasEdges())
                    {
                        MapEdge minEdge = GetMinEdge(rightNode.Edges);
                        if (minEdge.DstX < newEdgeX) newEdgeX = minEdge.DstX;
                    }
                }

                // --------------------------
                // ✅ 路径确定可以走通，才创建节点！
                // --------------------------
                MapRoomNode currNode = GetOrCreateNode(nodes, currX, currY);
                MapRoomNode nextNode = GetOrCreateNode(nodes, newEdgeX, newEdgeY);

                // 添加边和父子关系
                MapEdge newEdge = new MapEdge(currX, currY, newEdgeX, newEdgeY);
                
                currNode.AddEdge(newEdge);
                currNode.Edges.Sort();
                nextNode.AddParent(currNode);

                // 继续下一步
                edge = newEdge;
            }
        }

        // ====================== 工具 ======================

        /// <summary>
        /// 安全获取，没有就创建（确保路径走通才调用）
        /// </summary>
        private MapRoomNode GetOrCreateNode(MapRoomNode[,] nodes, int x, int y)
        {
            if (x < 0 || y < 0) return null;
            if (y >= nodes.GetLength(0)) return null;
            if (x >= nodes.GetLength(1)) return null;

            nodes[y, x] ??= new MapRoomNode(x, y);

            return nodes[y, x];
        }



        private MapEdge GetMaxEdge(List<MapEdge> edges)
        {
            if (edges == null || edges.Count == 0) return default;
            edges.Sort();
            return edges.Last();
        }

        private MapEdge GetMinEdge(List<MapEdge> edges)
        {
            if (edges == null || edges.Count == 0) return default;
            edges.Sort();
            return edges.First();
        }

        private MapRoomNode GetNodeWithMaxX(List<MapRoomNode> nodes)
        {
            if (nodes == null || nodes.Count == 0) return null;
            var max = nodes[0];
            foreach (var n in nodes)
                if (n.X > max.X)
                    max = n;
            return max;
        }

        private MapRoomNode GetNodeWithMinX(List<MapRoomNode> nodes)
        {
            if (nodes == null || nodes.Count == 0) return null;
            var min = nodes[0];
            foreach (var n in nodes)
                if (n.X < min.X)
                    min = n;
            return min;
        }

        private MapRoomNode GetCommonAncestor(MapRoomNode a, MapRoomNode b, int maxDepth)
        {
            if (a == null || b == null) return null;
            if (a.Y != b.Y || a == b) return null;

            MapRoomNode left = a.X < b.X ? a : b;
            MapRoomNode right = a.X < b.X ? b : a;
            int currY = a.Y;

            while (currY >= 0 && currY >= a.Y - maxDepth)
            {
                if (left.Parents == null || right.Parents == null) return null;
                if (left.Parents.Count == 0 || right.Parents.Count == 0) return null;

                left = GetNodeWithMaxX(left.Parents);
                right = GetNodeWithMinX(right.Parents);

                if (left == right) return left;
                currY--;
            }

            return null;
        }

        private MapRoomNode GetNode(int x, int y, MapRoomNode[,] nodes)
        {
            if (x < 0 || y < 0) return null;
            if (y >= nodes.GetLength(0)) return null;
            if (x >= nodes.GetLength(1)) return null;
            return nodes[y, x];
        }

        private int RandRange(System.Random rng, int min, int max)
        {
            return rng.Next(max - min + 1) + min;
        }
    }

    public class AbstractRoom
    {
    }
}