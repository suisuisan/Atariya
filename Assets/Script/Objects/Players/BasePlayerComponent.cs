using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

/// <summary>
/// プレイヤの各種Componentの基底クラス
/// </summary>
/// abstract : 抽象化クラス
public abstract class BasePlayerComponent : MonoBehaviour
{
    //input
    private IInputEventProvider _inputEventProvider;

    //privateの_inputEvent providerを渡すためだけのプロバイダ
    protected IInputEventProvider InputEventProvider { get { return _inputEventProvider; } }

    //プレイヤーコアコンポーネント
    protected PlayerCore Core;

    //初期化処理
    private void Start()
    {
        //コアにプレイヤーコアをいれるよ
        Core = GetComponent<PlayerCore>();

        //インプットイベントプロバイダーを取得
        _inputEventProvider = GetComponent<IInputEventProvider>();

        //Coreの情報が確定したら初期化を呼び出す
        Core.OnInitializeAsync
            .Subscribe(_ => OnInitialize());

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