using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

public class EnemyReplace : BaseEnemyComponent
{
    //何回接触をがまんできるか。回数超えたらゲームオブジェクト入れ替え
    [SerializeField]
    private int deathmax = 3;

    //入れ替えしたいゲームオブジェクト
    [SerializeField]
    private GameObject replace;

    private int deathcount;
    private Collider2D _collider;
    private EnemyScore _score;

    protected override void OnStart()
    {
        
    }

    protected override void OnInitialize()
    {
        deathcount = 0;
        _collider = GetComponent<Collider2D>();
        _score = GetComponent<EnemyScore>();

        //何かに接触したとき
        _collider.OnCollisionEnter2DAsObservable()
            .Subscribe(x =>
            {
                //衝突対象のEnemyScoreを取得
                var pcore = x.gameObject.GetComponent<PlayerCore>();
                var rb = x.gameObject.GetComponent<Rigidbody2D>();
                
                //空でなければ（プレイヤーであるなら）
                if (pcore != null && rb != null)
                {
                    
                    if(deathcount > deathmax)
                    {
                        //入れ替えるオブジェクトをまずせいせい
                        var gm = Instantiate( replace, transform.position, transform.rotation );
                        
                        //入れ替えオブジェクトのRigidBodyを取得
                        var new_rb = gm.GetComponent<Rigidbody2D>();

                        //リジッドボディパラメーターをこぴー
                        new_rb.velocity = rb.velocity;
                        new_rb.angularVelocity = rb.angularVelocity;

                        //スコアボーナスモードへ突入
                        _score.BonusScore();

                        AudioManager.PlaySE(SEResouces.Hit1);
                        AudioManager.PlaySE(SEResouces.Hit1);

                        //自分自身を削除
                        Core.Kill();
                    }
                    deathcount++;
                }
            });
    }
}

