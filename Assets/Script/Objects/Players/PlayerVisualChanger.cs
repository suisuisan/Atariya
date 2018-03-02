using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using UniRx.Triggers;

public class PlayerVisualChanger : BasePlayerComponent
{
    [SerializeField]
    private GameObject Gabage;
    [SerializeField]
    private GameObject last_gabage;

    private PlayerCore _pc;

    private GameObject _gabage;

    protected override void OnStart()
    {
        _gabage = null;
    }

    protected override void OnInitialize()
    {
        _pc = GetComponent<PlayerCore>();

        this.UpdateAsObservable()
            .Where(_=> _pc._PlayerState.Value==PlayerState.GabageBugMode)
            .DistinctUntilChanged()
            .Subscribe(_x => 
            {
                _gabage = Instantiate(Gabage);
            });

        this.UpdateAsObservable()
            .Where(_=> _gabage!=null)
            .Subscribe(_x =>
            {
                if (_pc._PlayerState.Value == PlayerState.GabageBugMode)
                {
                    _gabage.transform.position = transform.position;
                    _gabage.transform.rotation = transform.rotation;
                }else
                {
                    
                    Destroy(_gabage);
                    _gabage = null;
                }

            });


    }

}

