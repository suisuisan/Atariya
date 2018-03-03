using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using System;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(PlayerManager))]
[RequireComponent(typeof(EnemyManager))]

///
/// メインゲームマネージャ
///
public class MainGameManager : MonoBehaviour
{
    //ゲームステートのリアクティブプロパティを生成　初期値はready
    //ｺｲﾂでステートが変わったときにメッセージがとんで、処理を分散してかける
    public GameStateReactiveProperty CurrentState = new GameStateReactiveProperty(GameState.Initializing);

    //ゲームステートの利アクティブプロパティをリードするだめだけの変数
    public IReadOnlyReactiveProperty<GameState> CurrentGameState
    {
        get { return CurrentState; }
    }

    //ゲーム全体用のインプットイベントプロバイダ
    private IGMInputEventProvider _inputEventProvider;

    //privateの_inputEvent providerを渡すためだけのプロバイダ
    protected IGMInputEventProvider InputEventProvider { get { return _inputEventProvider; } }

    //プレイヤーマネージャ
    private PlayerManager _PlayerManager;

    //敵マネージャ
    private EnemyManager _EnemyManager;

    //オーディオマネージャ
    private AudioManager g_AudioManager;

    // Use this for initialization
    void Start()
    {
        //サウンドもらうよ
        g_AudioManager = AudioManager.Instance;
        
        //Q:
        //この辺登録諸々を、プログラマーまかせじゃなくて、アーティスト任せにできないだろうか
        //SEを読み込み
        //
        g_AudioManager.LoadSE(SEResouces.ReadyCount, "button04b");
        g_AudioManager.LoadSE(SEResouces.Hit1, "CarCrash_1");
        g_AudioManager.LoadSE(SEResouces.Hit2, "CarCrash_2");
        g_AudioManager.LoadSE(SEResouces.WallHit1, "Wall_Hit");
        g_AudioManager.LoadSE(SEResouces.WallHit2, "Wall_Hit2");

        //インプットマネージャもらうよ
        _inputEventProvider = GetComponent<IGMInputEventProvider>();

        //CurrentStateを購読して、変更が加えられたときに実行する関数を登録しておく
        //stateにはいまのstateが入っている
        CurrentState.Subscribe(state =>
        {
            OnStateChanged(state);
        });
        CurrentState.Value = GameState.Initializing;
    }

    //ステートが変更されたyo
    private void OnStateChanged(GameState nextstate)
    {
        switch (nextstate)
        {
            //初期化処理
            case GameState.Initializing:
                StartCoroutine(InitializeCoroutine());
                break;
            case GameState.OP:
                Op();
                break;
            //スタート前
            case GameState.Ready:
                ReadyMode();
                break;
            //スタート
            case GameState.Play:
                Play();
                break;
            //結果
            case GameState.Result:
                Result();
                break;
            default:
                break;
        }
    }

    /// <summary>
    /// 初期化コルーチン
    /// Q:　なぜ初期化だけコルーチン化しているのでしょ）
    /// </summary>
    /// <returns></returns>
    private IEnumerator InitializeCoroutine()
    {
        Debug.Log("Initialize GameManger");

        //プレイヤー生成＆管理クラス
        _PlayerManager = GetComponent<PlayerManager>();
        _PlayerManager.Initialize();
  
        //アクティブ
        _PlayerManager.CreatePlayer();

        //プレイヤーの立ち位置をフェンスの向こう側へずらす。
        _PlayerManager.Position(new Vector3(0,0,-2));

        //敵生成＆管理クラス
        _EnemyManager = GetComponent<EnemyManager>();

        //敵の生成を開始
        _EnemyManager.StartEmit();
  
        
        CurrentState.Value = GameState.OP;
        yield return null;
    }

    /// <summary>
    /// 準備完了シーン
    /// </summary>
    private void Op()
    {
        Debug.Log("OP GameManger");
        //操作があったときReadyに移動
        InputEventProvider.Next
            .Where(x=>CurrentGameState.Value == GameState.OP)
            .Where(x => x == true)
            .Subscribe(_=> CurrentState.Value = GameState.Ready);
    }

    /// <summary>
    /// 準備完了シーン
    /// </summary>
    private void ReadyMode()
    {
        Debug.Log("Ready GameManger");

        //5秒経過した場合
        Observable.Timer(TimeSpan.FromSeconds(5))
            .Where(_=>CurrentGameState.Value==GameState.Ready)
            .Subscribe(x=>
            {
                
                //playに移行する
                CurrentState.Value = GameState.Play;
                _PlayerManager.ChangeState(0,PlayerState.Normal);
            }).AddTo(this);
            
    }

    /// <summary>
    /// ゲーム実行中
    /// </summary>
    private void Play()
    {
        Debug.Log("Play GameManger");
        _PlayerManager.Position(new Vector3(0, 0, 2));

        //プレイヤー管理クラスからプレイヤーが全員死亡したこととを受け取った場合
        _PlayerManager.PlayersDied
            .Where(x=>x==true)
            .Subscribe(_=>
        {
            //Result
            CurrentState.Value = GameState.Result;
        }).AddTo(this);
        //resultにいこうする

    }

    /// <summary>
    /// 結果表示
    /// </summary>
    private void Result()
    {
        Debug.Log("Result GameManger");
        
        //ボタンが押された場合、このシーンを読み込みなおす
        InputEventProvider.Next
            .Where(x=>CurrentGameState.Value == GameState.Result)
            .Where(x=>x==true)
            .Subscribe(_ =>
            {
                ///Q:
                ///シーンをロードしなおして初期化するのは邪道だろうか
                ///
                SceneManager.LoadScene(0);
            }).AddTo(this);

    }
}