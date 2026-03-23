using System;
using DG.Tweening;
using UnityEngine;
using Z_Tools;

[Serializable]
public class CardAnimator
{
    [SerializeField] private Animator _animator;
    public Animator Animator => _animator;

    [Header("DOTween动画播放速度")] [SerializeField]
    private float rotation_speed = 0.15f;

    [SerializeField] private float move_speed = 0.2f;
    [SerializeField] private float Scale_speed = 0.15f;
    private Camera _mainCamera;
    private Sequence _sequence;

    public CardAnimator(Card card, Camera mainCamera)
    {
        _animator = card.GetComponent<Animator>();
        _mainCamera = mainCamera;
    }


    #region DOTween动画

    public void MoveToScreenCenter(GameObject target, Action callback)
    {
        Vector3 screenCenter =
            _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        screenCenter.z = target.transform.position.z;

        DOTween.To(() => target.transform.position, value => { target.transform.position = value; }, screenCenter,
                move_speed)
            .onComplete += () => { callback?.Invoke(); };
    }

    public void Recycle_DiscardPile(GameObject target, Action callback)
    {
        Vector3 screenRightDown = _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width, 0, 0f));
        screenRightDown.z = target.transform.position.z;

        TransformEffect(target, screenRightDown, Quaternion.Euler(new Vector3(0, 0, -180)), Vector3.zero,callback);

    }

    public void Recycle_DrawPile(GameObject target, Action callback)
    {
        Vector3 screenLeftDown = _mainCamera.ScreenToWorldPoint(new Vector3(0, 0, 0f));
        screenLeftDown.z = target.transform.position.z;
        DOTween.To(() => target.transform.position, value => { target.transform.position = value; },
            screenLeftDown,
            move_speed);

        DOTween.To(() => target.transform.localScale, value => { target.transform.localScale = value; }, Vector3.zero,
            move_speed).onComplete += () => { callback?.Invoke(); };
    }

    public void TransformEffect(GameObject obj, Vector3 targetPosition, Quaternion targetRotation, Vector3 targetScale, Action callback = null)
    {
        _sequence.Kill();
        _sequence = DOTween.Sequence();

        var move = DOTween.To(() => obj.transform.position, value => { obj.transform.position = value; },
            targetPosition, move_speed);

        var rotation = DOTween.To(() => obj.transform.rotation, value => { obj.transform.rotation = value; },
            targetRotation.eulerAngles,
            rotation_speed);

        var scale = DOTween.To(() => obj.transform.localScale, value => { obj.transform.localScale = value; }, targetScale,
            Scale_speed);
        _sequence.Insert(0, move);
        _sequence.Insert(0, rotation);  
        _sequence.Insert(0, scale);
        _sequence.onComplete+= () =>
        {
            callback?.Invoke();
        };
    }

    #endregion

    public void OnDestroy()
    {
    }
}