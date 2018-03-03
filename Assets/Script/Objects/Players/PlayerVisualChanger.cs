using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

public class PlayerVisualChanger : BasePlayerComponent
{
    //ステートによってプレイヤーの見た目を変更する処理
    [SerializeField]
    private GameObject Gabage;
    [SerializeField]
    private GameObject last_gabage;

    private PlayerCore _pc;
    private Rigidbody2D _rb;

    private GameObject _gabage;

    protected override void OnStart()
    {
        _gabage = null;
    }

    protected override void OnInitialize()
    {
        _pc = GetComponent<PlayerCore>();
        _rb = GetComponent < Rigidbody2D>();

        //プレイヤーがゴミ箱バグモードへ突入しているのならゴミ箱くっつける
        this.UpdateAsObservable()
            .Where(_=> _pc._PlayerState.Value==PlayerState.GabageBugMode)
            .DistinctUntilChanged()
            .Subscribe(_x => 
            {
                _gabage = Instantiate(Gabage);
            });

        //ゴミ箱のいちを常に自分にくっつける
        this.UpdateAsObservable()
            .Where(_=> _gabage!=null)
            .Subscribe(_x =>
            {
                if (_pc._PlayerState.Value == PlayerState.GabageBugMode)
                {
                    _gabage.transform.position = transform.position;
                    _gabage.transform.rotation = transform.rotation;
                }else
                {
                    //Q:
                    //ここで生成していいいんだろうか？？？？？？？？クラスの役割が変わってしまっている気が。
                    //
                    //物理挙動ですっとんでいくごみ箱生成
                    var gomi = Instantiate(last_gabage,transform.position,transform.rotation);
                    var gomirb = gomi.GetComponent<Rigidbody2D>();
                    
                    //物理性質を受け継がせる
                    gomirb.velocity = _rb.velocity;
                    gomirb.angularVelocity = _rb.angularVelocity;

                    //プレイヤーにくっついてたゴミ箱除去
                    Destroy(_gabage);
                    _gabage = null;
                }

            });


    }

}

