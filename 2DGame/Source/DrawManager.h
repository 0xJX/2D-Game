#pragma once
#include <string>

class CDrawManager
{
public:
	void DrawRect(int x, int y, int w, int h);
	void DrawCircle(int x, int y, int r);
	void DrawTextGL(std::string text, double x, double y, double scale, long color);
};

extern CDrawManager* p_DrawManager;