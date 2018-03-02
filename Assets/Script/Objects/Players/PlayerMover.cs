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

    //壁はさまり位置にいるか
    BoolReactiveProperty _isWallBug = new BoolReactiveProperty();

    public IReadOnlyReactiveProperty<bool> isStanding { get { return _isStanding; } }
    public IReadOnlyReactiveProperty<bool> isWallBug { get { return _isWallBug; } }

    private PlayerCharacterContoroller cc;

    protected override void OnStart()
    {

    }

    protected override void OnInitialize()
    {
        cc = GetComponent<PlayerCharacterContoroller>();

        InputEventProvider.LeftArrow
            .Where(x=>x==true)
            .Subscribe(x =>
            {
                //Debug.Log("Left");
                cc.Move(new Vector3(1f, 0f, 0f)* MoveSpeed);
            });

        InputEventProvider.RightArrow
            .Where(x => x == true)
            .Subscribe(x =>
            {
                //Debug.Log("Right");
                cc.Move(new Vector3(-1f, 0f, 0f)* MoveSpeed);
            });

        //バグモードの時の動きを制御する
        this.FixedUpdateAsObservable()
            .Where(_ => Core._PlayerState.Value == PlayerState.GabageBugMode)
            .DistinctUntilChanged()
            .Subscribe(_ =>
            {
                cc.ApplyForce(new Vector2(0f, 20f));
            });

        //バグモードの時の動きを制御する
        this.FixedUpdateAsObservable()
            .Where(_=>Core._PlayerState.Value==PlayerState.GabageBugMode)
            .Subscribe(_ =>
            {
                cc.ApplyRotateForce();
            }); 
            
    }
}

