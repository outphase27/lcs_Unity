using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class HelpMenu : MonoBehaviour 
{
    public void HandleHelpButtonClickOn()
    {
        AudioManager.Play(AudioClipName.MenuButtonClick);
        MenuManager.GoToMenu(MenuName.Main);
    }
}
