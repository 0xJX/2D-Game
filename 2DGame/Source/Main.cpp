#include <GLFW/glfw3.h>
#include <windows.h>
#include <iostream>

int main()
{
    std::cout << "Program started.\n";

    /* 
       Initialize the library 
       There seems to be a some kind of driver issue that causes this delay sometimes..
       Rebooting seems to work sometimes.
    */
    std::cout << "Initializing OpenGL, this may take up to 30 seconds on some computers..\n";
    if (glfwInit() == GLFW_FALSE)
    {
        std::cout << "Failed to init GLFW!\n";
        return 0;
    }

    std::cout << "GLFW should be initialized.\n";

    /* Create a windowed mode window and its OpenGL context */
    GLFWwindow* window = glfwCreateWindow(640, 480, "Test window", NULL, NULL);
    if (!window)
        return 0;

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}