using System.Diagnostics.CodeAnalysis;
using Cysharp.Threading.Tasks;
using UnityEngine;

public interface IEntry
{
    void Trigger(GameObject sender, GameObject receiver);
    string GetDescription();
}
