#include "MainMenu.h"
#include "../SDK/Color.h"
#include "../DrawManager.h"
#include "../Engine.h"
#include <iostream>

CMainMenu* p_MainMenu;

void CMainMenu::Draw()
{
	// Draw red 50x50 rectangle to center screen.
	p_DrawManager->DrawCircle((p_Engine->GetWindowResolution().width / 2) - 25, (p_Engine->GetWindowResolution().height / 2) - 25, 50, Color::DWORD2RGBA(0xFF03FC14));
	p_DrawManager->DrawRect((p_Engine->GetWindowResolution().width / 2) - 50, (p_Engine->GetWindowResolution().height / 2) - 50, 50, 50, Color::DWORD2RGBA(0xFFFC0303));
}