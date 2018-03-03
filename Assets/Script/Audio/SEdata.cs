using UnityEngine;
using UniRx;

/// <summary>
/// サウンドデータ
/// </summary>
public class SEData
{
    public SEResouces key;
    //リソースパス
    public string Respath;
    //Audio Clip
    public AudioClip Clip;

    //コンストラクタ
    public SEData( SEResouces in_key, string res )
    {
        key = in_key;
        Respath = "Audio/" + res;
        Clip = Resources.Load(Respath) as AudioClip;
    }
}