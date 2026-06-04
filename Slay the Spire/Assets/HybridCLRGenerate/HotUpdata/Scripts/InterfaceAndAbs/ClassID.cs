public abstract class ClassID<T>
{
    public static int ID { get; } = typeof(T).GetHashCode();
}