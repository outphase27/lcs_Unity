using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour 
{
    public void HandlePlayButtonOnClick()
    {
        AudioManager.Play(AudioClipName.MenuButtonClick);
        SceneManager.LoadScene("GamePlay");
    }

    public void HandleHelpButtonOnClick()
    {
        AudioManager.Play(AudioClipName.MenuButtonClick);
        MenuManager.GoToMenu(MenuName.Help);
    }

    public void HandleQuitButtonOnClick()
    {
        AudioManager.Play(AudioClipName.MenuButtonClick);
        Application.Quit();
    }


}
