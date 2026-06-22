using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

public static class StringToBinaryConverter
{
    // 类型名称到解析写入委托的映射
    private static readonly Dictionary<string, Action<BinaryWriter, string>> WriteActions = new (StringComparer.OrdinalIgnoreCase)
    {
        // 整数类型
        ["int"] = (w, v) => w.Write(int.Parse(v)),
        ["int32"] = (w, v) => w.Write(int.Parse(v)),
        ["uint"] = (w, v) => w.Write(uint.Parse(v)),
        ["uint32"] = (w, v) => w.Write(uint.Parse(v)),
        ["long"] = (w, v) => w.Write(long.Parse(v)),
        ["int64"] = (w, v) => w.Write(long.Parse(v)),
        ["ulong"] = (w, v) => w.Write(ulong.Parse(v)),
        ["uint64"] = (w, v) => w.Write(ulong.Parse(v)),
        ["short"] = (w, v) => w.Write(short.Parse(v)),
        ["int16"] = (w, v) => w.Write(short.Parse(v)),
        ["ushort"] = (w, v) => w.Write(ushort.Parse(v)),
        ["uint16"] = (w, v) => w.Write(ushort.Parse(v)),
        ["byte"] = (w, v) => w.Write(byte.Parse(v)),
        ["sbyte"] = (w, v) => w.Write(sbyte.Parse(v)),

        // 浮点数
        ["float"] = (w, v) => w.Write(float.Parse(v)),
        ["single"] = (w, v) => w.Write(float.Parse(v)),
        ["double"] = (w, v) => w.Write(double.Parse(v)),
        ["decimal"] = (w, v) => w.Write(decimal.Parse(v)),

        // 布尔
        ["bool"] = (w, v) => w.Write(bool.Parse(v)),
        ["boolean"] = (w, v) => w.Write(bool.Parse(v)),

        // 字符
        ["char"] = (w, v) => w.Write(char.Parse(v)),

        // 日期时间
        ["datetime"] = (w, v) =>
        {
            DateTime dt = DateTime.Parse(v);
            w.Write(dt.ToBinary()); // 写入 64 位整数
        },

        // 字符串（特殊处理，使用7位编码长度）
        ["string"] = (w, v) =>
        {
            byte[] strBytes = Encoding.UTF8.GetBytes(v);
            Write7BitEncodedInt(w, strBytes.Length);
            w.Write(strBytes);
        }
    };

    
    /// <summary>
    /// 读取 CSV 文件，跳过以 '#' 开头的注释行，并按逗号分割每一行。
    /// </summary>
    /// <param name="filePath">CSV 文件路径</param>
    /// <param name="separator">字段分隔符，默认为逗号</param>
    /// <returns>每行字段组成的列表</returns>
    public static List<string[]> ReadCsvWithoutComments(string filePath, char separator = ',')
    {
        var rows = new List<string[]>();

        using (var reader = new StreamReader(filePath))
        {
            while (reader.ReadLine() is { } line)
            {
                // 跳过空行
                if (string.IsNullOrWhiteSpace(line))
                    continue;

                // 跳过以 '#' 开头的注释行（去除前导空格后判断）
                string trimmedLine = line.TrimStart();
                if (trimmedLine.StartsWith("#"))
                    continue;

                // 按分隔符分割成字段数组
                string[] fields = line.Split(separator);
                rows.Add(fields);
            }
        }

        return rows;
    }
    
    
    
    /// <summary>
    /// 将两个对应的字符串列表按指定类型顺序转换为二进制数据。
    /// </summary>
    /// <param name="dataItems">数据内容列表，例如 ["1001", "关卡选择按钮", "LevelSelectionButton", "2001", "1001"]</param>
    /// <param name="types">类型顺序列表，支持多种类型名称（如 "int", "bool", "float", "string" 等）</param>
    /// <returns>二进制数据</returns>
    public static byte[] Convert(IEnumerable<string> dataItems, IEnumerable<string> types)
    {
        if (dataItems == null) throw new ArgumentNullException(nameof(dataItems));
        if (types == null) throw new ArgumentNullException(nameof(types));

        using (var dataEnum = dataItems.GetEnumerator())
        using (var typeEnum = types.GetEnumerator())
        {
            bool hasData = dataEnum.MoveNext();
            bool hasType = typeEnum.MoveNext();

            using (MemoryStream ms = new MemoryStream())
            using (BinaryWriter writer = new BinaryWriter(ms, Encoding.UTF8))
            {
                // 同时遍历两个序列
                while (hasData && hasType)
                {
                    string value = dataEnum.Current;
                    string type = typeEnum.Current;

                    if (type != null && WriteActions.TryGetValue(type, out var writeAction))
                    {
                        try
                        {
                            writeAction(writer, value);
                        }
                        catch (Exception ex)
                        {
                            throw new FormatException($"数据'{value}'无法按类型'{type}'解析: {ex.Message}", ex);
                        }
                    }
                    else
                    {
                        throw new NotSupportedException($"不支持的类型: {type}");
                    }

                    hasData = dataEnum.MoveNext();
                    hasType = typeEnum.MoveNext();
                }

                // 检查是否两个序列同时结束
                return hasData != hasType ? throw new ArgumentException("数据项数量与类型数量不匹配。") : ms.ToArray();
            }
        }
    }

    // 写入7位编码整数（与BinaryWriter.Write7BitEncodedInt 行为一致）
    private static void Write7BitEncodedInt(BinaryWriter writer, int value)
    {
        uint uValue = (uint)value;
        while (uValue >= 0x80)
        {
            writer.Write((byte)(uValue | 0x80));
            uValue >>= 7;
        }
        writer.Write((byte)uValue);
    }
}