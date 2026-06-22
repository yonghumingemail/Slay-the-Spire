using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;

[Serializable]
public struct TestInfo
{
    public int id;
    public string name;
    public string sex;

    public static TestInfo Convert(byte[] data)
    {
        using (var ms = new MemoryStream(data))
        using (var reader = new BinaryReader(ms, Encoding.UTF8))
        {
            TestInfo info = new TestInfo
            {
                id = reader.ReadInt32(), // 读取 4 字节 int
                name = reader.ReadString(), // BinaryReader 自动读取长度前缀
                sex = reader.ReadString()
            };
            return info;
        }
    }
}

public class Test : MonoBehaviour
{
    public string text;
    public List<TestInfo> testInfos;

    private void Awake()
    {
        Debug.Log(1111111111);
    }

    private void Update()
    {
    }

    [ContextMenu("Show")]
    private async void Start22()
    {
        testInfos=new List<TestInfo>();
        var dataArray = StringToBinaryConverter.ReadCsvWithoutComments(text);
        List<byte[]> byteDatas = new List<byte[]>();
        for (int i = 1; i < dataArray.Count; i++)
        {
            byteDatas.Add(StringToBinaryConverter.Convert(dataArray[i], dataArray[0]));
            testInfos.Add(TestInfo.Convert(byteDatas[i-1]));
        }
    }
}