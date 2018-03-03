using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;
using System;

//コリジョンが一個ずつもつ加点スクリプト
//Q:
//敵の中に子供として複数コリジョンがあるので、EnemyBaseComponentを継承できませんでした
//
public class EnemyScore : MonoBehaviour {

    [SerializeField]
    //スコア設定
    private int _Score;

    [SerializeField]
    private SEResouces[] SERes;

    public int Score { get { return _Score; } }
    private Collider2D _collider;

    //オーデオ
    AudioManager g_AudioManager;
    ScoreManager g_scoremanager;

    private void Start()
    {
        g_scoremanager = ScoreManager.Instance;

        _collider = GetComponent<Collider2D>();

        //サウンドシングルトンからもらうよ
        g_AudioManager = AudioManager.Instance;

        //何かに接触したときの通常加点
        _collider.OnCollisionEnter2DAsObservable()
            .Subscribe(x =>
            {
                //接触音再生
                if (SERes.Length != 0)
                {
                    int count = Mathf.FloorToInt((UnityEngine.Random.value * 100) % SERes.Length);
                    g_AudioManager.PlaySE(SERes[count]);
                }
                if (x.gameObject.GetComponent<PlayerCore>()!=null) {
                
                    //加点する
                    g_scoremanager.AddScore(Mathf.FloorToInt(_Score));
                }
            });
    }

    /// <summary>
    /// 他コンポーネントからなんらかのボーナス得点を与えたいとき5秒間ボーナスタイム
    /// //ここであっているのであろうか。わからん
    /// </summary>
    public void BonusScore(float in_bonuscoef=2.0f)
    {
        g_scoremanager.BonusScore();
    }
}
