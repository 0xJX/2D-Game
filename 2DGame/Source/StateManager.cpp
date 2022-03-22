#include "StateManager.h"
#include <iostream>
#include "Menu/MainMenu.h"

CStateManager* p_StateManager;

int CStateManager::GetGameState()
{
	return this->iCurrentState;
}

void CStateManager::SetGameState(int i)
{
	this->iCurrentState = i;
}

CStateManager::CStateManager()
{
    p_MainMenu = new CMainMenu();
	this->SetGameState(IN_MAINMENU);
}

void CStateManager::Tick()
{
    switch (this->GetGameState())
    {
    case IN_MAINMENU: // Draw main menu stuff here.
        p_MainMenu->Draw();
        break;
    case IN_GAME: // Draw ingame stuff here.
        break;
    }
}