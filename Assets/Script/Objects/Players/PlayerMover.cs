using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

public class PlayerMover : BasePlayerComponent
{
    [SerializeField]
    private float MoveSpeed = 80.0f;

    //地面（死亡する地面）にたっているか
    BoolReactiveProperty _isStanding = new BoolReactiveProperty();

    //壁はさまり位置にいるか（未実装）
    BoolReactiveProperty _isWallBug = new BoolReactiveProperty();

    public IReadOnlyReactiveProperty<bool> isStanding { get { return _isStanding; } }
    public IReadOnlyReactiveProperty<bool> isWallBug { get { return _isWallBug; } }

    private PlayerCharacterContoroller cc;

    /// <summary>
    /// スタート
    /// </summary>
    protected override void OnStart()
    {

    }

    /// <summary>
    /// 初期化だよ
    /// </summary>
    protected override void OnInitialize()
    {
        //コントローラ
        cc = GetComponent<PlayerCharacterContoroller>();

        //左矢印キー
        InputEventProvider.LeftArrow
            .Where(x=>x==true)
            .Subscribe(x =>
            {
                cc.Move(new Vector3(1f, 0f, 0f)* MoveSpeed);
            });

        //右矢印キー
        InputEventProvider.RightArrow
            .Where(x => x == true)
            .Subscribe(x =>
            {
                cc.Move(new Vector3(-1f, 0f, 0f)* MoveSpeed);
            });

        //バグモードの時の動きを制御する
        this.FixedUpdateAsObservable()
            .Where(_ => Core._PlayerState.Value == PlayerState.GabageBugMode)
            .DistinctUntilChanged()
            .Subscribe(_ =>
            {
                cc.ApplyForce(new Vector2(0f, 50f));
            }).AddTo(this);

        //バグモードの時の動きを制御する
        this.FixedUpdateAsObservable()
            .Where(_=>Core._PlayerState.Value==PlayerState.GabageBugMode)
            .Subscribe(_ =>
            {
                cc.ApplyRotateForce();
            }).AddTo(this); ;   
    }

    //相対座標で移動させます
    public void RelativePosition(Vector3 in_pos)
    {
        transform.position += in_pos;
    }
}

