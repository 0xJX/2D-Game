#include <GLFW/glfw3.h>
#include <windows.h>
#include <iostream>
#include <string>
#include "Engine.h"
#include "Entity.h"
#include "StateManager.h"

void InitPointers()
{
    p_Engine = new CEngine();
    p_StateManager = new CStateManager();
}

int main()
{
    std::cout << "Program started.\n";
    InitPointers();

    if (!p_Engine->GetGlfwWindow())
    {
        std::cout << "FATAL! GLFW window pointer was null, terminating..\n";
        return EXIT_FAILURE;
    }

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(p_Engine->GetGlfwWindow()))
    {
        // Draw the selected state.
        p_StateManager->Tick();
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(p_Engine->GetGlfwWindow());

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return EXIT_SUCCESS;
}