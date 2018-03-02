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
    public IntReactiveProperty _Score = new IntReactiveProperty();

    public IReadOnlyReactiveProperty<int> Score { get { return _Score; } }    

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
        _Score.Value += in_score;
        Debug.Log(_Score.Value);
    }

}