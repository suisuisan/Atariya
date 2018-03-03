using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

/// <summary>
/// プレイヤの各種Componentの基底クラス
/// </summary>
/// abstract : 抽象化クラス
public abstract class BaseEnemyComponent : MonoBehaviour
{
    //プレイヤーコアコンポーネント
    protected EnemyCore Core;
    protected AudioManager AudioManager;

    /// <summary>
    /// 初期化処理
    /// </summary>
    private void Start()
    {
        //コアにプレイヤーコアをいれるよ
        Core = GetComponent<EnemyCore>();

        //オーディオマネージャ
        AudioManager = AudioManager.Instance;

        //Coreの情報が確定したら初期化を呼び出す
        Core.OnInitializeAsync
            .Subscribe(_=>OnInitialize());

        OnStart();
    }

    /// <summary>
    /// Start() と同義
    /// </summary>
    protected virtual void OnStart() { }

    /// <summary>
    /// プレイヤ情報の初期化が完了した時に実行される
    /// </summary>
    protected abstract void OnInitialize();
}