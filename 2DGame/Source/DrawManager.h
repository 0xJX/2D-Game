#pragma once
#include <string>
#include "SDK/Color.h"

class CDrawManager
{
public:
	void DrawRect(int x, int y, int w, int h, Color color);
	void DrawCircle(int x, int y, int r, Color color);
	void DrawTextGL(std::string text, double x, double y, double scale, long color);
};

extern CDrawManager* p_DrawManager;