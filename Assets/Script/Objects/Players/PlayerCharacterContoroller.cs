using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

public class PlayerCharacterContoroller : BasePlayerComponent
{
    //最大速度
    [SerializeField]
    private float velmax = 5f;

    //停止判定速度
    [SerializeField]
    private float velmin = 0.02f;

    //ランダム回転速度
    [SerializeField]
    private float randrot = 10.0f;

    //地面（死亡する地面）にたっているか
    private ReactiveProperty<bool> _isGrounded = new BoolReactiveProperty(false);

    public IReadOnlyReactiveProperty<bool> IsGrounded { get { return _isGrounded; } }

    //ほぼ停止しているか
    private ReactiveProperty<bool> _isStopped = new BoolReactiveProperty(true);

    public IReadOnlyReactiveProperty<bool> IsStopped { get { return _isStopped; } }

    //Rigidbody
    private Rigidbody2D _rigidbody;
    private CharacterController _controller;
    private Collider2D _collider;

    //このフレームでの合計移動dir
    private Vector3 inputDirection;

    /// <summary>
    /// 指定した方向へ移動
    /// </summary>
    /// <param name="velocity">Velocity.</param>
    public void Move(Vector2 velocity)
    {
        var dotvel = Vector2.Dot(_rigidbody.velocity.normalized, velocity.normalized);

        if(_rigidbody.velocity.magnitude == 0)
        {
            inputDirection = velocity;
        }
        //一定速度以上で、ないせきとって同じ方向だったら加速しない
        else if (dotvel < 0.8 || _rigidbody.velocity.magnitude < velmax)
        {
            inputDirection = velocity;
        }
    }

    /// <summary>
    /// 特定のベクトルへチカラをくわえる
    /// </summary>
    /// <param name="force">Force.</param>
    public void ApplyForce(Vector3 force)
    {
        Observable.NextFrame(FrameCountType.FixedUpdate)
            .Subscribe(_ => _rigidbody.AddForce(force, ForceMode2D.Force));
        
    }

    /// <summary>
    /// ランダムな回転をあたえる
    /// </summary>
    public void ApplyRotateForce()
    {
        //ランダムな方向に回転を加える
        float force = Random.value * randrot;
        Observable.NextFrame(FrameCountType.FixedUpdate)
            .Subscribe(_ => _rigidbody.AddTorque(-force+(force / 2.0f), ForceMode2D.Force));
    }

    protected override void OnStart()
    {
    }

    protected override void OnInitialize()
    {
        _rigidbody = GetComponent<Rigidbody2D>();
        _controller = GetComponent<CharacterController>();
        _collider = GetComponent<Collider2D>();

        _isGrounded.Value = false;
        _isStopped.Value = false;

        this.FixedUpdateAsObservable()
            .Subscribe(_ =>
            {
                _rigidbody.AddForce(inputDirection, ForceMode2D.Force);
                _isStopped.Value = CheckStopped();
                inputDirection = new Vector3(0, 0, 0);
            });

        //地面に接触したとき
        _collider.OnCollisionEnter2DAsObservable()
            .Subscribe(x=>
            {
                if (x.gameObject.layer == 8)
                {
                    _isGrounded.Value = true;
                }
                else
                {
                    _isGrounded.Value = false;
                }
            });
    }

    /// <summary>
    /// 停止しているかいないか判定
    /// </summary>
    /// <returns></returns>
    private bool CheckStopped()
    {
        bool OUT = false;

        if ( _rigidbody.velocity.magnitude < velmin )
        {
            OUT = true;
        }

        return OUT;
    }
}

