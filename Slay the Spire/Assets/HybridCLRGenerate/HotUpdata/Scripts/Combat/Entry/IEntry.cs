using System.Diagnostics.CodeAnalysis;
using Cysharp.Threading.Tasks;
using UnityEngine;

public interface IEntry
{
    UniTask Trigger(GameObject sender, [NotNull] GameObject receiver);
    string GetDescription();
}
