//
//  main.cpp
//  C++
//
//  Created by Rafael Padilla Perez on 4/11/23.
//
#define GL_SILENCE_DEPRECATION
#include <iostream>
#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include <cmath>

// Variables
float angle = 0.0;
float rotSpeed = 0.01;
float radius = 1;

// Clear window, draw a triangle
void display() {
    
    angle += rotSpeed;
    
    float theta1 = M_PI/2 + angle;
    float theta2 = (210 * M_PI/2) / 90 + angle;
    float theta3 = (330 * M_PI/2) / 90 + angle;
    
    // Set buffer to clear color
    glClear(GL_COLOR_BUFFER_BIT);
    
    // glBegin, glEnd to draw a shape
    glBegin(GL_POLYGON);
        glColor3f(1, 0, 0); glVertex3f(cos(theta1) * radius, sin(theta1) * radius , 0);
        glColor3f(0, 1, 0); glVertex3f(cos(theta2) * radius, sin(theta2) * radius, 0);
        glColor3f(0, 0, 1); glVertex3f(cos(theta3) * radius, sin(theta3) * radius, 0);
    glEnd();
    
    // Flush
    glFlush(); // Flush all buffers everywhere
    
    glutPostRedisplay();
    
}

int main(int argc, char** argv) {
    // Create single buffer windown in RGB mode (options: double buffered, color index)
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    
    // Position window, title it
    glutInitWindowPosition(80, 80); // Pos
    glutInitWindowSize(400, 300); // Size
    glutCreateWindow("The hello world of graphics"); // Name
    
    // If we have to repaint, we call display()
    glutDisplayFunc(display);
    
    // Start reading and processing
    glutMainLoop();
    return 0;
}
