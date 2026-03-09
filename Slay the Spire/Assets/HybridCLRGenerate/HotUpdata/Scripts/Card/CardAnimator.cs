using System;
using DG.Tweening;
using UnityEngine;

[Serializable]
public struct CardAnimator
{
    private Camera _mainCamera;
    public Animator animator { get; set; }

    [Header("DOTween动画播放速度")] [SerializeField]
    private float rotation_speed;

    [SerializeField] private float move_speed;
    [SerializeField] private float magnification_speed;
    
    public CardAnimator(GameObject card,Camera mainCamera)
    {
        animator = card.GetComponent<Animator>();
        _mainCamera = mainCamera;
        rotation_speed=0.15f;
        move_speed=0.15f;
        magnification_speed=0.15f;
    }


    #region DOTween动画

    /// <summary>
    /// 回到原位置
    /// </summary>
    public void RegressPoint(GameObject targetObj,Vector3 targetPosition, Quaternion targetRotation, Vector3 targetScale)
    {
        DOTween.To(() => targetObj.transform.position, value => { targetObj.transform.position = value; },
            targetPosition, move_speed);

        DOTween.To(() => targetObj.transform.rotation, value => { targetObj.transform.rotation = value; }, targetRotation.eulerAngles,
            rotation_speed);

        DOTween.To(() => targetObj.transform.localScale, value => { targetObj.transform.localScale = value; }, targetScale, magnification_speed);
    }

    public void MoveToScreenCenter(GameObject targetObj,Action callback)
    {
        Vector3 screenCenter =
            _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        screenCenter.z = targetObj.transform.position.z;

        DOTween.To(() => targetObj.transform.position, value => { targetObj.transform.position = value; }, screenCenter, move_speed)
            .onComplete += () => { callback?.Invoke(); };
    }

    public void Recycle_DiscardPile(GameObject targetObj,Action callback)
    {
        Vector3 screenRightDown = _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width, 0, 0f));
        screenRightDown.z = targetObj.transform.position.z;
        DOTween.To(() => targetObj.transform.position, value => { targetObj.transform.position = value; },
            screenRightDown,
            move_speed);

        Vector3 screenCenter = _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        screenCenter.z = targetObj.transform.position.z;
        
        DOTween.To(() => targetObj.transform.localScale, value => { targetObj.transform.localScale = value; }, Vector3.zero,
            move_speed).onComplete += () =>
        {
            

            // gameObject.SetActive(false);
            // transform.position = screenCenter;
            // transform.localScale = _scale;
            // discardPile.AddCard(this).Forget();
            callback?.Invoke();
        };
    }

    public void Recycle_DrawPile(GameObject targetObj,Action callback)
    {
        Vector3 screenLeftDown = _mainCamera.ScreenToWorldPoint(new Vector3(0, 0, 0f));
        screenLeftDown.z = targetObj.transform.position.z;
        DOTween.To(() => targetObj.transform.position, value => { targetObj.transform.position = value; },
            screenLeftDown,
            move_speed);

        Vector3 screenCenter = _mainCamera.ScreenToWorldPoint(new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0f));
        screenCenter.z = targetObj.transform.position.z;
        
        DOTween.To(() => targetObj.transform.localScale, value => { targetObj.transform.localScale = value; }, Vector3.zero,
            move_speed).onComplete += () =>
        {
         

            // gameObject.SetActive(false);
            // transform.position = screenCenter;
            // transform.localScale = _scale;
            // drawPile.AddCard(this).Forget();
            callback?.Invoke();
        };
    }

    #endregion
}