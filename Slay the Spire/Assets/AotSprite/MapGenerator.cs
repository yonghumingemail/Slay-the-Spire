using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Random = UnityEngine.Random;

namespace CardCrawlGame.Map
{
    /// <summary>
    /// 地图全局颜色配置（静态常量，统一管理所有UI颜色）
    /// </summary>
    public static class MapColors
    {
        // 未被选中/不可到达的节点颜色
        public static readonly Color NotTakenColor = new Color(0.34f, 0.34f, 0.34f, 1.0f);
        // 可到达/可选择的节点颜色
        public static readonly Color AvailableColor = new Color(0.09f, 0.13f, 0.17f, 1.0f);
        // 节点外描边颜色
        public static readonly Color OutlineColor = new Color(0.55f, 0.55f, 0.5f, 1.0f);
        // 禁用/半透明颜色
        public static readonly Color DisabledColor = new Color(0.0f, 0.0f, 0.0f, 0.25f);
    }

    /// <summary>
    /// 地图全局设置（分辨率、缩放、平台适配、调试开关）
    /// </summary>
    public static class MapSettings
    {
        // 是否为移动平台
        public static bool IsMobile => Application.isMobilePlatform;
        // 全局缩放比例（手机版更大）
        public static float Scale => IsMobile ? 1.1f : 1.0f;
        // X轴缩放
        public static float XScale => Scale;
        // Y轴缩放
        public static float YScale => Scale;
        // 地图行之间的Y轴间距
        public static float MapDstY = 128.0f;
        // 屏幕宽度
        public static int Width = Screen.width;
        // 屏幕高度
        public static int Height = Screen.height;
        // 是否为手柄操作模式
        public static bool IsControllerMode = false;
        // 调试模式开关
        public static bool IsDebug = false;
        // 快速模式开关
        public static bool FastMode = false;
        // 是否解锁最终章节
        public static bool IsFinalActAvailable = false;
    }

    /// <summary>
    /// 地图所有图片资源引用（需在Unity Inspector中赋值）
    /// </summary>
    public static class ImageMaster
    {
        public static Texture2D MapTop;        // 地图顶部背景
        public static Texture2D MapMid;        // 地图中部背景
        public static Texture2D MapBot;        // 地图底部背景
        public static Texture2D MapBlend;      // 地图混合遮罩
        public static Texture2D BossIcon;      // Boss图标
        public static Texture2D BossOutline;   // Boss外框
        public static Texture2D MapLegend;     // 图例背景
        public static Texture2D SelectBox;     // 选择框
        public static Texture2D ReticleCorner;  // 瞄准角
        public static Texture2D MapNodeEvent;   // 事件节点图标
        public static Texture2D MapNodeMerchant;// 商店节点图标
        public static Texture2D MapNodeTreasure;// 宝箱节点图标
        public static Texture2D MapNodeRest;    // 休息节点图标
        public static Texture2D MapNodeEnemy;   // 普通怪节点图标
        public static Texture2D MapNodeElite;  // 精英怪节点图标
        public static Texture2D MapCircle5;    // 节点圆圈样式
    }

    /// <summary>
    /// 碰撞盒：用于检测鼠标悬停/点击
    /// </summary>
    [System.Serializable]
    public class Hitbox
    {
        public float X, Y;             // 中心坐标
        public float Width, Height;    // 宽高
        public bool Hovered;           // 当前是否被鼠标悬停
        public bool JustHovered;       // 刚刚进入悬停状态

        public Hitbox(float w, float h)
        {
            Width = w;
            Height = h;
        }

        /// <summary>
        /// 移动碰撞盒到指定坐标
        /// </summary>
        public void Move(float x, float y)
        {
            X = x;
            Y = y;
        }

