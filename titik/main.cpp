#include <windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


void titik ();
main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("tugas 2");
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0.0,0.0,0.0,0.0,0.0,0.0);
    glutDisplayFunc(titik);
    glutMainLoop();
}
void titik()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10.0);
    glBegin(GL_POINTS);

    glColor3f(0.5, 1.5, 0.0);
    glVertex2f(0.0,0.0);

    glColor3f(0.0, 1.0, 1.0);
    glVertex2f(-0.1,0.1);

    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.2,0.0);

    glColor3f(1.0, 0.0, 1.0);
    glVertex2f(0.1,0.1);

    glColor3f(0.5, 1.0, 0.5);
    glVertex2f(0.2,0.0);

    glColor3f(1.0, 1.0, 0.0);
    glVertex2f(-0.3,0.1);

    glColor3f(1.5, 2.0, 0.5);
    glVertex2f(-0.4,0.0);

    glEnd();
    glFlush();
}
