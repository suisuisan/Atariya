using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using System;

public class EnemyManager : MonoBehaviour
{
    //敵オブジェクトの位置
    [SerializeField]
    private Vector3 position;

    //敵ゲームオブジェクト（複数）
    [SerializeField]
    private EnemyCore[] enemies;

    //敵のでる時間間隔ms
    [SerializeField]
    private int enemyinterval = 1400;

    //敵をランダムに生成開始
    public void StartEmit()
    {
        Observable.Interval(TimeSpan.FromMilliseconds(enemyinterval)).Subscribe(x =>
        {
            //ランダムの値を取得
            var enemynum = UnityEngine.Random.Range(0, enemies.Length);

            //適当に出現させる
            var obj = Instantiate( enemies[enemynum] );

            //コアの初期化
            var core = obj.GetComponent<EnemyCore>();

        }).AddTo(this);
    }
}
