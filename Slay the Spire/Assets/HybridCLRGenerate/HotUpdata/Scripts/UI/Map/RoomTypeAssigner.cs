using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Random = System.Random;

namespace CardCrawlGame.Map
{
    // ==============================
    // 房间类型（占位示例，需根据项目扩展）
    // ==============================
    public class MonsterRoom : AbstractRoom { }
    public class MonsterRoomElite : AbstractRoom { }
    public class MonsterRoomBoss : AbstractRoom { }
    public class EventRoom : AbstractRoom { }
    public class RestRoom : AbstractRoom { }
    public class ShopRoom : AbstractRoom { }
    public class TreasureRoom : AbstractRoom { }

    // ==============================
    // 房间类型分配器
    // ==============================
    public static class RoomTypeAssigner
    {
        /// <summary>
        /// 主入口：将房间列表随机分配到地图节点上。
        /// </summary>
        /// <param name="map">二维地图节点数组 [行, 列]</param>
        /// <param name="roomList">可用房间列表（会被打乱并从中移除已分配的）</param>
        /// <param name="rng">随机数生成器</param>
        public static void DistributeRoomsAcrossMap(MapRoomNode[,] map, List<AbstractRoom> roomList, Random rng)
        {
            int height = map.GetLength(0);
            int width = map.GetLength(1);

            int nodeCount = GetConnectedNonAssignedNodeCount(map);

            // 如果房间不够，用普通战斗房间补足
            while (roomList.Count < nodeCount)
                roomList.Add(new MonsterRoom());

            if (roomList.Count > nodeCount)
                Debug.Log("WARNING: roomList is larger than available nodes. Some rooms won't be used.");

            // 随机打乱房间顺序
            Shuffle(roomList, rng);

            // 分配房间
            AssignRoomsToNodes(map, roomList);

            // 最终检查：未分配且有连接的节点强制设为战斗房间
            LastMinuteNodeChecker(map);

            // 打印剩余未使用的房间（仅调试）
            Debug.Log("#### Unassigned Rooms:");
            foreach (var r in roomList)
                Debug.Log(r.GetType().Name);
        }
        
        // ------------------------------------------------------
        // 内部实现
        // ------------------------------------------------------

        private static int GetConnectedNonAssignedNodeCount(MapRoomNode[,] map)
        {
            int count = 0;
            for (int y = 0; y < map.GetLength(0); y++)
                for (int x = 0; x < map.GetLength(1); x++)
                {
                    var node = map[y, x];
                    if (node != null && node.HasEdges() && node.Room == null)
                        count++;
                }
            return count;
        }

        private static List<MapRoomNode> GetSiblings(MapRoomNode[,] map, List<MapRoomNode> parents, MapRoomNode self)
        {
            var siblings = new List<MapRoomNode>();
            foreach (var parent in parents)
            {
                foreach (var edge in parent.Edges)
                {
                    var sibling = map[edge.DstY, edge.DstX];
                    if (sibling != null && sibling != self)
                        siblings.Add(sibling);
                }
            }
            return siblings;
        }

        private static bool RuleSiblingMatches(List<MapRoomNode> siblings, AbstractRoom roomToBeSet)
        {
            // 这些房间类型不允许相邻出现
            var applicableTypes = new HashSet<Type>
            {
                typeof(RestRoom), typeof(MonsterRoom), typeof(EventRoom),
                typeof(MonsterRoomElite), typeof(ShopRoom)
            };

            if (!applicableTypes.Contains(roomToBeSet.GetType()))
                return false;

            return siblings.Any(s => s.Room != null && s.Room.GetType() == roomToBeSet.GetType());
        }

        private static bool RuleParentMatches(List<MapRoomNode> parents, AbstractRoom roomToBeSet)
        {
            var applicableTypes = new HashSet<Type>
            {
                typeof(RestRoom), typeof(TreasureRoom), typeof(ShopRoom), typeof(MonsterRoomElite)
            };

            if (!applicableTypes.Contains(roomToBeSet.GetType()))
                return false;

            return parents.Any(p => p.Room != null && p.Room.GetType() == roomToBeSet.GetType());
        }

        private static bool RuleAssignableToRow(MapRoomNode node, AbstractRoom roomToBeSet)
        {
            // 前5行不能出现 休息房 和 精英战斗
            if (node.Y <= 4 && (roomToBeSet is RestRoom || roomToBeSet is MonsterRoomElite))
                return false;

            // 第13行以后不能出现 休息房
            if (node.Y >= 13 && roomToBeSet is RestRoom)
                return false;

            return true;
        }

        private static AbstractRoom GetNextRoomTypeAccordingToRules(
            MapRoomNode[,] map, MapRoomNode node, List<AbstractRoom> roomList)
        {
            var parents = node.Parents;
            var siblings = GetSiblings(map, parents, node);

            foreach (var room in roomList.ToList()) // 用副本迭代，避免修改时异常
            {
                if (!RuleAssignableToRow(node, room))
                    continue;

                // 第一行节点无限制，直接返回（但这里原逻辑保留）
                if (node.Y == 0)
                {
                    roomList.Remove(room);
                    return room;
                }

                if (!RuleParentMatches(parents, room) && !RuleSiblingMatches(siblings, room))
                {
                    roomList.Remove(room);
                    return room;
                }
            }

            return null;
        }

        private static void AssignRoomsToNodes(MapRoomNode[,] map, List<AbstractRoom> roomList)
        {
            int height = map.GetLength(0);
            int width = map.GetLength(1);

            // 从上到下(Y递增)，从左到右(X递增)遍历
            for (int y = 0; y < height; y++)
            {
                for (int x = 0; x < width; x++)
                {
                    var node = map[y, x];
                    if (node == null || !node.HasEdges() || node.Room != null)
                        continue;

                    var room = GetNextRoomTypeAccordingToRules(map, node, roomList);
                    if (room != null)
                        node.Room = room;
                }
            }
        }

        private static void LastMinuteNodeChecker(MapRoomNode[,] map)
        {
            int height = map.GetLength(0);
            int width = map.GetLength(1);

            for (int y = 0; y < height; y++)
            {
                for (int x = 0; x < width; x++)
                {
                    var node = map[y, x];
                    if (node != null && node.HasEdges() && node.Room == null)
                    {
                        Debug.Log($"Node ({node.X},{node.Y}) was null. Changed to a MonsterRoom.");
                        node.Room = new MonsterRoom();
                    }
                }
            }
        }

        private static void Shuffle<T>(List<T> list, Random rng)
        {
            int n = list.Count;
            while (n > 1)
            {
                n--;
                int k = rng.Next(n + 1);
                (list[k], list[n]) = (list[n], list[k]);
            }
        }
    }
}