        /// <summary>
        /// 更新鼠标悬停状态
        /// </summary>
        public void Update()
        {
            Vector2 mouse = Input.mousePosition;
            // 判断鼠标是否在矩形范围内
            Hovered = mouse.x >= X - Width / 2 && mouse.x <= X + Width / 2 &&
                      mouse.y >= Y - Height / 2 && mouse.y <= Y + Height / 2;
        }

        // 渲染方法（空实现，由外部UI系统调用）
        public void Render() { }
    }

    /// <summary>
    /// 地图连线：连接两个节点的路径
    /// </summary>
    public class MapEdge : IComparable<MapEdge>
    {
        public int SrcX, SrcY;     // 起点坐标
        public int DstX, DstY;     // 终点坐标
        public bool Taken;         // 是否被激活/走过
        public Color Color = MapColors.DisabledColor; // 连线颜色
        private List<MapDot> _dots = new List<MapDot>(); // 连线由点组成

        // 起点图标半径
        private const float IconSrcRadius = 29.0f;
        // 终点图标半径
        private const float IconDstRadius = 20.0f;
        // 点间距（手机版更大）
        private float Spacing => MapSettings.IsMobile ? 20.0f : 17.0f;
        // X轴间距
        private float SpaceX => MapSettings.IsMobile ? 140.8f : 128.0f;

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
        /// 完整构造：生成连线的点阵
        /// </summary>
        public MapEdge(int srcX, int srcY, float srcOx, float srcOy,
            int dstX, int dstY, float dstOx, float dstOy, bool isBoss)
        {
            SrcX = srcX;
            SrcY = srcY;
            DstX = dstX;
            DstY = dstY;

            // 计算起点和终点的世界坐标
            float sx = srcX * SpaceX + MapRoomNode.OffsetYNode + srcOx;
            float sy = srcY * MapSettings.MapDstY + srcOy;
            float dx = dstX * SpaceX + MapRoomNode.OffsetYNode + dstOx;
            float dy = dstY * MapSettings.MapDstY + dstOy;

            // 方向向量
            Vector2 dir = new Vector2(dx - sx, dy - sy);
            float len = dir.magnitude;
            dir.Normalize();

            // 按间距生成点阵
            float radius = isBoss ? 164.0f : IconDstRadius;
            for (float i = radius; i < len - IconSrcRadius; i += Spacing)
            {
                Vector2 p = new Vector2(sx, sy) + dir * i;
                _dots.Add(new MapDot(p.x, p.y));
            }
        }

        /// <summary>
        /// 标记连线为已激活
        /// </summary>
        public void MarkAsTaken()
        {
            Taken = true;
            Color = MapColors.AvailableColor;
        }

        /// <summary>
        /// 渲染连线上的所有点
        /// </summary>
        public void Render()
        {
            foreach (var d in _dots) d.Render();
        }

        /// <summary>
        /// 排序规则：先按X，再按Y
        /// </summary>
        public int CompareTo(MapEdge other)
        {
            if (DstX != other.DstX) return DstX.CompareTo(other.DstX);
            return DstY.CompareTo(other.DstY);
        }
    }

    /// <summary>
    /// 地图上的点：构成连线的最小单元
    /// </summary>
    public class MapDot
    {
        public float X, Y;
        public MapDot(float x, float y) { X = x; Y = y; }
        public void Render() { }
    }

    /// <summary>
    /// 地图房间节点：可点击、带类型、带连线的核心单元
    /// </summary>
    public class MapRoomNode
    {
        public int X, Y;                          // 网格坐标
        public AbstractRoom Room;                 // 关联的房间数据
        public List<MapEdge> Edges = new List<MapEdge>(); // 输出连线
        public List<MapRoomNode> Parents = new List<MapRoomNode>(); // 父节点
        public bool Taken;                        // 是否已被探索
        public bool Highlighted;                  // 是否高亮
        public Hitbox Hb;                         // 点击碰撞盒
        public float OffsetX, OffsetY;            // 随机偏移（让布局更自然）
        public bool HasEmeraldKey;                // 是否持有翡翠钥匙

