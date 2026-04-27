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
        // 主入口
        public MapRoomNode[,] Generate(int height, int width, int pathDensity, System.Random rng)
        {
            if (height < 2 || width < 1)
                throw new ArgumentException("Map dimensions too small");

            MapRoomNode[,] map = CreateNodes(height, width);
            map = CreatePaths(map, width, pathDensity, rng);
            return map;
        }

        // 只是分配数组，实际节点在 GetOrCreateNode 中按需创建
        private MapRoomNode[,] CreateNodes(int height, int width)
        {
            return new MapRoomNode[height, width];
        }

        private MapRoomNode[,] CreatePaths(MapRoomNode[,] map, int width, int pathDensity, System.Random rng)
        {
            int firstStartingNode = -1;

            for (int i = 0; i < pathDensity; i++)
            {
                int startX = RandRange(rng, 0, width - 1);
                if (i == 0) firstStartingNode = startX;
                else if (i == 1 && startX == firstStartingNode)
                {
                    // 保证第二条路径起点不同
                    do
                    {
                        startX = RandRange(rng, 0, width - 1);
                    } while (startX == firstStartingNode);
                }

                // 起始边：从 (startX, -1) 到 (startX, 0)
                var startEdge = new MapEdge(startX, -1, startX, 0);
                BuildPath(map, startEdge, rng);
            }

            return map;
        }

        private void BuildPath(MapRoomNode[,] nodes, MapEdge startEdge, System.Random rng)
        {
            int rows = nodes.GetLength(0);
            int cols = nodes.GetLength(1);

            // 当前边即“即将延伸的位置”
            MapEdge edge = startEdge;

            while (true)
            {
                int currX = edge.DstX;
                int currY = edge.DstY;
                int nextY = currY + 1;

                // 到达顶部：直接在当前节点生成 Boss 边（虚拟行，Y = rows）
                if (nextY >= rows)
                {
                    MapRoomNode node = GetOrCreateNode(nodes, currX, currY);
                    var bossEdge = new MapEdge(currX, currY, cols/2, rows); // Boss 行
                    node.AddEdge(bossEdge);
                    return; // 路径结束
                }

                // 确定当前节点可能移动的方向
                int minDelta = currX == 0 ? 0 : -1;
                int maxDelta = currX == cols - 1 ? 0 : 1;
                
                // 选择下一个 X，并确保不越界、不产生过近环路
                int nextX = ChooseNextX(currX, currY, nextY, minDelta, maxDelta, nodes, rng);
                nextX = Math.Clamp(nextX, 0, cols - 1);

                // 创建当前节点和目标节点
                MapRoomNode currNode = GetOrCreateNode(nodes, currX, currY);
                MapRoomNode nextNode = GetOrCreateNode(nodes, nextX, nextY);

                // 添加边和父子关系
                MapEdge newEdge = new MapEdge(currX, currY, nextX, nextY);
                currNode.AddEdge(newEdge);
                nextNode.AddParent(currNode);

                edge = newEdge; // 继续向前延伸
            }
        }

        /// <summary>
        /// 选择一个合法的下一列，避开已有的会导致短环路的节点
        /// </summary>
        private int ChooseNextX(int currX, int currY, int nextY, 
            int minDelta, int maxDelta,
            MapRoomNode[,] nodes, System.Random rng)
        {
            int cols = nodes.GetLength(1);
            int bestX = currX + RandRange(rng, minDelta, maxDelta);
            bestX = Math.Clamp(bestX, 0, cols - 1);

            // 寻找最合适的节点（优先空节点 + 无小环路）
            for (int attempt = 0; attempt < 3; attempt++)
            {
                MapRoomNode existing = GetNode(bestX, nextY, nodes);
                bool isEmpty = (existing == null);

                // 检查是否会在 3 层内形成环路（只对非空节点有意义）
                bool wouldLoop = false;
                if (!isEmpty)
                {
                    MapRoomNode currNode = GetOrCreateNode(nodes, currX, currY);
                    wouldLoop = HasNearAncestor(existing, currNode, 3);
                }
                
                // 理想情况：空节点 且 不产生环路
                if (isEmpty && !wouldLoop)
                    break;

                // 如果当前尝试不是完美，则重新随机一次
                bestX = currX + RandRange(rng, minDelta, maxDelta);
                bestX = Math.Clamp(bestX, 0, cols - 1);
            }

            // 边界对齐（保持视觉干净）
            bestX = AlignWithNeighbors(currX, currY, bestX, nodes);
            return bestX;
        }

        /// <summary>
        /// 保证当前列的出边 X 不小于左列的出边 X，不大于右列的出边 X，
        /// 以此避免视觉上的边交叉。
        /// </summary>
        private int AlignWithNeighbors(int currX, int currY, int nextX, MapRoomNode[,] nodes)
        {
            int cols = nodes.GetLength(1);

            // 左列约束
            if (currX > 0)
            {
                MapRoomNode leftNode = GetNode(currX - 1, currY, nodes);
                if (leftNode != null && leftNode.Edges.Count > 0)
                {
                    // 左列所有出边的最大 DstX 不应小于我们的 DstX
                    int leftMaxDstX = leftNode.Edges.Max(e => e.DstX);
                    if (leftMaxDstX > nextX)
                        nextX = leftMaxDstX;
                }
            }

            // 右列约束
            if (currX < cols - 1)
            {
                MapRoomNode rightNode = GetNode(currX + 1, currY, nodes);
                if (rightNode != null && rightNode.Edges.Count > 0)
                {
                    int rightMinDstX = rightNode.Edges.Min(e => e.DstX);
                    if (rightMinDstX < nextX)
                        nextX = rightMinDstX;
                }
            }

            return Math.Clamp(nextX, 0, cols - 1);
        }

        /// <summary>
        /// 检查 target 是否在 node 的 maxDepth 层祖先之内（防止短短几层内出现环路）
        /// </summary>
        private bool HasNearAncestor(MapRoomNode node, MapRoomNode target, int maxDepth)
        {
            if (node == target) return true;

            Queue<(MapRoomNode current, int depth)> queue = new Queue<(MapRoomNode, int)>();
            HashSet<MapRoomNode> visited = new HashSet<MapRoomNode> { node };

            queue.Enqueue((node, 0));
            while (queue.Count > 0)
            {
                var (curr, depth) = queue.Dequeue();
                if (depth >= maxDepth) continue;

                foreach (var parent in curr.Parents)
                {
                    if (parent == null) continue;
                    if (parent == target) return true;
                    if (visited.Add(parent))
                        queue.Enqueue((parent, depth + 1));
                }
            }
            return false;
        }

        // ====================== 基础工具方法 ======================

        /// <summary>
        /// 安全获取节点，不存在则创建
        /// </summary>
        private MapRoomNode GetOrCreateNode(MapRoomNode[,] nodes, int x, int y)
        {
            if (x < 0 || y < 0) return null;
            if (y >= nodes.GetLength(0)) return null;
            if (x >= nodes.GetLength(1)) return null;

            nodes[y, x] ??= new MapRoomNode(x, y);
            return nodes[y, x];
        }

        /// <summary>
        /// 只获取，不创建
        /// </summary>
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