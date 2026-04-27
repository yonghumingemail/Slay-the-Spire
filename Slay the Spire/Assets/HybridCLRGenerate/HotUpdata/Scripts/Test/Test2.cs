using System;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Test2 :MonoBehaviour
{
    private void Awake()
    {
       
    }
[ContextMenu("Show")]
    public void Awake23()
    {
       print(GetTightMeshSize(transform.GetComponent<SpriteRenderer>().sprite));
    }
    void Update()
    {
        Material mat = GetComponent<Image>().material;
        Debug.Log("TileSize: " + mat.GetVector("_TileSize"));
    }
    public static Vector2 GetTightMeshSize(Sprite sprite)
    {
        Vector2[] verts = sprite.vertices;
        if (verts == null || verts.Length == 0) return Vector2.zero;

        Vector2 min = verts[0];
        Vector2 max = verts[0];
        foreach (var v in verts)
        {
            print(v);
            min = Vector2.Min(min, v);
            max = Vector2.Max(max, v);
        }
        return max - min;
    }
}
