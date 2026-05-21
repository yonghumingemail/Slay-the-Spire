using System.Collections.Generic;
using Cysharp.Threading.Tasks;

public class ResourcePathList 
{
    public List<string> PathList{get;}=new List<string>();
    public UniTask<T> LoadAssetAsync<T>(string path) where T : class
    {
        PathList.Add(path);
        return AddressablesMgr.Instance.LoadAssetAsync<T>(path);
    }
    public void Release()
    {
        foreach (var path in PathList)
        {
            AddressablesMgr.Instance.Release(path);
        }
    }
}
