using System;
using DG.Tweening;
using UnityEngine;

[Serializable]
public class CardAnimator
{
    [Header("DOTween动画播放速度")] [SerializeField]
    private float animatorSpeed = 0.25f;

    public Camera camera { get; set; }
    private Sequence _sequence;

    public CardAnimator(Camera camera)
    {
        this.camera = camera;
    }


    #region DOTween动画

    public void MoveToScreenCenter(GameObject target, Action callback)
    {
        Vector3 screenCenter =
            camera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        screenCenter.z = target.transform.position.z;

        DOTween.To(() => target.transform.position, value => { target.transform.position = value; }, screenCenter,
                animatorSpeed)
            .onComplete += () => { callback?.Invoke(); };
    }

    public void Recycle_DiscardPile(GameObject target, Action callback)
    {
        Vector3 screenRightDown = camera.ScreenToWorldPoint(new Vector3(Screen.width, 0, 0f));
        screenRightDown.z = target.transform.position.z;

        TransformEffect(target, screenRightDown, new Vector3(0, 0, -180), Vector3.zero, callback: callback);
    }

    public void Recycle_DrawPile(GameObject target, Action callback)
    {
        Vector3 screenLeftDown = camera.ScreenToWorldPoint(new Vector3(0, 0, 0f));
        screenLeftDown.z = target.transform.position.z;

        TransformEffect(target, screenLeftDown, new Vector3(0, 0, 180), Vector3.zero, callback: callback);
    }

    /// 绝对旋转（旋转到指定四元数,无方向）
    public void TransformEffect(GameObject target, Vector3 targetPosition,
        Quaternion targetRotation, Vector3 targetScale, Action callback = null)
    {
        _sequence.Kill();
        var seq = DOTween.Sequence();
        seq.Insert(0, target.transform.DOMove(targetPosition, animatorSpeed));
        seq.Insert(0, target.transform.DORotateQuaternion(targetRotation, animatorSpeed));
        seq.Insert(0, target.transform.DOScale(targetScale, animatorSpeed));
        seq.onComplete += () => callback?.Invoke();
        _sequence = seq;
    }

    /// 相对旋转（旋转指定角度,有方向）
    public void TransformEffect(GameObject target, Vector3 targetPosition,
        Vector3 rotateAngle, Vector3 targetScale, RotateMode rotateMode = RotateMode.LocalAxisAdd,
        Action callback = null)
    {
        _sequence.Kill();
        var seq = DOTween.Sequence();
        seq.Insert(0, target.transform.DOMove(targetPosition, animatorSpeed));
        seq.Insert(0, target.transform.DORotate(rotateAngle, animatorSpeed, rotateMode));
        seq.Insert(0, target.transform.DOScale(targetScale, animatorSpeed));
        seq.onComplete += () => callback?.Invoke();
        _sequence = seq;
    }

    #endregion
}