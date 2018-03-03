using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using UniRx;

//カスタムReactive Properryを作成する
//https://qiita.com/dsgarage/items/621bd3b31b78f33703eb

public enum PlayerState
{
    Disable,        //移動ができないモード
    Ready,          //左右しか移動できないモード
    Normal,         //通常操作モード
    GabageBugMode,  //ゴミ箱バグモード
    WallBugMode,     //壁はさまりモード
    Dead            //死亡
}

//カスタムクラスのリアクティブプロパティのため
public class PlayerStateReactiveProperty : ReactiveProperty<PlayerState>
{
    public PlayerStateReactiveProperty() { }
    public PlayerStateReactiveProperty(PlayerState initialValue) : base (initialValue) { }
}

