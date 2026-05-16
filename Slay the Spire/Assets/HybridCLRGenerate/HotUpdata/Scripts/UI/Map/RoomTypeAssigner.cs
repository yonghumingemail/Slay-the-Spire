using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.EventSystems;
using Random = System.Random;

namespace CardCrawlGame.Map
{
    // ==============================
    // 房间类型（占位示例，需根据项目扩展）
    // ==============================
    
    /// <summary>
    /// 普通战斗房间
    /// </summary>
    public class MonsterRoom : AbstractRoom
    {
        protected override string roomSpriteName { get; set; } = "monster";
        protected override string roomSpriteOutlineName { get; set; } = "monsterOutline";
        public override void OnPointClicked(PointerEventData data)
        {
            
        }
    }

    /// <summary>
    /// 精英战斗房间（难度较高，通常出现在中后期）
    /// </summary>
    public class MonsterRoomElite : AbstractRoom
    {
        protected override string roomSpriteName { get; set; } = "elite";
        protected override string roomSpriteOutlineName { get; set; } = "eliteOutline";
        public override void OnPointClicked(PointerEventData data)
        {
            
        }
    }

    /// <summary>
    /// BOSS 房间（每幕最终战斗）
    /// </summary>
    public class MonsterRoomBoss : AbstractRoom
    {
        protected override string roomSpriteName { get; set; }
        protected override string roomSpriteOutlineName { get; set; }
        public override void OnPointClicked(PointerEventData data)
        {
            
        }
    }

    /// <summary>
    /// 事件房间（触发随机事件）
    /// </summary>
    public class EventRoom : AbstractRoom
    {
        protected override string roomSpriteName { get; set; } = "event";
        protected override string roomSpriteOutlineName { get; set; } = "eventOutline";
        public override void OnPointClicked(PointerEventData data)
        {
            
        }
    }

    /// <summary>
    /// 休息房间（火堆，可回血、升级卡牌等）
    /// </summary>
    public class RestRoom : AbstractRoom
    {
        protected override string roomSpriteName { get; set; } = "rest";
        protected override string roomSpriteOutlineName { get; set; } = "restOutline";
        public override void OnPointClicked(PointerEventData data)
        {
            
        }
    }

    /// <summary>
    /// 商店房间（可购买卡牌、药水、遗物等）
    /// </summary>
    public class ShopRoom : AbstractRoom
    {
        protected override string roomSpriteName { get; set; } = "shop";
        protected override string roomSpriteOutlineName { get; set; } = "shopOutline";
        public override void OnPointClicked(PointerEventData data)
        {
            
        }
    }

    /// <summary>
    /// 宝箱房间（获得随机宝藏）
    /// </summary>
    public class TreasureRoom : AbstractRoom
    {
        protected override string roomSpriteName { get; set; } = "chest";
        protected override string roomSpriteOutlineName { get; set; } = "chestOutline";
        public override void OnPointClicked(PointerEventData data)
        {
            
        }
    }

    // ==============================
    // 房间类型分配器
    // ==============================
    
    /// <summary>
    /// 房间类型分配器
    /// 负责将给定的房间类型列表（如商店、休息、精英等）随机但合理地分配到地图的有效节点上。
    /// 分配时会遵守以下规则：
    /// 1. 避免同一房间类型出现在相邻节点（兄弟姐妹节点相同类型）。
    /// 2. 避免某些房间类型的父节点是同一类型（例如休息房不应有父节点也是休息房）。
    /// 3. 行限制：前5行不能出现休息房和精英房；第13行之后不能出现休息房。
    /// 4. 首行节点无限制（由调用方预先固定）。
    /// 5. 最终未分配的节点会被强制设置为普通战斗房间。
    /// </summary>
    public class RoomTypeAssigner
    {
        /// <summary>
        /// 主入口：将房间列表随机分配到地图节点上。
        /// </summary>
        /// <param name="map">二维地图节点数组 [行, 列]</param>
        /// <param name="roomList">可用房间列表（会被打乱并从中移除已分配的）</param>
        /// <param name="rng">随机数生成器</param>
        public void DistributeRoomsAcrossMap(MapRoomNode[,] map, List<AbstractRoom> roomList, Random rng)
        {
            int height = map.GetLength(0);
            int width = map.GetLength(1);

            // 统计需要分配房间的节点数量（有连接且当前未分配的房间）
            int nodeCount = GetConnectedNonAssignedNodeCount(map);

            // 如果房间数量不足，用普通战斗房间补足（保证每个节点都有房间）
            while (roomList.Count < nodeCount)
                roomList.Add(new MonsterRoom());

            // 如果房间数量过多，则警告（多余的房间不会被使用）
            if (roomList.Count > nodeCount)
                Debug.Log("WARNING: roomList is larger than available nodes. Some rooms won't be used.");

            // 随机打乱房间顺序，增加分配的不确定性
            Shuffle(roomList, rng);

            // 核心分配：将打乱后的房间依次分配到节点上（会遵守规则）
            AssignRoomsToNodes(map, roomList);

            // 最终检查：由于某些节点可能因为规则匹配不到合适的房间而未被分配，
            // 这里将所有未分配的有效节点强制设为普通战斗房间
            LastMinuteNodeChecker(map);

            // 调试日志：打印剩余未使用的房间（正常情况应该为空或很少）
            Debug.Log("#### Unassigned Rooms:");
            foreach (var r in roomList)
                Debug.Log(r.GetType().Name);
        }

