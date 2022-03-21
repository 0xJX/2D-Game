#include "StateManager.h"

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
	this->SetGameState(IN_MAINMENU);
}