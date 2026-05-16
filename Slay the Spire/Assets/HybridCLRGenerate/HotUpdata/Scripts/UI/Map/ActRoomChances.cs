using System;
using System.Collections.Generic;
using UnityEngine;

namespace CardCrawlGame.Map
{
    /// <summary>
    /// 幕 (Act) 的房间概率配置
    /// 用于定义某一幕（如第一幕 Exordium、第二幕 TheCity）中各类房间的出现概率、
    /// 宝箱/遗物稀有度分布、卡片升级概率等。
    /// 可在 Unity Inspector 中直接调整数值。
    /// </summary>
    [Serializable]
    public class ActRoomChances
    {
        [Header("房间类型概率（基于剩余有效节点数的比例）")]
        [Range(0, 1)] public float shopRoomChance = 0.05f;      // 商店房间出现概率
        [Range(0, 1)] public float restRoomChance = 0.12f;     // 休息房间出现概率
        [Range(0, 1)] public float treasureRoomChance = 0.0f;  // 普通宝箱房间出现概率（注意：特殊行如第8行会单独处理）
        [Range(0, 1)] public float eventRoomChance = 0.22f;    // 事件房间出现概率
        [Range(0, 1)] public float eliteRoomChance = 0.08f;    // 精英怪物房间出现概率

        [Header("宝箱稀有度概率（百分比，总和应为100）")]
        public int smallChestChance = 50;   // 小型宝箱出现概率
        public int mediumChestChance = 33;  // 中型宝箱出现概率
        public int largeChestChance = 17;   // 大型宝箱出现概率

        [Header("遗物稀有度概率（百分比，总和应为100）")]
        public int commonRelicChance = 50;      // 普通遗物出现概率
        public int uncommonRelicChance = 33;    // 罕见遗物出现概率
        public int rareRelicChance = 17;        // 稀有遗物出现概率

        [Header("卡片相关概率")]
        public float colorlessRareChance = 0.3f;   // 无色卡牌中稀有卡的出现概率
        public float cardUpgradedChance = 0.4f;      // 战斗中获得的卡牌被升级的概率（受 ascension 等级影响）
    }

    /// <summary>
    /// 房间类型分配器（补充概率计算 + 调用 RoomTypeAssigner）
    /// 
    /// 主要职责：
    /// 1. 根据当前幕的配置（ActRoomChances）和地图的有效节点数，计算各类房间的理论数量。
    /// 2. 生成待分配的 AbstractRoom 对象列表。
    /// 3. 固定首行、末行、第8行等特殊行的房间类型（覆盖随机分配）。
    /// 4. 调用 RoomTypeAssigner.DistributeRoomsAcrossMap 完成最终随机分配。
    /// </summary>
    public class DungeonRoomAllocator
    {
        // 当前幕的房间概率配置（不可变）
        private readonly ActRoomChances chances;

        // 用于随机数生成（保证种子可重现）
        private readonly System.Random rng;

        /// <summary>
        /// 构造函数
        /// </summary>
        /// <param name="chances">当前幕的房间概率配置</param>
        /// <param name="rng">随机数生成器（应与地图生成使用相同的种子，以保证整体一致性）</param>
        public DungeonRoomAllocator(ActRoomChances chances, System.Random rng)
        {
            this.chances = chances;
            this.rng = rng;
        }

        /// <summary>
        /// 为整个地图分配房间类型（主入口）
        /// </summary>
        /// <param name="map">已生成拓扑结构的地图节点二维数组（节点可能为空，需包含边信息）</param>
        /// <param name="assigner">房间类型分配器实例，负责执行具体的节点分配算法（避免相邻同类等规则）</param>
        public void AllocateRooms(MapRoomNode[,] map, RoomTypeAssigner assigner)
        {
            // 1. 计算有效节点数量（有连接且不在固定行内的节点）
            int availableNodeCount = CountAvailableNodes(map);

            // 2. 根据概率生成房间列表（商店、休息、宝箱、精英、事件、普通战斗）
            List<AbstractRoom> roomList = GenerateRoomList(availableNodeCount);

            // 3. 强制固定行的房间类型（先于随机分配）
            //    例如：首行强制为普通战斗，末行强制为休息，第8行强制为宝箱（可根据无尽模式调整）
            AssignFixedRows(map);

            // 4. 调用 RoomTypeAssigner 进行剩余节点的随机分配（内部会打乱房间列表并应用规则）
            assigner.DistributeRoomsAcrossMap(map, roomList, rng);
        }

        /// <summary>
        /// 统计哪些节点需要被随机分配房间（排除固定行、无边的节点）
        /// </summary>
        /// <param name="map">地图节点数组</param>
        /// <returns>参与随机分配的有效节点数量</returns>
        private int CountAvailableNodes(MapRoomNode[,] map)
        {
            int height = map.GetLength(0);
            int width = map.GetLength(1);
            int count = 0;

            for (int y = 0; y < height; y++)
            {
                for (int x = 0; x < width; x++)
                {
                    var node = map[y, x];
                    if (node == null) continue;

                    // 排除固定行：首行(y==0)、第8行(y==8)、末行(y==height-1)
                    // 这些行的房间类型会被 AssignFixedRows 强制覆盖，不参与随机池
                    if (y == 0 || y == 8 || y == height - 1) continue;

                    // 只有拥有出口边的节点才计入（不可达的孤立节点无意义）
                    if (node.HasEdges()) count++;
                }
            }

            return count;
        }