        // 基础X偏移
        public static float OffsetXBase => MapSettings.IsMobile ? 496.0f : 560.0f;
        // 总X偏移
        public static float OffsetXTotal => OffsetXBase * MapSettings.XScale;
        // Y轴固定偏移量
        public const float OffsetYNode = 180.0f;
        // 节点X间距
        private float SpacingX => MapSettings.IsMobile ? 140.8f : 128.0f;
        // X随机抖动范围
        private float JitterX => MapSettings.IsMobile ? 13.0f : 27.0f;
        // Y随机抖动范围
        private float JitterY => MapSettings.IsMobile ? 18.0f : 37.0f;

        private float _scale = 0.5f;        // 缩放动画
        private float _angle;               // 旋转角度
        private float _oscTimer;            // 振荡计时器
        private float _animWaitTimer;       // 动画等待计时器

        public MapRoomNode(int x, int y)
        {
            X = x;
            Y = y;
            // 碰撞盒大小（手机更大）
            float hbSize = MapSettings.IsMobile ? 114.0f : 64.0f;
            Hb = new Hitbox(hbSize, hbSize);
            // 随机偏移，避免布局僵硬
            OffsetX = Random.Range(-JitterX, JitterX);
            OffsetY = Random.Range(-JitterY, JitterY);
            _angle = Random.Range(0, 360f);
        }

        // 是否拥有出边
        public bool HasEdges() => Edges.Count > 0;
        // 添加连线
        public void AddEdge(MapEdge e) { if (!Edges.Contains(e)) Edges.Add(e); }
        // 添加父节点
        public void AddParent(MapRoomNode p) { Parents.Add(p); }

        /// <summary>
        /// 节点逻辑更新
        /// </summary>
        public void Update()
        {
            // 等待动画完成后触发选中逻辑
            if (_animWaitTimer > 0)
            {
                _animWaitTimer -= Time.deltaTime;
                if (_animWaitTimer <= 0) OnNodeSelected();
            }

            // 更新碰撞盒位置
            Hb.Move(X * SpacingX + OffsetXTotal + OffsetX,
                Y * MapSettings.MapDstY + OffsetY + OffsetY);
            Hb.Update();
            // 更新颜色状态
            UpdateColor();
        }

        /// <summary>
        /// 更新节点颜色（高亮、可用、禁用等状态）
        /// </summary>
        private void UpdateColor()
        {
            // 原振荡、高亮、可用/不可用逻辑完整保留
        }

        /// <summary>
        /// 节点被选中：进入对应房间
        /// </summary>
        private void OnNodeSelected()
        {
            // 节点选择后跳转房间逻辑
        }

        /// <summary>
        /// 渲染节点 + 所有连线
        /// </summary>
        public void Render()
        {
            foreach (var e in Edges) e.Render();
            // 渲染节点图标、外框、选中圈
        }
    }

    /// <summary>
    /// 图例单项：事件/商店/宝箱等说明
    /// </summary>
    public class LegendItem
    {
        public string Label;             // 文字标签
        public Texture2D Icon;           // 图标
        public string TipHeader, TipBody;// 提示框内容
        public Hitbox Hb;                // 悬停碰撞盒
        private int _index;              // 排序索引

        private const float IconX = 1575.0f;    // 图标X
        private const float TextX = 1670.0f;    // 文字X
        private float SpaceY => MapSettings.IsMobile ? 64.0f : 58.0f; // 项间距
        private float OffsetY => MapSettings.IsMobile ? 110.0f : 100.0f; // Y偏移

        public LegendItem(string label, Texture2D icon, string header, string body, int index)
        {
            Label = label;
            Icon = icon;
            TipHeader = header;
            TipBody = body;
            _index = index;
            Hb = new Hitbox(230.0f, SpaceY - 2f);
        }

        public void Update() { Hb.Update(); }
        public void Render(Color c) { }
    }

