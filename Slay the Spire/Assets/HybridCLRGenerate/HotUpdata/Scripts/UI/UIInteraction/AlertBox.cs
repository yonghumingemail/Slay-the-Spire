using System;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using UnityEngine;
using Z_Tools;

public class AlertBox : MonoBehaviour,INeedToInitialize
{
    private EnemySpawner enemySpawner;

    private SpriteRenderer LeftUp;
    private SpriteRenderer LeftDown;
    private SpriteRenderer RightDown;
    private SpriteRenderer RightUp;

    private Color defaultColor;
    private Color targetColor;

    private float speed;
    public Vector3 offset;

    public UniTask Initialize()
    {
        gameObject.SetActive(false);
        LeftUp = transform.Find("LeftUp").GetComponent<SpriteRenderer>();
        LeftDown = transform.Find("LeftDown").GetComponent<SpriteRenderer>();
        RightDown = transform.Find("RightDown").GetComponent<SpriteRenderer>();
        RightUp = transform.Find("RightUp").GetComponent<SpriteRenderer>();

        defaultColor = new Color(1f, 1f, 1f, 0);
        targetColor = new Color(1f, 1f, 1f, 1);

        LeftUp.color = defaultColor;
        LeftDown.color = defaultColor;
        RightDown.color = defaultColor;
        RightUp.color = defaultColor;
        return UniTask.CompletedTask;
    }
    
    public void Show(Transform _transform, Sprite sprite)
    {
        transform.gameObject.SetActive(true);

        DOTween.To(() => LeftUp.color, value => { LeftUp.color = value; }, targetColor, speed);
        DOTween.To(() => LeftDown.color, value => { LeftDown.color = value; }, targetColor, speed);
        DOTween.To(() => RightDown.color, value => { RightDown.color = value; }, targetColor, speed);
        DOTween.To(() => RightUp.color, value => { RightUp.color = value; }, targetColor, speed);


        Vector2 size = sprite.rect.size * _transform.localScale;
        transform.position = _transform.position + offset;
        LeftUp.transform.localPosition =
            new Vector2(-size.x / 2 / sprite.pixelsPerUnit, size.y / 2 / sprite.pixelsPerUnit);
        LeftDown.transform.localPosition =
            new Vector2(-size.x / 2 / sprite.pixelsPerUnit, -size.y / 2 / sprite.pixelsPerUnit);
        RightDown.transform.localPosition =
            new Vector2(size.x / 2 / sprite.pixelsPerUnit, -size.y / 2 / sprite.pixelsPerUnit);
        RightUp.transform.localPosition =
            new Vector2(size.x / 2 / sprite.pixelsPerUnit, size.y / 2 / sprite.pixelsPerUnit);
    }

    public GameObject TestObj;
    [ContextMenu("Show")]
    public void ShowEditor()
    {
        LeftUp = transform.Find("LeftUp").GetComponent<SpriteRenderer>();
        LeftDown = transform.Find("LeftDown").GetComponent<SpriteRenderer>();
        RightDown = transform.Find("RightDown").GetComponent<SpriteRenderer>();
        RightUp = transform.Find("RightUp").GetComponent<SpriteRenderer>();


        DOTween.To(() => LeftUp.color, value => { LeftUp.color = value; }, targetColor, speed);
        DOTween.To(() => LeftDown.color, value => { LeftDown.color = value; }, targetColor, speed);
        DOTween.To(() => RightDown.color, value => { RightDown.color = value; }, targetColor, speed);
        DOTween.To(() => RightUp.color, value => { RightUp.color = value; }, targetColor, speed);

        Transform _transform=TestObj.transform;
        Sprite sprite = TestObj.GetComponent<SpriteRenderer>().sprite;

        Vector2 size = sprite.rect.size * _transform.localScale;
        LeftUp.transform.localPosition =
            new Vector2(-size.x / 2 / sprite.pixelsPerUnit, size.y / 2 / sprite.pixelsPerUnit);
        LeftDown.transform.localPosition =
            new Vector2(-size.x / 2 / sprite.pixelsPerUnit, -size.y / 2 / sprite.pixelsPerUnit);
        RightDown.transform.localPosition =
            new Vector2(size.x / 2 / sprite.pixelsPerUnit, -size.y / 2 / sprite.pixelsPerUnit);
        RightUp.transform.localPosition =
            new Vector2(size.x / 2 / sprite.pixelsPerUnit, size.y / 2 / sprite.pixelsPerUnit);
    }
    public void Close()
    {
        LeftUp.color = defaultColor;
        LeftDown.color = defaultColor;
        RightDown.color = defaultColor;
        RightUp.color = defaultColor;
        transform.gameObject.SetActive(false);
    }

   
}