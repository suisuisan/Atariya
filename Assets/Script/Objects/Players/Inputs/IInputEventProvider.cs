using UniRx;
using UnityEngine;

//input interface
public interface IInputEventProvider
{
    IReadOnlyReactiveProperty<bool> RightArrow { get; }//ここのgetいる？
    IReadOnlyReactiveProperty<bool> LeftArrow { get; }//ここのgetいる？
}