        /// <summary>
        /// 按概率生成房间类型列表
        /// 参考 Java AbstractDungeon.generateRoomTypes()
        /// 
        /// 计算逻辑：
        /// 1. 用总有效节点数乘以各概率并四舍五入取整，得到各类房间的期望数量。
        /// 2. 普通战斗房间数量 = 总节点数 - 其他所有类型房间数之和。
        /// 3. 为每种类型创建对应数量的房间实例，依次添加到列表中。
        /// 4. 注意：此处不进行打乱，打乱操作将在 RoomTypeAssigner 内部执行。
        /// </summary>
        /// <param name="availableCount">参与随机分配的有效节点总数</param>
        /// <returns>包含各类房间实例的列表（数量可能略多于或少于有效节点数，RoomTypeAssigner 会自动补齐或截断）</returns>
        private List<AbstractRoom> GenerateRoomList(int availableCount)
        {
            // 根据概率计算每种房间的预期数量（四舍五入取整）
            int shopCount = Mathf.RoundToInt(availableCount * chances.shopRoomChance);
            int restCount = Mathf.RoundToInt(availableCount * chances.restRoomChance);
            int treasureCount = Mathf.RoundToInt(availableCount * chances.treasureRoomChance);
            int eventCount = Mathf.RoundToInt(availableCount * chances.eventRoomChance);
            int eliteCount = Mathf.RoundToInt(availableCount * chances.eliteRoomChance);

            // 普通战斗房间数量 = 总数减去其他所有类型
            int monsterCount = availableCount - shopCount - restCount - treasureCount - eliteCount - eventCount;

            var list = new List<AbstractRoom>();

            // 添加商店房间
            for (int i = 0; i < shopCount; i++) list.Add(new ShopRoom());
            // 添加休息房间
            for (int i = 0; i < restCount; i++) list.Add(new RestRoom());
            // 添加宝箱房间
            for (int i = 0; i < treasureCount; i++) list.Add(new TreasureRoom());
            // 添加精英战斗房间
            for (int i = 0; i < eliteCount; i++) list.Add(new MonsterRoomElite());
            // 添加事件房间
            for (int i = 0; i < eventCount; i++) list.Add(new EventRoom());
            // 添加普通战斗房间（补足剩余数量）
            for (int i = 0; i < monsterCount; i++) list.Add(new MonsterRoom());

            // 注意：此处不进行随机打乱。打乱操作将在 RoomTypeAssigner.DistributeRoomsAcrossMap 内部执行，
            // 这样可以保证分配算法能够根据路径规则（例如避免相邻同类）进行顺序调整。
            return list;
        }

        /// <summary>
        /// 强制固定某些行的房间类型（首行、末行、第8行）
        /// 参考 Java AbstractDungeon.generateMap() 中的 assignRowAsRoomType 调用。
        /// 
        /// 固定规则：
        /// - 首行（y == 0）：全部为普通战斗房间（MonsterRoom）
        /// - 末行（y == height-1）：全部为休息房间（RestRoom）
        /// - 第8行（y == 8）：全部为宝箱房间（TreasureRoom）
        ///   注：原版 Java 中，第8行会根据无尽模式以及是否有“MimicInfestation”灾厄决定是宝箱房还是精英房，
        ///   此处简化为宝箱房；如需更完整实现，可扩展参数控制。
        /// </summary>
        /// <param name="map">地图节点数组</param>
        private void AssignFixedRows(MapRoomNode[,] map)
        {
            int height = map.GetLength(0);
            int lastRow = height - 1;

            // 首行全部为普通战斗房间
            AssignWholeRow(map, 0, new MonsterRoom());

            // 末行全部为休息房间
            AssignWholeRow(map, lastRow, new RestRoom());

            // 第8行：全部为宝箱房间（可根据游戏模式进一步扩展为精英房）
            if (height > 8)
            {
                AssignWholeRow(map, 8, new TreasureRoom());
            }
        }

        /// <summary>
        /// 将整行所有有效节点设置为同一种房间类型
        /// </summary>
        /// <param name="map">地图节点数组</param>
        /// <param name="row">行索引（y坐标）</param>
        /// <param name="room">要设置的房间实例</param>
        private void AssignWholeRow(MapRoomNode[,] map, int row, AbstractRoom room)
        {
            int width = map.GetLength(1);
            for (int x = 0; x < width; x++)
            {
                var node = map[row, x];
                // 只对有连接边（可达）的节点进行赋值，避免给孤立的空节点设置房间
                if (node != null && node.HasEdges())
                    node.Room = room;
            }
        }
    }
}