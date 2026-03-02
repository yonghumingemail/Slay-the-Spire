using System.Diagnostics.CodeAnalysis;
using UnityEngine;

public interface ICardEntry
{
    void Trigger(GameObject sender, [NotNull] GameObject receiver, int stack);
    string GetDescription(int stack);
}
