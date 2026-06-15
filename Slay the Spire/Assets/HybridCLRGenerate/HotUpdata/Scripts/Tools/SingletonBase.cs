namespace Z_Tools
{
    public abstract class SingletonBase<T> where T : class, new()
    {
        private static T instance;

        public static T Instance
        {
            get
            {
                if (instance != null) return instance;

                instance = new T();
                return instance;
            }
        }
        
    }
}