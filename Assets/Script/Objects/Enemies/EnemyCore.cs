using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

public class EnemyCore : MonoBehaviour
{
    //なんか特殊なSubject
    private readonly AsyncSubject<int> _onInitializeAsyncSubject = new AsyncSubject<int>();
    public IObservable<int> OnInitializeAsync { get { return _onInitializeAsyncSubject; } }

    //オーデオ
    AudioManager g_AudioManager;

    public void Start()
    {
        //サウンドシングルトンからもらうよ
        g_AudioManager = AudioManager.Instance;

        //値が変更されたときに呼び出す
        //この場合はＸ座標が一定値を超えた場合消去する
        this.ObserveEveryValueChanged(obj => obj.transform.position.x)
            .Where(x => x > 19)
            .Subscribe(__=>Kill())
            .AddTo(this);

        //Q:
        //ここがいまいちよくわからない。
        //一応Initiateが呼ばれるのだけはわかる
        //
        _onInitializeAsyncSubject.OnNext(1);
        _onInitializeAsyncSubject.OnCompleted();
    } 

    //自分自身を削除する
    public void Kill()
    {
        Destroy(this.gameObject);
    }
}

