using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

public class PlayerManager : MonoBehaviour
{
    [SerializeField]
    private GameObject _prefab = null;
    [SerializeField]
    private Vector3 _position = new Vector3(0f,0f,0f);

    //プレイヤーコア
    private ReactiveCollection<PlayerCore> _players = new ReactiveCollection<PlayerCore>();

    private ScoreManager _ScoreManager;

    //リード用
    public IReadOnlyReactiveCollection<PlayerCore> Players
    {
        get { return _players; }
    }

    //プレイヤー全員が死亡しているかのフラグ
    private ReactiveProperty<bool> _PlayersDied = new ReactiveProperty<bool>(false);
    public IReadOnlyReactiveProperty<bool> PlayersDied
    {
        get { return _PlayersDied; }
    }

    /// <summary>
    /// 初期化
    /// </summary>
    public void Initialize()
    {
        //_ScoreManager = GetComponent<ScoreManager>();
        //_ScoreManager.Initialize();

        //値が入っていたら初期化して消す
        for (int i=0;i <_players.Count; i++)
        {
            Destroy(_players[i].gameObject);
        }
        _players.Clear();

        //だれもしんでませーん
        _PlayersDied.Value = false;

        //死亡状態の人数を数える（複数プレイヤー前提）
        this.UpdateAsObservable()
            .Where(_=>_players.Count != 0)
            .Subscribe(_=> 
            {
                //プレイヤー死人
                int isDead = 0;

                //プレイヤーステートがDeadのものを数える
                for (int i = 0; i < _players.Count; i++)
                {
                    if( _players[i]._PlayerState.Value == PlayerState.Dead )
                    {
                        isDead++;
                    }
                }

                //全員死亡しました
                if(isDead == _players.Count) _PlayersDied.Value = true;
            });
    }

    //アクティブ化
    bool Activate(int in_num, bool in_bool )
    {
        if (in_num >= _players.Count)
        {
            Debug.LogError("引数はプレイヤー人数を超えています。");
            return false;
        }

        _players[in_num].Activate(in_bool);

        return true;

    }

    public bool ChangeState(int in_num, PlayerState in_state )
    {
        if (in_num >= _players.Count)
        {
            Debug.LogError("引数はプレイヤー人数を超えています。");
            return false;
        }
        _players[in_num].ChangeState(in_state);
        return true;
    }

    //プレイヤーを生成する
    public void CreatePlayer()
    {
        //インスタンス化してシーンに生成
        var go = Instantiate(_prefab, _position, Quaternion.identity);

        //プレイヤーコアを取得
        var core = go.GetComponent<PlayerCore>();

        //コアの初期化
        core.Initialize();

        //プレイヤーを登録しておく
        _players.Add(core);

    }

    //プレイヤーの移動
    public void Position( Vector3 in_pos )
    {
        //移動させるよ
        for(int i=0; i<_players.Count; i++)
        {
            var mv = _players[i].GetComponent<PlayerMover>();
            if (mv!=null)
            {
                mv.RelativePosition(in_pos);
            }
        }
    }
}

