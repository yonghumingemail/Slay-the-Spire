using System.Threading;
using Cysharp.Threading.Tasks;

public interface INeedToInitialize
{
    UniTask Initialize();
}