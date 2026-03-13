using System;
using DG.Tweening;
using UnityEngine;
using Z_Tools;

public class AlertBox : MonoBehaviour
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

    private void Awake()
    {
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
   
    }

    public void Show(Transform _transform, Sprite sprite)
    {
        transform.gameObject.SetActive(true);
        LeftUp.gameObject.SetActive(true);
        LeftDown.gameObject.SetActive(true);
        RightDown.gameObject.SetActive(true);
        RightUp.gameObject.SetActive(true);

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

    public void Close()
    {
        LeftUp.color = defaultColor;
        LeftDown.color = defaultColor;
        RightDown.color = defaultColor;
        RightUp.color = defaultColor;
        transform.gameObject.SetActive(false);
        LeftUp.gameObject.SetActive(false);
        LeftDown.gameObject.SetActive(false);
        RightDown.gameObject.SetActive(false);
        RightUp.gameObject.SetActive(false);
    }
}