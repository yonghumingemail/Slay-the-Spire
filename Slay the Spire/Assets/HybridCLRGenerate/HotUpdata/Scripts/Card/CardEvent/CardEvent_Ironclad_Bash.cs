using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.U2D;
using Z_Tools;

namespace CardEvent_Ironclad
{
    public class CardEvent_Ironclad_Bash : CardEvent_Abs
    {
        private RaycastHit2D _target;
        private InflictDamage _inflictDamage;
        private VulnerableState _vulnerableState;

        public CardEvent_Ironclad_Bash()
        {
            cardName = "重击";
            cardType = CardType.攻击;
            isDirected = false;
            orbValue = 2;
            defaultDataPtah = "Assets/ScriptableObject/CardEvent/Ironclad_Bash.asset";

            _inflictDamage = new InflictDamage(8);
            _vulnerableState = new VulnerableState(2);
            

            describe = _inflictDamage.GetDescription() + _vulnerableState.GetDescription();
        }

        public override async UniTask Trigger(bool conditionCheck = true)
        {
            if (_target.collider != null && (!conditionCheck || energy.SetEnergy(energy._energy - orbValue)))
            {
                var card = _eventCenter.GetEvent<Func<Card>>("Card").Invoke();
                //Debug.Log("Trigger");
                foreach (var VARIABLE in cardEntries)
                {
                    await VARIABLE.Trigger(card.gameObject, _target.collider.gameObject);
                }

                await _eventCenter.GetEvent<Func<UniTask>>("CardTriggerAnimator").Invoke();
                _target = default;
            }
            else
            {
                //  Debug.Log("UnTrigger");
                _eventCenter.GetEvent<Action>("UnTriggerCardEvent")?.Invoke();
            }
        }


        public override void EventRegister(IEventCenter<string> eventCenter)
        {
            base.EventRegister(eventCenter);
            AddCardEntry(_inflictDamage);
            AddCardEntry(_vulnerableState);
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
            _vulnerableState.stack += 1;
            describe = _inflictDamage.GetDescription() + "\n" + _vulnerableState.GetDescription();
            _eventCenter.GetEvent<Action>("OnCardDataUpdated")?.Invoke();
        }

        public override void OnDestroy()
        {
            _eventCenter.RemoveEvent("OnPointerUp");
        }
    }
}