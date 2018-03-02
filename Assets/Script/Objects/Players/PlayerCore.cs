using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;
using System;

public class PlayerCore : MonoBehaviour
{
    //プレーヤーステート
    public PlayerStateReactiveProperty _PlayerState = new PlayerStateReactiveProperty(PlayerState.Ready);

    //rigidbodyコンポーネント
    private Rigidbody2D _rigidbody;
    private PlayerCharacterContoroller _cc;

    public void Activate(bool in_bool)
    {
        _rigidbody.simulated = in_bool;

    }

    public void ChangeState(PlayerState in_state )
    {
        _PlayerState.Value = in_state;
    }

    //なんか特殊なSubject
    private readonly AsyncSubject<int> _onInitializeAsyncSubject = new AsyncSubject<int>();
    public IObservable<int> OnInitializeAsync { get { return _onInitializeAsyncSubject; } }
    
    /// <summary>
    /// 初期化
    /// </summary>
    public void Initialize()
    {
        ChangeState(PlayerState.Ready);

        _rigidbody = GetComponent<Rigidbody2D>();
        _cc = GetComponent<PlayerCharacterContoroller>();

        //CurrentStateを購読して、変更が加えられたときに実行する関数を登録しておく
        //stateにはいまのstateが入っている
        _PlayerState.Subscribe(state =>
        {
            OnStateChanged(state);
        });

        //死ぬ条件
        this.UpdateAsObservable()
            .Where(x=>_PlayerState.Value==PlayerState.Normal)
            .Where(x=>_cc.IsGrounded.Value==true)
            .Where(x=>_cc.IsStopped.Value==true)
            .Subscribe(_=>{
                _PlayerState.Value = PlayerState.Dead;
            });

        //ここがいまいちよくわからない。
        _onInitializeAsyncSubject.OnNext(1);
        _onInitializeAsyncSubject.OnCompleted();
    }

    /// <summary>
    /// ステートが変更されたyo
    /// </summary>
    /// <param name="nextstate"></param>
    private void OnStateChanged(PlayerState nextstate)
    {
        switch (nextstate)
        {
            //移動不可能モード
            case PlayerState.Disable:
                Debug.Log("Player:DisableMode");
                break;
            //左右にしか移動できないモード
            case PlayerState.Ready:
                Debug.Log("Player:ReadyMode");
                Activate(true);
                _rigidbody.gravityScale = 0.0f;

                break;
            //通常に操作できるモード
            case PlayerState.Normal:
                Debug.Log("Player:NormalMode");
                Activate(true);
                _rigidbody.gravityScale = 1.0f;

                break;
            //ゴミ箱バグモード
            case PlayerState.GabageBugMode:
                //ビジュアルをゴミ箱付きに変更
                Debug.Log("Player:GabageBugMode");
                //指定秒数後に通常モード復帰
                Observable.Timer(TimeSpan.FromSeconds(5))
                    .Subscribe(___ => _PlayerState.Value = PlayerState.Normal);
                break;
            //壁バグモード
            case PlayerState.WallBugMode:
                Debug.Log("Player:WallBugModeMode");
                //操作はできない。
                //ビジュアルはそのまま
                //メッセージがきたら通常モード復帰

                break;
            case PlayerState.Dead:
                //死亡
                Debug.Log("Player:DeadMode");
                Activate(false);
                break;
            default:
                break;
        }
    }
}

