using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;
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

    //スコアア
    ScoreManager g_scoremanager;

    //オーデオ
    AudioManager g_AudioManager;

    [SerializeField]
    private Canvas OP;
    [SerializeField]
    private Canvas Ready;
    [SerializeField]
    private Canvas Game;
    [SerializeField]
    private Canvas Result;
    [SerializeField]
    private float angularFrequency = 5f;
    // 30FPS
    readonly float DeltaTime = 0.0333f;

    private Text titletext;
    private Text gamescoretext;
    private Text scoretext;
    private Text bonustext;
    private Text counttext;

    private MainGameManager gm;

    /// <summary>
    /// 初期化
    /// </summary>
    public void Start()
    {
        //Q:
        //UIの中のTextの探し方がよろしくない木がする。名前かわったらOUTなんですけど・・・
        //どうしたらよいだろうか
        //

        var title = OP.transform.Find("PressSpace");
        if (title != null) titletext = title.GetComponent<Text>();

        //UIをみつける
        var count = Ready.transform.Find("Count");
        if (count != null) counttext = count.GetComponent<Text>();

        //UIをみつける
        var gamescore = Game.transform.Find("Score");
        if (gamescore != null) gamescoretext = gamescore.GetComponent<Text>();

        //UIをみつける
        var bonus = Game.transform.Find("Bonustime");
        if (bonus != null) bonustext = bonus.GetComponent<Text>();

        //UIをみつける
        var score = Result.transform.Find("Score");
        if (score != null) scoretext = score.GetComponent<Text>();

        //スコアは0
        _Score.Value = 0;

        //サウンドシングルトンからもらうよ
        g_AudioManager = AudioManager.Instance;

        //SEを読み込み
        g_AudioManager.LoadSE(SEResouces.ReadyCount, "button04b");

        gm = GetComponent<MainGameManager>();
        g_scoremanager = ScoreManager.Instance;

        //得点が更新されたらUIも更新するReactiveよ
        g_scoremanager.Score
        .Subscribe(x =>
        {
            gamescoretext.text = "$" + x.ToString();
            scoretext.text = "$" + x.ToString();
        });

        //得点がボーナスモードにはいったらUI更新suruReactiveよ
        g_scoremanager.isBonus
        .Subscribe(x =>
        {
            if (bonustext != null)
            {
                if (x == true)
                {
                    bonustext.enabled = true;
                }
                else
                {
                    bonustext.enabled = false;
                }
            }
        });

        //ゲームステートがかわったときにUI表示を変更する
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
                    StartCoroutine("ReadyCount");
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

        //ゲームステートがOPだったら文字を点滅させる処理
        float time = 0.0f;
        Observable.Interval(TimeSpan.FromSeconds(DeltaTime))
            .Where(x => gm.CurrentGameState.Value == GameState.OP)
            .Subscribe(_ =>
            {
                time += angularFrequency * DeltaTime;
                var color = titletext.color;
                color.a = Mathf.Sin(time) * 0.5f + 0.5f;
                titletext.color = color;
            }).AddTo(this);
    }

    // コルーチン  レディカウント奴
    private IEnumerator ReadyCount()
    {
        // コルーチンの処理 カウント処理
        for (int i = 5; i > 0; i--)
        {
            //数字のカウント
            counttext.text = i.ToString();

            //カウントSEならすよ
            g_AudioManager.PlaySE(SEResouces.ReadyCount);

            //１秒まっておくれ
            yield return new WaitForSeconds(1.0f);
        }
    }

}