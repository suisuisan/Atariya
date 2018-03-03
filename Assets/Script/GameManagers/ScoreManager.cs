using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using System;
using UnityEngine.SceneManagement;

/// <summary>
/// スコアマネージャ（シングルトン）
/// </summary>
public class ScoreManager : SingletonMonoBehaviour<ScoreManager>
{
    //ボーナス時間
    [SerializeField]
    private int bonustime = 5;

    //スコア
    private IntReactiveProperty _Score = new IntReactiveProperty();
    public IReadOnlyReactiveProperty<int> Score { get { return _Score; } }
    
    //ボーナス係数
    private float bonus_coef = 1.0f;

    //ボーナスフラグ
    private  BoolReactiveProperty _isBonus = new BoolReactiveProperty();
    public IReadOnlyReactiveProperty<bool> isBonus { get { return _isBonus; } }

    /// <summary>
    /// 初期化
    /// </summary>
    public void Start()
    {
        _Score.Value = 0;
    }

    /// <summary>
    /// スコアを追加する
    /// </summary>
    /// <param name="in_score"></param>
    public void AddScore( int in_score )
    {
        _Score.Value += Mathf.FloorToInt(in_score * bonus_coef*100);
    }

    /// <summary>
    /// ボーナス得点を与えたいときボーナスタイム
    /// </summary>
    public void BonusScore(float in_bonuscoef = 1.25f)
    {
        _isBonus.Value = true;
        bonus_coef = in_bonuscoef;

        //Q:
        //ここ、連続でタイマー起動すると最初のタイマーが終わった時点で全部Falseになっちゃうーーー
        //すでに起動しているタイマーを検地して上書きできないでしょうか
        //
        Observable.Timer(TimeSpan.FromSeconds(bonustime))
            .Subscribe(_ =>
            {
                bonus_coef = 1.0f;
                _isBonus.Value = false;
            })
            .AddTo(this);
    }
}