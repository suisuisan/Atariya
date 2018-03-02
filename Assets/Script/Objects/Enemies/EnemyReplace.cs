using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

public class EnemyReplace : BaseEnemyComponent
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
                var rb = x.gameObject.GetComponent<Rigidbody2D>();
                
                //空でなければ
                if (pcore != null && rb != null)
                {
                    
                    if(deathcount > deathmax)
                    {
                        var gm = Instantiate( replace, transform.position, transform.rotation );
                        var new_rb = gm.GetComponent<Rigidbody2D>();

                        new_rb.velocity = rb.velocity;
                        new_rb.angularVelocity = rb.angularVelocity;

                        Destroy(gameObject);
                    }
                    deathcount++;
                }
            });
    }
}

