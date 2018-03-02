using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

public enum GameState
{
    Initializing,
    OP,
    Ready,
    Play,
    Result
}

//これはクラス？enum???
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