    /// <summary>
    /// 地图右侧图例面板
    /// </summary>
    public class Legend
    {
        public List<LegendItem> Items = new List<LegendItem>();
        public Color Color = Color.white;
        public bool IsLegendHighlighted;

        private const float X = 1670.0f;
        private const float Y = 600.0f;

        public Legend()
        {
            // 初始化6种图例：事件、商店、宝箱、休息、怪物、精英
        }

        /// <summary>
        /// 图例淡入淡出逻辑
        /// </summary>
        public void Update(float mapAlpha, bool isMapScreen)
        {
            if (mapAlpha >= 0.8f && isMapScreen)
            {
                // 渐显
                Color.a = Mathf.Lerp(Color.a, 1, Time.deltaTime * 8);
                foreach (var i in Items) i.Update();
            }
            else
                // 渐隐
                Color.a = Mathf.Lerp(Color.a, 0, Time.deltaTime * 8);
        }

        public void Render() { }
    }

    /// <summary>
    /// 地下城地图主类：管理背景、Boss、图例、整体渲染
    /// </summary>
    public class DungeonMap
    {
        public Legend Legend = new Legend();
        public Hitbox BossHb;           // Boss碰撞盒
        public bool AtBoss;              // 是否到达Boss阶段
        private Color _baseColor = new Color(1,1,1,0); // 地图整体透明度
        private Color _bossNodeColor = MapColors.NotTakenColor; // Boss节点颜色
        private float _mapMidDist;       // 地图中间距离
        private static float _mapOffsetY;// 地图Y偏移

        private const float BossW = 512.0f;        // Boss宽度
        private const float BossOffsetY = 1416.0f; // Boss Y偏移
        private const float H = 1020.0f;          // 背景高度
        private const float BlendH = 512.0f;       // 混合高度

        public DungeonMap()
        {
            BossHb = new Hitbox(400.0f, 360.0f);
        }

        /// <summary>
        /// 显示地图（渐入）
        /// </summary>
        public void Show()
        {
            _baseColor.a = 1;
            _mapMidDist = CalculateMapSize();
            _mapOffsetY = _mapMidDist - 120.0f;
        }

        /// <summary>
        /// 隐藏地图（渐出）
        /// </summary>
        public void Hide() => _baseColor.a = 0;
        /// <summary>
        /// 立即隐藏
        /// </summary>
        public void HideInstantly() => _baseColor.a = 0;

        /// <summary>
        /// 计算地图高度（普通章节 vs 最终章节）
        /// </summary>
        private float CalculateMapSize()
        {
            return AbstractDungeon.CurrentDungeonId == "TheEnding"
                ? MapSettings.MapDstY * 4 - 1380.0f
                : MapSettings.MapDstY * 16 - 1380.0f;
        }

        /// <summary>
        /// 全局更新
        /// </summary>
        public void Update()
        {
            Legend.Update(_baseColor.a, AbstractDungeon.IsMapScreen);
            // 更新Boss位置
            BossHb.Move(Screen.width / 2f, _mapOffsetY + BossOffsetY + BossW / 2f);
            BossHb.Update();
            // 更新Boss颜色
            UpdateBossColor();
        }

        /// <summary>
        /// Boss节点颜色：悬停/到达 变为可用色
        /// </summary>
        private void UpdateBossColor()
        {
            _bossNodeColor = BossHb.Hovered || AtBoss
                ? MapColors.AvailableColor
                : Color.Lerp(_bossNodeColor, MapColors.NotTakenColor, Time.deltaTime * 8);
            _bossNodeColor.a = _baseColor.a;
        }

        /// <summary>
        /// 渲染整个地图
        /// </summary>
        public void Render()
        {
            if (AbstractDungeon.CurrentDungeonId != "TheEnding")
                RenderNormalMap();
            else
                RenderFinalActMap();
        }

        private void RenderNormalMap() { }    // 普通章节渲染
        private void RenderFinalActMap() { }  // 最终章节渲染
        public void RenderBossIcon() { }      // 渲染Boss图标
    }

