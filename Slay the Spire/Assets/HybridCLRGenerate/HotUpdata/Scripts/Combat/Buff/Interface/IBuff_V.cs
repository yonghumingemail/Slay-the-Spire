using UnityEngine.U2D;

public interface IBuff_V
{
    public void Initialized(BuffObj BuffObj, SpriteAtlas spriteAtlas);

    public void UpdateBuffUI(BuffObj BuffObj);
}
