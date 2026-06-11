using Cysharp.Threading.Tasks;

public interface INeedToInitializeAsync
{
    UniTask Init();
}