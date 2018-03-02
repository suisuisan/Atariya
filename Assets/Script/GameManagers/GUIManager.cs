using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using System;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

/// <summary>
/// スコアマネージャ
/// </summary>
public class GUIManager : MonoBehaviour
{
    private IntReactiveProperty _Score = new IntReactiveProperty();

    public IReadOnlyReactiveProperty<int> Score { get { return _Score; } }

    ScoreManager g_scoremanager;

    [SerializeField]
    private Canvas OP;
    [SerializeField]
    private Canvas Ready;
    [SerializeField]
    private Canvas Game;
    [SerializeField]
    private Canvas Result;

    private Text gamescoretext;
    private Text scoretext;
    private Text counttext;

    private MainGameManager gm;

    /// <summary>
    /// 初期化
    /// </summary>
    public void Start()
    {
        var count = Ready.transform.Find("Count");
        if (count != null) counttext = count.GetComponent<Text>();

        var gamescore   = Game.transform.Find("Score");
        if (gamescore != null)gamescoretext = gamescore.GetComponent<Text>();

        var score = Result.transform.Find("Score");
        if (score != null) scoretext = score.GetComponent<Text>();

        _Score.Value = 0;

        gm = GetComponent<MainGameManager>();
        g_scoremanager = ScoreManager.Instance;

        g_scoremanager.Score
        .Subscribe(x=>
        {
           
            gamescoretext.text = "$" + x.ToString();
            scoretext.text = "$" + x.ToString();
        });

        gm.CurrentGameState.Subscribe(x =>
        {
            switch (x)
            {
                case GameState.OP:
                    OP.gameObject.SetActive(true);
                    Ready.gameObject.SetActive(false);
                    Game.gameObject.SetActive(false);
                    Result.gameObject.SetActive(false);
                    break;
                case GameState.Ready:
                    OP.gameObject.SetActive(false);
                    Ready.gameObject.SetActive(true);
                    Game.gameObject.SetActive(false);
                    Result.gameObject.SetActive(false);
                    StartCoroutine ("ReadyCount");
                    break;
                case GameState.Play:
                    OP.gameObject.SetActive(false);
                    Ready.gameObject.SetActive(false);
                    Game.gameObject.SetActive(true);
                    Result.gameObject.SetActive(false);
                    break;
                case GameState.Result:
                    OP.gameObject.SetActive(false);
                    Ready.gameObject.SetActive(false);
                    Game.gameObject.SetActive(false);
                    Result.gameObject.SetActive(true);
                    break;
            }
        });
    }

    // コルーチン  
    private IEnumerator ReadyCount()
    {
        // コルーチンの処理 
        for (int i = 5; i > 0; i--)
        {
            counttext.text = i.ToString();
            yield return new WaitForSeconds(1.0f);
        }
    }

}