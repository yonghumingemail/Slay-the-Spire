using System;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.EventSystems;
using Z_Tools;


public abstract class CardEvent_Abs
{
    public string describe;
    public int point;
    public bool canStrengthen = true;

    protected CardEvent_Abs()
    {
        EventCenter_Singleton.Instance.GetEvent<Func<Energy>>("Energy", (action) => { energy = action.Invoke(); });
    }

    public static async UniTask<T> Create<T>() where T : CardEvent_Abs, new()
    {
        T instance = new T();
        var value = await AddressablesMgr.Instance.LoadAssetAsync<CardParameter>(instance.defaultDataPtah);
        instance.parameter = value.Copy();
        return instance;
    }

    protected Energy energy;

    public EventCenter<string> _eventCenter;
    public CardParameter parameter { get; private set; }
    public string defaultDataPtah { get; protected set; }


    public virtual bool CanBeTriggered()
    {
        return energy._energy - point >= 0;
    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="conditionCheck">若为false则直接触发不进行条件检测</param>
    /// <returns></returns>
    public abstract UniTask Trigger(bool conditionCheck = true);

    public abstract void EventRegister(EventCenter<string> eventCenter);
    public abstract void Strengthen();
}

namespace CardEvent_Ironclad
{
    public class CardEvent_Ironclad_Strike : CardEvent_Abs
    {
        private int _damage = 6;

        private InflictDamage _inflictDamage;

        private RaycastHit2D target;

        public CardEvent_Ironclad_Strike()
        {
            point = 1;
            defaultDataPtah = "Assets/ScriptableObject/CardEvent/Ironclad_Strike.asset";
            _inflictDamage = new InflictDamage();
            describe = _inflictDamage.GetDescription(_damage);
        }

        //卡牌事件监听卡牌的点击事件，当鼠标抬起时进行检测

        public override UniTask Trigger(bool conditionCheck = true)
        {
            if (target.collider != null && (!conditionCheck || energy.SetEnergy(energy._energy - point)))
            {
                _inflictDamage.Trigger(null, target.collider.gameObject, _damage);
                _eventCenter.GetEvent<Action>("OnTriggerCardEvent")?.Invoke();
            }
            else
            {
                _eventCenter.GetEvent<Action>("UnTriggerCardEvent")?.Invoke();
            }

            return UniTask.CompletedTask;
        }


        public override void EventRegister(EventCenter<string> eventCenter)
        {
            if (_eventCenter != null)
            {
                _eventCenter.RemoveEvent("OnPointerUp");
            }

            _eventCenter = eventCenter;
            _eventCenter.AddEvent<Action<PointerEventData>>("OnPointerUp", _data =>
            {
                target = Physics2D.Raycast(_data.enterEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward, 15,
                    1 << LayerMask.NameToLayer("Enemy"));
            });
        }

        public override void Strengthen()
        {
            canStrengthen = false;
            _damage += 2;
            describe = _inflictDamage.GetDescription(_damage);
            _eventCenter.GetEvent<Action>("OnCardDataUpdated")?.Invoke();
        }
    }

    public class CardEvent_Ironclad_Bash : CardEvent_Abs
    {
        private int _damage = 8;
        private int _stack = 2;

        private InflictDamage _inflictDamage;
        private VulnerableState _vulnerableState;
        private RaycastHit2D target;

        public CardEvent_Ironclad_Bash()
        {
            point = 2;
            defaultDataPtah = "Assets/ScriptableObject/CardEvent/Ironclad_Bash.asset";
            _inflictDamage = new InflictDamage();
            _vulnerableState = new VulnerableState();

            describe = _inflictDamage.GetDescription(_damage) + "\n" + _vulnerableState.GetDescription(_stack);
        }


        public override UniTask Trigger(bool conditionCheck = true)
        {
            if (target.collider != null && (!conditionCheck || energy.SetEnergy(energy._energy - point)))
            {
                _inflictDamage.Trigger(null, target.collider.gameObject, _damage);
                _vulnerableState.Trigger(null, target.collider.gameObject, _stack);

                _eventCenter.GetEvent<Action>("OnTriggerCardEvent")?.Invoke();
            }
            else
            {
                _eventCenter.GetEvent<Action>("UnTriggerCardEvent")?.Invoke();
            }

            return UniTask.CompletedTask;
        }


        public override void EventRegister(EventCenter<string> eventCenter)
        {
            if (_eventCenter != null)
            {
                _eventCenter.RemoveEvent("OnPointerUp");
            }

            _eventCenter = eventCenter;
            _eventCenter.AddEvent<Action<PointerEventData>>("OnPointerUp", _data =>
            {
                target = Physics2D.Raycast(_data.enterEventCamera.ScreenToWorldPoint(_data.position), Vector3.forward, 15,
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
    }
}