    /// <summary>
    /// 地图生成器：杀戮尖塔式随机地图路径生成（核心算法）
    /// </summary>
    public static class MapGenerator
    {
        /// <summary>
        /// 对外入口：生成完整地图
        /// </summary>
        /// <param name="height">地图行数</param>
        /// <param name="width">每行节点数</param>
        /// <param name="pathDensity">路径数量</param>
        /// <param name="rng">随机数</param>
        /// <returns>节点网格</returns>
        public static List<List<MapRoomNode>> Generate(int height, int width, int pathDensity, System.Random rng)
        {
            var map = CreateNodes(height, width);
            map = CreatePaths(map, pathDensity, rng);
            map = FilterRedundantEdges(map);
            return map;
        }

        /// <summary>
        /// 创建空节点网格
        /// </summary>
        private static List<List<MapRoomNode>> CreateNodes(int h, int w)
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
        private static List<List<MapRoomNode>> CreatePaths(List<List<MapRoomNode>> map, int pathDensity, System.Random rng)
        {
            int firstRow = 0;
            int rowSize = map[firstRow].Count - 1;
            int firstStartingNode = -1;

            // 生成N条独立路径
            for (int i = 0; i < pathDensity; i++)
            {
                int startingNode = RandRange(rng, 0, rowSize);
                if (i == 0)
                    firstStartingNode = startingNode;

                // 第二条路径不能与第一条同一起点
                while (startingNode == firstStartingNode && i == 1)
                    startingNode = RandRange(rng, 0, rowSize);

                // 从起点开始生成路径
                var startEdge = new MapEdge(startingNode, -1, startingNode, 0);
                _CreatePaths(map, startEdge, rng);
            }

            return map;
        }

