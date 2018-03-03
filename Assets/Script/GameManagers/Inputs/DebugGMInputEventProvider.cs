using UniRx;
using UniRx.Triggers;
using UnityEngine;

//input interface 
//baseplayercomponentを継承,IInputへのインターフェースをもつクラス
//Q:
//ゲーム全体へのInputだけど、こういう書き方で問題ないでしょうか
//
public class DebugGMInputEventProvider :MonoBehaviour ,IGMInputEventProvider
{
    //bool監視ができる
    private ReactiveProperty<bool> _Next = new ReactiveProperty<bool>(); 
    public IReadOnlyReactiveProperty<bool> Next { get { return _Next; } }

    //baseplayercomponent譲りの初期化処理
    public void Start()
    {
        var gm = GetComponent<MainGameManager>();

        //毎フレームのイベントを購読
        this.UpdateAsObservable()
            .Where(_=> gm.CurrentState.Value != GameState.Play)
            //インプットの中でInput を購読してキーボード情報を取得する
            .Select(_ => Input.GetKey(KeyCode.Space))
            .Subscribe(x => _Next.Value=x)
            .AddTo(this);
    }

}
