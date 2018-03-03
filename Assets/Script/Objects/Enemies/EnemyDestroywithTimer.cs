using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;
using System;

/// <summary>
/// タイマーで自分を殺す奴ーーーｗｗｗ
/// 亜タッチしてるゲームオブジェクトは指定時間後に死にます
/// </summary>
public class EnemyDestroywithTimer : BaseEnemyComponent {

    [SerializeField]
    //死亡時間設定
    private float DestroyTime = 5.0f;

    protected override void OnStart()
    {
    }

    protected override void OnInitialize()
    {

        // Update is called once per frame
        Observable.Timer(TimeSpan.FromSeconds(DestroyTime))
        .Subscribe(_ =>
        {
            //わしは５秒後に死にますじゃい
            Core.Kill();
        });
	}
}
