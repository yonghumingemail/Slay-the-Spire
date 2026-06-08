using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class TransitionPage : UIFormLogic
{
    public abstract class ID : ClassID<ID>
    {
    }

    [Tooltip("动画时长（秒）")] public float animatorSpeed = 0.5f;

    private Image _image;
    private CancellationTokenSource _currentAnimationCts;

    private void Awake()
    {
        _image = GetComponent<Image>();
        if (_image == null)
            Debug.LogError($"{name}: 未找到 Image 组件！", this);
        UIManager.Instance.RegisterUIForm(1000,ID.ID, this);
    }
    

    private void OnDestroy()
    {
        _currentAnimationCts?.Cancel();
        _currentAnimationCts?.Dispose();
    }

    protected internal override void OnOpen(object userData)
    {
        base.OnOpen(userData);
        AnimateAlpha(1).Forget();
    }

    protected internal override void OnClose(object userData)
    {
        Close(userData).Forget();
    }

    private async UniTaskVoid Close(object userData)
    {
        await AnimateAlpha(0);
        base.OnClose(userData);
    }

    private async UniTask AnimateAlpha(float targetAlpha)
    {
        _currentAnimationCts?.Cancel();
        _currentAnimationCts?.Dispose();
        _currentAnimationCts = new CancellationTokenSource();

        var linkedCts = CancellationTokenSource.CreateLinkedTokenSource(
            _currentAnimationCts.Token,
            this.GetCancellationTokenOnDestroy()
        );

        float duration = Mathf.Max(0.01f, animatorSpeed);
        float elapsed = 0f;

        Color color = _image.color;
        float startAlpha = color.a; // 从当前透明度开始


        while (elapsed < duration)
        {
            linkedCts.Token.ThrowIfCancellationRequested();

            float t = elapsed / duration;
            color.a = Mathf.Lerp(startAlpha, targetAlpha, t);
            _image.color = color;

            await UniTask.Yield(PlayerLoopTiming.Update, linkedCts.Token);
            elapsed += Time.deltaTime;
        }

        color.a = targetAlpha;
        _image.color = color;
    }
}