using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

/// <summary>
/// ゲームステート
/// </summary>
public enum GameState
{
    Initializing,
    OP,
    Ready,
    Play,
    Result
}

//Q:
//これはクラス？enum???
//enumをreactive properryにするためのクラスっていうところかしら？？？？
//
public class GameStateReactiveProperty : ReactiveProperty<GameState>
{
    //コンストラクタ
    public GameStateReactiveProperty()
    {
    }

    //引数月コンストラクタ
    public GameStateReactiveProperty(GameState initialValue)
        : base(initialValue)
    {
    }
}