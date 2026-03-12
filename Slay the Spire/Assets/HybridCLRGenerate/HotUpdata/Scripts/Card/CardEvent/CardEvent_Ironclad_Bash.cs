using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;
namespace CardEvent_Ironclad
{
    public class CardEvent_Ironclad_Bash : CardEvent_Abs
    {
        private int _damage = 8;
        private int _stack = 2;

        private InflictDamage _inflictDamage;
        private VulnerableState _vulnerableState;

        public CardEvent_Ironclad_Bash()
        {
            defaultDataPtah = "Assets/ScriptableObject/CardEvent/Ironclad_Bash.asset";
            _inflictDamage = new InflictDamage();
            _vulnerableState = new VulnerableState();

            describe = _inflictDamage.GetDescription(_damage) + "\n" + _vulnerableState.GetDescription(_stack);
        }


        public override async UniTask Trigger(bool conditionCheck = true)
        {
            if (target.collider != null && (!conditionCheck || energy.SetEnergy(energy._energy - orbValue)))
            {
                Debug.Log("Trigger");
                _inflictDamage.Trigger(null, target.collider.gameObject, _damage);
                _vulnerableState.Trigger(null, target.collider.gameObject, _stack);
                
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
            _eventCenter.AddEvent<Action<PointerEventData>>("OnPointerUp", _data =>
            {
                target = Physics2D.Raycast(_data.pressEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward, 15,
                    1 << LayerMask.NameToLayer("Enemy"));
            });
        }

        public override void Strengthen()
        {
            canStrengthen = false;
            _damage += 2;
            _stack += 1;
            describe = _inflictDamage.GetDescription(_damage) + "\n" + _vulnerableState.GetDescription(_stack);
            _eventCenter.GetEvent<Action>("OnCardDataUpdated")?.Invoke();
        }

        public override void OnDestroy()
        {
            _eventCenter.RemoveEvent("OnPointerUp");
        }
    }
}
