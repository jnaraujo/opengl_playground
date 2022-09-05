#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <gl/glut.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include<math.h>

#define PI 3.14159265;

void init(){

  // paint background as black
  glClearColor(0,0,0,1);

//  glColor3f(0,1,0);
//
//  glPointSize(1);
//  glMatrixMode(GL_MODELVIEW);
//  glLoadIdentity();
//
  gluOrtho2D(-780, 780, -420, 420);
}

void draw(){
  glMatrixMode(GL_MODELVIEW);
  glClear(GL_COLOR_BUFFER_BIT);


  glBegin(GL_POINTS);
  glColor3f(1.0f, 0.0f, 0.0f);
  glPointSize(1);

  printf("render\n");

  float x,y;

  float TWO_TIMES_PI = 2 * PI;

  for(float i = 0; i < TWO_TIMES_PI; i += 0.01){
    x = 100 * cosf(i);
    y = 100 * sinf(i);

    glVertex2i(x, y);
  }
  glEnd();


  glColor3f(1.0f, 0.5f, 0.0f);
  glBegin(GL_QUADS);
    glVertex2i(100, 150);
    glVertex2i(100,100);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2i(150,100);
    glVertex2i(150,150);

  glEnd();
  glFlush();
}

void main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  // set window size
  glutInitWindowSize(1366, 768);
  glutInitWindowPosition(0,0);

  // set window name
  glutCreateWindow("Janela bonitinha");

  glutDisplayFunc(draw);

  init();
  glutMainLoop();

}