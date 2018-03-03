using UnityEngine;
using UniRx;
using System.Collections.Generic;

/// <summary>
/// オーデオマネージャ（シングルトン）
/// まだSEしかつくってませーん
/// </summary>
public class AudioManager : SingletonMonoBehaviour<AudioManager>
{
    //SEへのアクセステーブル
    private Dictionary<string, SEData> Dict_SE = new Dictionary<string, SEData>();

    //サウンドのアサインされたゲームオブジェクト
    private GameObject SoundObject = null;

    //リソース
    private AudioSource[] SEResource;

    //SE最大チャンネル数
    const int SE_CHANNEL = 5;

    /// コンストラクタ
    public AudioManager()
    {
        // チャンネル確保
        SEResource = new AudioSource[SE_CHANNEL];
    }

    /// <summary>
    /// in_keyという名前で、in_pathのSEをロードする（登録する）
    /// </summary>
    /// <param name="in_key"></param>
    /// <param name="in_path"></param>
    public void LoadSE(SEResouces in_key, string in_path)
    {
        if (Dict_SE.ContainsKey(in_key.ToString()))
        {
            // すでに登録済みなのでいったん消す
            Dict_SE.Remove(in_key.ToString());
        }
        //登録する
        Dict_SE.Add(in_key.ToString(), new SEData(in_key, in_path));
    }

    /// <summary>
    /// //オーディオリソースを取り出す
    /// </summary>
    /// <param name="in_channel"></param>
    /// <returns></returns>
    private AudioSource GetAudioSource( int in_channel = 1 )
    {
        if (SoundObject == null)
        {
            // GameObjectがなければ作る
            SoundObject = new GameObject("AudioManager");
            // 破棄しないようにする
            GameObject.DontDestroyOnLoad(SoundObject);
            // AudioSourceを作成
            for (int i = 0; i < SE_CHANNEL; i++)
            {
                SEResource[i] = SoundObject.AddComponent<AudioSource>();
            }
        }

        return SEResource[in_channel];
    }

    /// <summary>
    /// in_keyのSEを再生するよ
    /// </summary>
    /// <param name="in_key"></param>
    /// <param name="in_channnel"></param>
    /// <returns></returns>
    public bool PlaySE(SEResouces in_key, int in_channnel=1 )
    {
        if (Dict_SE.ContainsKey(in_key.ToString()) == false)
        {
            // 対応するキーがない
            return false;
        }

        //データ取得
        var data = Dict_SE[in_key.ToString()];

        //リソースもらってサウンド再生
        var source = GetAudioSource(in_channnel);
        source.PlayOneShot(data.Clip);
        return true;
    }

    /// <summary>
    /// BGMを再生する（未実装）
    /// </summary>
    public void PlayBGM()
    {
    }

    /// <summary>
    /// BGMを停止する（未実装）
    /// </summary>
    public void StopBGM()
    {
    }


}

