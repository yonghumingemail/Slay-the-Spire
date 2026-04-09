using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;

public class DirectionalCard
{
    public RaycastHit2D target;
    public string detectLayerName;
    public Enemy enemy { get; private set; }

    public DirectionalCard(Card card, string detectLayerName)
    {
        this.detectLayerName = detectLayerName;

        target = default;
        enemy = null;


        card.CardComponentInfo.HandPile.cardDragLine.Register(card);

        card.priorityEventCenter.AddEvent<Action<Enemy>>("OnMouseEnterEnemy", OnMouseEnterEnemy, 0);
        card.priorityEventCenter.AddEvent<Action<Enemy>>("OnMouseExitEnemy", OnMouseExitEnemy, 0);
    }

    public async UniTask<bool> Trigger(Card card, CancellationToken cancellationToken, bool conditionCheck)
    {
        if (target.collider != null &&conditionCheck)
        {
            card.CardInteraction.isInteractable = false;
            foreach (var VARIABLE in card.cardEntries)
            {
                await VARIABLE.Trigger(card._player.gameObject, target.collider.gameObject);
                await UniTask.Yield(cancellationToken);
            }

            await card.CardTriggerAnimator();

            card.Enable(false);
            card.CardComponentInfo.HandPile.SortCards();

            return true;
        }

        card.ReturnToHandPosition();
        return false;
    }


    public void OnMouseUp(Card card, PointerEventData _data)
    {
        enemy?.alertBox.Close();
        if (!card.CardInteraction._isDragging) return;
        target = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
            15,
            1 << LayerMask.NameToLayer(detectLayerName));

        card._combatManage.AddCardToExecuteQueue(card);
    }

    private void OnMouseEnterEnemy(Enemy enemy)
    {
        this.enemy = enemy;
        enemy.alertBox.Show(enemy.transform, enemy.spriteRenderer.sprite);
    }

    private void OnMouseExitEnemy(Enemy enemy)
    {
        this.enemy = enemy;
        enemy?.alertBox.Close();
    }
}