        // ------------------------------------------------------
        // 内部实现
        // ------------------------------------------------------

        /// <summary>
        /// 获取地图上所有需要分配房间的节点数量
        /// 条件：节点不为空、有连接边、且当前尚未分配房间
        /// </summary>
        private int GetConnectedNonAssignedNodeCount(MapRoomNode[,] map)
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

        /// <summary>
        /// 获取当前节点的“兄弟姐妹”节点集合
        /// 兄弟姐妹定义为：所有父节点连接的其他子节点（不包括当前节点自身）
        /// 用于规则检查：不能与兄弟姐妹房间类型相同
        /// </summary>
        /// <param name="map">完整地图</param>
        /// <param name="parents">当前节点的父节点列表</param>
        /// <param name="self">当前节点</param>
        /// <returns>兄弟姐妹节点列表</returns>
        private List<MapRoomNode> GetSiblings(MapRoomNode[,] map, List<MapRoomNode> parents, MapRoomNode self)
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

        /// <summary>
        /// 规则：不允许与兄弟姐妹节点房间类型相同
        /// 适用房间类型：RestRoom, MonsterRoom, EventRoom, MonsterRoomElite, ShopRoom
        /// </summary>
        /// <param name="siblings">兄弟姐妹节点列表</param>
        /// <param name="roomToBeSet">待设置的房间类型</param>
        /// <returns>如果存在相同类型的兄弟姐妹，返回 true（表示违规）</returns>
        private bool RuleSiblingMatches(List<MapRoomNode> siblings, AbstractRoom roomToBeSet)
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

        /// <summary>
        /// 规则：不允许父节点房间类型与当前待设置房间类型相同
        /// 适用房间类型：RestRoom, TreasureRoom, ShopRoom, MonsterRoomElite
        /// </summary>
        /// <param name="parents">父节点列表</param>
        /// <param name="roomToBeSet">待设置的房间类型</param>
        /// <returns>如果存在相同类型的父节点，返回 true（表示违规）</returns>
        private bool RuleParentMatches(List<MapRoomNode> parents, AbstractRoom roomToBeSet)
        {
            var applicableTypes = new HashSet<Type>
            {
                typeof(RestRoom), typeof(TreasureRoom), typeof(ShopRoom), typeof(MonsterRoomElite)
            };

            if (!applicableTypes.Contains(roomToBeSet.GetType()))
                return false;

            return parents.Any(p => p.Room != null && p.Room.GetType() == roomToBeSet.GetType());
        }

        /// <summary>
        /// 规则：基于节点所在行数的限制
        /// - 前5行（Y <= 4）不能出现休息房和精英房
        /// - 第13行以后（Y >= 13）不能出现休息房
        /// </summary>
        /// <param name="node">节点</param>
        /// <param name="roomToBeSet">待设置的房间类型</param>
        /// <returns>如果允许在该行设置该类型，返回 true</returns>
        private bool RuleAssignableToRow(MapRoomNode node, AbstractRoom roomToBeSet)
        {
            // 前5行不能出现 休息房 和 精英战斗
            if (node.Y <= 4 && (roomToBeSet is RestRoom || roomToBeSet is MonsterRoomElite))
                return false;

            // 第13行以后不能出现 休息房
            if (node.Y >= 13 && roomToBeSet is RestRoom)
                return false;

            return true;
        }

        /// <summary>
        /// 根据规则从房间列表中选出下一个可用的房间类型
        /// 遍历 roomList（已随机打乱），找到第一个满足所有规则的房间，
        /// 将其从列表中移除并返回；如果找不到合适的，返回 null。
        /// </summary>
        /// <param name="map">完整地图</param>
        /// <param name="node">当前待分配节点</param>
        /// <param name="roomList">剩余可用房间列表（会被修改）</param>
        /// <returns>选定的房间对象，或 null</returns>
        private AbstractRoom GetNextRoomTypeAccordingToRules(
            MapRoomNode[,] map, MapRoomNode node, List<AbstractRoom> roomList)
        {
            var parents = node.Parents;
            var siblings = GetSiblings(map, parents, node);

            AbstractRoom value = null;
            foreach (var room in roomList) 
            {
                // 首先检查行限制
                if (!RuleAssignableToRow(node, room))
                    continue;

                // 第一行节点无限制，直接返回（但这里原逻辑保留，实际第一行由调用方预先固定）
                if (node.Y == 0)
                {
                    value = room;
                    break;
                }

                // 必须同时避免父节点类型相同 和 兄弟姐妹类型相同
                if (!RuleParentMatches(parents, room) && !RuleSiblingMatches(siblings, room))
                {
                    value = room;
                    break;
                }
            }

            // 从列表中移除选中的房间（避免重复分配）
            roomList.Remove(value);
            return value;
        }

        /// <summary>
        /// 遍历所有有效节点，按顺序分配房间类型
        /// </summary>
        private void AssignRoomsToNodes(MapRoomNode[,] map, List<AbstractRoom> roomList)
        {
            int height = map.GetLength(0);
            int width = map.GetLength(1);

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

        /// <summary>
        /// 最终检查：将所有有连接但未被分配房间的节点强制设为普通战斗房间
        /// 这通常是因为房间列表不足，或规则无法匹配任何房间（如行限制过于严格）
        /// </summary>
        private void LastMinuteNodeChecker(MapRoomNode[,] map)
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

        /// <summary>
        /// Fisher-Yates 洗牌算法，随机打乱列表顺序
        /// </summary>
        private void Shuffle<T>(List<T> list, Random rng)
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