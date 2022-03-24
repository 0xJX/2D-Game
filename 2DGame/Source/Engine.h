#pragma once
#include <GLFW/glfw3.h>
class CEngine
{
private:
	GLFWwindow* window;
	int
		iMaxScreenHeight,
		iMaxScreenWidth;
	bool SetupOpenGL();
public:
	void GetMaxScreenResolution();
	GLFWvidmode GetWindowResolution();
	GLFWwindow* GetGlfwWindow();
	CEngine();
};

extern CEngine* p_Engine;