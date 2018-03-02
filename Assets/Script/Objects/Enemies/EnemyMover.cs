using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

public class EnemyMover : BaseEnemyComponent {

    [SerializeField]
    //速度設定
    private Vector3 Velocity;

    protected override void OnStart()
    {
    }

    protected override void OnInitialize()
    {

        // Update is called once per frame
        this.UpdateAsObservable()
        .Subscribe(_ =>
        {
            //移動するよ
            transform.Translate(Velocity);
        });
	}
}
