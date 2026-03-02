using Cysharp.Threading.Tasks;
using UnityEngine;

public class Outline : MonoBehaviour
{
    SpriteRenderer spriteRenderer;
    Color color;
    public bool isExecute;
    public float speed = 2f;
    private float value;

    private void Awake()
    {
        spriteRenderer = transform.GetComponent<SpriteRenderer>();
        color = spriteRenderer.color;
        color.a = 0;
        spriteRenderer.color = color;
    }

    public async UniTask Enable()
    {
        if (!isExecute)
        {
            isExecute = true;
            while (isExecute)
            {
                value += speed * Time.deltaTime;
                color.a = Mathf.PingPong(value, 1);
                spriteRenderer.color = color;
                await UniTask.Yield(PlayerLoopTiming.FixedUpdate);
            }
        }
    }

    public void Disable()
    {
        isExecute = false;
    }
}