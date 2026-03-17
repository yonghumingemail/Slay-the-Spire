using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

namespace CardEvent_Ironclad
{
    public class CardEvent_Ironclad_Strike : CardEvent_Abs
    {
        private InflictDamage _inflictDamage;
        private RaycastHit2D _target;

        public CardEvent_Ironclad_Strike()
        {
            cardName = "打击";
            cardType = CardType.攻击;
            isDirected = false;
            orbValue = 1;
            defaultDataPtah = "Assets/ScriptableObject/CardEvent/Ironclad_Strike.asset";

            _inflictDamage = new InflictDamage(6);
            
            describe = _inflictDamage.GetDescription();
        }


        public override async UniTask Trigger(bool conditionCheck = true)
        {
            if (_target.collider != null && (!conditionCheck || energy.SetEnergy(energy._energy - orbValue)))
            {
                var card = _eventCenter.GetEvent<Func<Card>>("Card").Invoke();
                //  Debug.Log("Trigger");
                foreach (var VARIABLE in cardEntries)
                {
                    await VARIABLE.Trigger(card.gameObject, _target.collider.gameObject);
                }

                await _eventCenter.GetEvent<Func<UniTask>>("CardTriggerAnimator").Invoke();
                _target = default;
            }
            else
            {
                // Debug.Log("UnTrigger");
                _eventCenter.GetEvent<Action>("UnTriggerCardEvent")?.Invoke();
            }
        }


        public override void EventRegister(IEventCenter<string> eventCenter)
        {
            base.EventRegister(eventCenter);
            AddCardEntry(_inflictDamage);
            //卡牌事件监听卡牌的点击事件，当鼠标抬起时进行检测
            _eventCenter.AddEvent<Action<PointerEventData>>("OnPointerUp", _data =>
            {
                _target = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
                    15,
                    1 << LayerMask.NameToLayer("Enemy"));
            });
        }

        public override void Strengthen()
        {
            canStrengthen = false;
            _inflictDamage.damage += 2;
            describe = _inflictDamage.GetDescription();
            _eventCenter.GetEvent<Action>("OnCardUpdateUI")?.Invoke();
        }

        public override void OnDestroy()
        {
            _eventCenter.RemoveEvent("OnPointerUp");
        }
    }
}