using System;
using DG.Tweening;
using UnityEngine;
using Z_Tools;

[Serializable]
public class CardAnimator
{
    private Camera _mainCamera;
    [SerializeField] private Animator _animator;
    public Animator Animator => _animator;

    [Header("DOTween动画播放速度")] [SerializeField]
    private float move_speed = 0.2f;

    private IEventCenter<string> _eventCenter;

    public CardAnimator(IEventCenter<string> eventCenter,GameObject obj,Camera  mainCamera)
    {
        _eventCenter = eventCenter;
        _mainCamera = mainCamera;
        _animator =obj.GetComponent<Animator>();
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
        DOTween.To(() => target.transform.position, value => { target.transform.position = value; },
            screenRightDown,
            move_speed);

        DOTween.To(() => target.transform.localScale, value => { target.transform.localScale = value; }, Vector3.zero,
            move_speed).onComplete += () => { callback?.Invoke(); };
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

    #endregion

    public void OnDestroy()
    {
        
    }
}