using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

public class EnemyScore : MonoBehaviour {

    [SerializeField]
    //スコア設定
    private int _Score;
    public int Score { get { return _Score; } }
    private Collider2D _collider;

    private void Start()
    {
        _collider = GetComponent<Collider2D>();

        //何かに接触したとき
        _collider.OnCollisionEnter2DAsObservable()
            .Subscribe(x =>
            {
                //衝突対象のEnemyScoreを取得
                var escore = x.gameObject.GetComponent<PlayerScoreManager>();
                //空でなければ
                if (escore != null)
                {
                    //加点する
                    escore.AddScore(_Score);
                }
            });
    }
}
