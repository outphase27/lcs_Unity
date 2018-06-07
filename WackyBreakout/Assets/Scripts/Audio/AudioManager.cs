using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class AudioManager 
{
    static bool initialized = false;
    static AudioSource audioSource;
    static Dictionary<AudioClipName, AudioClip> AudioClips = new Dictionary<AudioClipName, AudioClip>();

    public static bool Initialized
    {
        get { return initialized; }
    }

    public static void Initialize(AudioSource source)
    {
        initialized = true;
        audioSource = source;
        AudioClips.Add(AudioClipName.FreezerEffectActivated,Resources.Load<AudioClip>("FreezerEffectActivated"));
        AudioClips.Add(AudioClipName.SpeedupEffectActivated, Resources.Load<AudioClip>("SpeedupEffectActivated"));
        AudioClips.Add(AudioClipName.BGM, Resources.Load<AudioClip>("BGM"));
        AudioClips.Add(AudioClipName.BonusBlock, Resources.Load<AudioClip>("BonusBlock"));
        AudioClips.Add(AudioClipName.GameLost, Resources.Load<AudioClip>("GameLost"));
        AudioClips.Add(AudioClipName.GameWin, Resources.Load<AudioClip>("GameWin"));
        AudioClips.Add(AudioClipName.MenuButtonClick, Resources.Load<AudioClip>("MenuButtonClick"));
        AudioClips.Add(AudioClipName.BallCollision, Resources.Load<AudioClip>("BallCollision"));
    }

    public static void Play(AudioClipName name)
    {
        audioSource.PlayOneShot(AudioClips[name]);
    }
}
