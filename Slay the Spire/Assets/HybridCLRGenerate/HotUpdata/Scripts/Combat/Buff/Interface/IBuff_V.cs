using UnityEngine;
using UnityEngine.U2D;

public interface IBuff_V
{
    public void UpdateBuffUI(BuffObj BuffObj);
    public void UpdateBuffUI(BuffObj BuffObj, SpriteAtlas spriteAtlas);
    GameObject GetViewObject();

}
