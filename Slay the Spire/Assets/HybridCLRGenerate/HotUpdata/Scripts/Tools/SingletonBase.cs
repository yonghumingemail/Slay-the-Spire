using UnityEngine;

namespace Z_Tools
{
    public abstract class SingletonBase<T> where T : SingletonBase<T>, new()
    {

        private static T instance;
        public static T Instance
        {
            get
            {
                if (instance != null) return instance;
                
                instance = new T();
                instance.InitializeInternalData();
                return instance;
            }
        }
        protected virtual void InitializeInternalData() { }
    }


    public abstract class SingletonBaseMono<T> : MonoBehaviour where T : SingletonBaseMono<T>
    {
        private static T instance;
        public static T Instance => instance;

        protected virtual void Initialize()
        {
            if (instance == null)
            {
                instance = (T)this;
                DontDestroyOnLoad(gameObject);
            }
            else
            {
                Debug.Log("单例对象不唯一：" + gameObject.name);
                Destroy(this);
            }

        }
    }   
}
