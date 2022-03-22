#include "Engine.h"
#include <windows.h>
#include <iostream>

CEngine* p_Engine;

void CEngine::GetMaxScreenResolution()
{
	// Get a handle to the desktop window
	const HWND hDesktop = GetDesktopWindow(); 

	// Get the size of screen.
	RECT desktop;
	GetWindowRect(hDesktop, &desktop);

	this->iMaxScreenWidth = desktop.right;
	this->iMaxScreenHeight = desktop.bottom;

	std::cout << "Screen resolution: " << this->iMaxScreenWidth << "x" << this->iMaxScreenHeight << "\n";
}

GLFWwindow* CEngine::GetGlfwWindow()
{
	return this->window;
}

bool CEngine::SetupOpenGL()
{
	/*
	   Initialize the library
	   There seems to be a some kind of driver issue that causes this delay sometimes..
	   Rebooting seems to work mostly.
	*/
	std::cout << "Initializing OpenGL, this may take up to 30 seconds on some computers..\n";
	if (!glfwInit())
	{
		std::cout << "Failed to init GLFW!\n";
		return false;
	}

	/* Create a windowed mode window and its OpenGL context */
	this->window = glfwCreateWindow(1280, 720, "2D RPG Game", NULL, NULL);
	if (!window)
		return false;

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	std::cout << "GLFW initialized.\n";

	return true;
}

CEngine::CEngine()
{
	// Store max resolution
	this->GetMaxScreenResolution();

	// Init and Setup OpenGL.
	this->SetupOpenGL();
}