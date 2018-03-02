using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

public class PlayerScoreManager : BasePlayerComponent
{
    private Rigidbody2D rb;
    private int Score_total = 0;
    private ScoreManager g_scoremanager;

    protected override void OnStart()
    {
    }

    protected override void OnInitialize()
    {
        g_scoremanager = ScoreManager.Instance;

        rb = GetComponent<Rigidbody2D>();

        Score_total = 0;

    }

    /// <summary>
    /// スコア追加
    /// </summary>
    /// <param name="in_score"></param>
    public void AddScore(int in_score)
    {
        g_scoremanager.AddScore(Mathf.RoundToInt(in_score* rb.velocity.magnitude));
    }

}

