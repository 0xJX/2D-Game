#pragma once

enum GameStates
{
	IN_MAINMENU,
	IN_GAME
};

class CStateManager
{
private:
	int iCurrentState;
public:
	int GetGameState();
	void SetGameState(int i);
	CStateManager();
};

extern CStateManager* p_StateManager;