using UnityEngine;

namespace Z_Tools
{
    public class SingletonBase<T> where T : SingletonBase<T>, new()
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


    public class SingletonBaseMono<T> : MonoBehaviour where T : SingletonBaseMono<T>, new()
    {
        private static T instance;
        public static T Instance => instance;

        protected virtual void Awake()
        {
            if (instance == null)
            {
                instance = (T)this;
                DontDestroyOnLoad(gameObject);
            }
            else
            {
                Debug.Log("µ•¿˝Ω≈±æ÷ÿ∏¥π“‘ÿ " + gameObject.name);
                Destroy(this);
            }

        }
    }   
}
