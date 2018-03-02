using UniRx;
using UniRx.Triggers;
using UnityEngine;

//input interface 
//baseplayercomponentを継承,IInputへのインターフェースをもつクラス
public class DebugInputEventProvider : BasePlayerComponent, IInputEventProvider
{
    //bool監視ができる 右方向移動用
    private ReactiveProperty<bool> _RightArrow = new ReactiveProperty<bool>(); 
    public IReadOnlyReactiveProperty<bool> RightArrow { get { return _RightArrow; } }

    //bool監視ができる 左方向移動用
    private ReactiveProperty<bool> _LeftArrow = new ReactiveProperty<bool>();
    public IReadOnlyReactiveProperty<bool> LeftArrow { get { return _LeftArrow; } }

    //baseplayercomponent譲りの初期化処理
    protected override void OnInitialize()
    {
        //毎フレームのイベントを購読
        this.UpdateAsObservable()
            //インプットの中でInput RightArrowを購読してキーボード情報を取得する
            .Select(_ => Input.GetKey(KeyCode.D))
            //RightArrowにSetし、強制的に通知させる
            .Subscribe(x => _RightArrow.Value=x);

        this.UpdateAsObservable()
            //インプットの中でInput LeftArrowを購読してキーボード情報を取得する
            .Select(_ => Input.GetKey(KeyCode.A))
            //_LeftArrowにSetし、強制的に通知させる
            .Subscribe(x => _LeftArrow.Value = x);
    }

}
