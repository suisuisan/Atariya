using UniRx;
using UnityEngine;

//input interface
public interface IGMInputEventProvider
{
    IReadOnlyReactiveProperty<bool> Next { get; }//ここのgetいる？
}
