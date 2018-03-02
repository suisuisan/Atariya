using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

public class EnemyModeChangerforPlayer : BaseEnemyComponent
{
    [SerializeField]
    private int deathmax = 3;
    [SerializeField]
    private GameObject replace;

    private int deathcount;
    private Collider2D _collider;

    protected override void OnStart()
    {
        
    }

    protected override void OnInitialize()
    {
        deathcount = 0;
        _collider = GetComponent<Collider2D>();

        //何かに接触したとき
        _collider.OnCollisionEnter2DAsObservable()
            .Subscribe(x =>
            {
                //衝突対象のEnemyScoreを取得
                var pcore = x.gameObject.GetComponent<PlayerCore>();

                //空でなければ
                if (pcore != null)
                {
                    
                    //モードチェンジ
                    if (pcore._PlayerState.Value != PlayerState.GabageBugMode)
                    {
                        if(deathcount > deathmax)
                        {
                            pcore.ChangeState(PlayerState.GabageBugMode);
                            Destroy(gameObject);
                        }
                        deathcount++;
                    }
                }
            });
    }
}

