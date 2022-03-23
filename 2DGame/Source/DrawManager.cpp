#include "DrawManager.h"
#include <string>
#include <windows.h>
#include "Engine.h"
#include <gl/GL.h>

CDrawManager* p_DrawManager;

// TODO: clean this and add color argument.
void CDrawManager::DrawRect(int x, int y, int w, int h)
{
    //This sets up the viewport so that the coordinates (0, 0) are at the top left of the window
    glViewport(0, 0, p_Engine->GetWindowResolution().width, p_Engine->GetWindowResolution().height);

    //Set up the orthographic projection so that coordinates (0, 0) are in the top left
    //and the minimum and maximum depth is -10 and 10.
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, p_Engine->GetWindowResolution().width, p_Engine->GetWindowResolution().height, 0, -10, 10);

    //Back to the modelview so we can draw stuff 
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT or GL_DEPTH_BUFFER_BIT);

    glPushMatrix(); //Make sure our transformations don't affect any other transformations in other code
    glTranslatef(x, y, 0.0f); //Translate rectangle to its assigned x and y position
    //Put other transformations here
    glBegin(GL_QUADS); //We want to draw a quad, i.e. shape with four sides
    glColor3f(1, 0, 0); //Set the colour to red 
    glVertex2f(0, 0); //Draw the four corners of the rectangle
    glVertex2f(0, h);
    glVertex2f(w, h);
    glVertex2f(w, 0);
    glEnd();
    glPopMatrix();
}

void CDrawManager::DrawTextGL(std::string text, double x, double y, double scale, long color)
{
    // This is more complicated, most likely the easiest solution is to make an texture/sprite file with the letters and draw the letters from it.
}