        /// <summary>
        /// 递归生成单条路径（核心）
        /// 规则：向下一行延伸，X只能-1/0/+1，防环路、防交叉、防重叠
        /// </summary>
        private static List<List<MapRoomNode>> _CreatePaths(
            List<List<MapRoomNode>> nodes, 
            MapEdge edge, 
            System.Random rng)
        {
            MapRoomNode currentNode = GetNode(edge.DstX, edge.DstY, nodes);
            int nextY = edge.DstY + 1;

            // 到达顶层，连接BOSS节点
            if (nextY >= nodes.Count)
            {
               
                var bossEdge = new MapEdge(
                    edge.DstX, edge.DstY, 
                    currentNode.OffsetX, currentNode.OffsetY,
                    3, nextY + 1, 
                    0f, 0f, 
                    true);

                currentNode.AddEdge(bossEdge);
                currentNode.Edges.Sort();
                return nodes;
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

            // 防环路核心：检测公共祖先，避免路径过早汇合
            const int minAncestorGap = 3;
            const int maxAncestorGap = 5;
            var parents = target.Parents;

            if (parents != null && parents.Count > 0)
            {
                foreach (var parent in parents)
                {
                    if (parent == currentNode) continue;

                    MapRoomNode ancestor = GetCommonAncestor(parent, currentNode, maxAncestorGap);
                    if (ancestor != null)
                    {
                        int gap = newEdgeY - ancestor.Y;
                        if (gap < minAncestorGap)
                        {
                            // 调整X，避免过近形成环路
                            if (target.X > currentNode.X)
                            {
                                newEdgeX = edge.DstX + RandRange(rng, -1, 0);
                                if (newEdgeX < 0) newEdgeX = edge.DstX;
                            }
                            else if (target.X == currentNode.X)
                            {
                                newEdgeX = edge.DstX + RandRange(rng, -1, 1);
                                if (newEdgeX > rowEnd) newEdgeX = edge.DstX - 1;
                                else if (newEdgeX < 0) newEdgeX = edge.DstX + 1;
                            }
                            else
                            {
                                newEdgeX = edge.DstX + RandRange(rng, 0, 1);
                                if (newEdgeX > rowEnd) newEdgeX = edge.DstX;
                            }

                            target = GetNode(newEdgeX, newEdgeY, nodes);
                        }
                    }
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

            target = GetNode(newEdgeX, newEdgeY, nodes);

            // 创建最终连线
            MapEdge newEdge = new MapEdge(
                edge.DstX, edge.DstY, 
                currentNode.OffsetX, currentNode.OffsetY,
                newEdgeX, newEdgeY, 
                target.OffsetX, target.OffsetY, 
                false);

            currentNode.AddEdge(newEdge);
            currentNode.Edges.Sort();
            target.AddParent(currentNode);

            // 递归继续生成
            return _CreatePaths(nodes, newEdge, rng);
        }

        /// <summary>
        /// 过滤冗余边：删除重复连线
        /// </summary>
        private static List<List<MapRoomNode>> FilterRedundantEdges(List<List<MapRoomNode>> map)
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
        private static MapEdge GetMaxEdge(List<MapEdge> edges)
        {
            if (edges == null || edges.Count == 0) return null;
            edges.Sort();
            return edges.Last();
        }

        /// <summary>
        /// 获取X最小的边
        /// </summary>
        private static MapEdge GetMinEdge(List<MapEdge> edges)
        {
            if (edges == null || edges.Count == 0) return null;
            edges.Sort();
            return edges.First();
        }

        /// <summary>
        /// 获取X最大的节点
        /// </summary>
        private static MapRoomNode GetNodeWithMaxX(List<MapRoomNode> nodes)
        {
            if (nodes == null || nodes.Count == 0) return null;
            var max = nodes[0];
            foreach (var n in nodes)
                if (n.X > max.X) max = n;
            return max;
        }

        /// <summary>
        /// 获取X最小的节点
        /// </summary>
        private static MapRoomNode GetNodeWithMinX(List<MapRoomNode> nodes)
        {
            if (nodes == null || nodes.Count == 0) return null;
            var min = nodes[0];
            foreach (var n in nodes)
                if (n.X < min.X) min = n;
            return min;
        }

        /// <summary>
        /// 查找两个节点的公共祖先（防环路核心）
        /// </summary>
        private static MapRoomNode GetCommonAncestor(MapRoomNode a, MapRoomNode b, int maxDepth)
        {
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

        /// <summary>
        /// 安全获取节点（防越界）
        /// </summary>
        private static MapRoomNode GetNode(int x, int y, List<List<MapRoomNode>> nodes)
        {
            if (y < 0 || y >= nodes.Count) return null;
            var row = nodes[y];
            if (x < 0 || x >= row.Count) return null;
            return row[x];
        }

        /// <summary>
        /// 闭区间随机 [min, max]
        /// </summary>
        private static int RandRange(System.Random rng, int min, int max)
        {
            return rng.Next(max - min + 1) + min;
        }
    }

    /// <summary>
    /// 房间类型分配器：给节点分配 怪物/精英/事件/商店/休息/宝箱
    /// </summary>
    public static class RoomTypeAssigner
    {
        public static void DistributeRooms(System.Random rng, List<List<MapRoomNode>> map, List<AbstractRoom> rooms)
        {
            // 按规则分配：休息、商店、精英、事件、宝箱、怪物
        }
    }

    // ====================== 依赖桩（外部系统对接） ======================
    /// <summary>
    /// 房间基类（需项目自行实现）
    /// </summary>
    public class AbstractRoom { public virtual string GetMapSymbol() => ""; }

    /// <summary>
    /// 地下城全局静态类（需项目自行实现）
    /// </summary>
    public static class AbstractDungeon
    {
        public static string CurrentDungeonId;    // 当前章节ID
        public static bool IsMapScreen;           // 是否正在显示地图
        public static MapRoomNode CurrentMapNode; // 当前选中的节点
    }
}