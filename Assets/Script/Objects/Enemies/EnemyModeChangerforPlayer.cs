using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

/// <summary>
/// 接触したプレイヤーのモードを変更させる
/// </summary>
public class EnemyModeChangerforPlayer : BaseEnemyComponent
{
    //何回接触をがまんできるか。回数超えたらモード切替に突入。
    [SerializeField]
    private int deathmax = 3;

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
        //Q:
        //なんかIF文いっぱいでイヤ・・・
        //
        _collider.OnCollisionEnter2DAsObservable()
            .Subscribe(x =>
            {
                //衝突対象のPlayerCoreを取得
                var pcore = x.gameObject.GetComponent<PlayerCore>();

                //空であればプレイヤーではない
                if (pcore != null)
                {
                    //接触相手はプレイヤーなのでモードを強制的に変えてあげます。
                    //モードチェンジの条件
                    if (pcore._PlayerState.Value != PlayerState.GabageBugMode)
                    {
                        if(deathcount > deathmax)
                        {
                            //強制的に変更
                            _score.BonusScore(5.0f);

                            //相手のステートをゴミ箱モードに変更して
                            pcore.ChangeState(PlayerState.GabageBugMode);
                            
                            //自分は死にます
                            Core.Kill();
                        }
                        deathcount++;
                    }
                }
            });
    }
}

