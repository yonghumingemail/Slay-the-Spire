using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;

namespace CardEvent_Ironclad
{
    public class CardEvent_Ironclad_Strike : CardEvent_Abs
    {
        private int _damage = 6;

        private InflictDamage _inflictDamage;

        public CardEvent_Ironclad_Strike()
        {
            defaultDataPtah = "Assets/ScriptableObject/CardEvent/Ironclad_Strike.asset";
            _inflictDamage = new InflictDamage();
            describe = _inflictDamage.GetDescription(_damage);
        }


        public override async UniTask Trigger(bool conditionCheck = true)
        {
            if (target.collider != null && (!conditionCheck || energy.SetEnergy(energy._energy - orbValue)))
            {
                Debug.Log("Trigger");
                _inflictDamage.Trigger(null, target.collider.gameObject, _damage);
                await _eventCenter.GetEvent<Func<UniTask>>("RecycleCard_DiscardPile").Invoke();
                target = default;
            }
            else
            {
                Debug.Log("UnTrigger");
                _eventCenter.GetEvent<Action>("UnTriggerCardEvent")?.Invoke();
            }
        }


        public override void EventRegister(IEventCenter<string> eventCenter)
        {
            base.EventRegister(eventCenter);
            //卡牌事件监听卡牌的点击事件，当鼠标抬起时进行检测
            _eventCenter.AddEvent<Action<PointerEventData>>("OnPointerUp", _data =>
            {
                target = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward,
                    15,
                    1 << LayerMask.NameToLayer("Enemy"));
            });
        }

        public override void Strengthen()
        {
            canStrengthen = false;
            _damage += 2;
            describe = _inflictDamage.GetDescription(_damage);
            _eventCenter.GetEvent<Action>("OnCardUpdateUI")?.Invoke();
        }

        public override void OnDestroy()
        {
            _eventCenter.RemoveEvent("OnPointerUp");
        }
    }
}