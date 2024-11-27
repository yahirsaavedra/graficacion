#include <GL/glut.h> 

void init() {
	glClearColor(0, 0, 0, 0);
 	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 	glMatrixMode(GL_PROJECTION);
 	glLoadIdentity();
 	gluPerspective(40, 1.25, 1, 100);
 	glMatrixMode(GL_MODELVIEW);
 	glEnable(GL_DEPTH_TEST);
 	glLoadIdentity();
 	glTranslatef(0, 0, -7);
 	/*
 	VALOR 1: 45, 1, 1, 0 (VERDE, ROJO, AZUL)
 	VALOR 2: 225, 1, 1, 0 (NARANJA, AMARILLO, MORADO)
 	*/
 	glRotatef(225,1,1,0);	
   	glBegin(GL_QUADS);
	// CARA 1
	glColor3f(0, 1, 0); // verde
    glVertex3f( 1, 1, -1);
    glVertex3f(-1, 1, -1);
    glVertex3f(-1, 1,  1);
    glVertex3f( 1, 1,  1);
    // CARA 2
    glColor3f(1, 0.5, 0); // naranja
    glVertex3f( 1, -1,  1);
    glVertex3f(-1, -1,  1);
    glVertex3f(-1, -1, -1);
    glVertex3f( 1, -1, -1);
	// CARA 3
    glColor3f(1, 0, 0); // rojo
    glVertex3f( 1,  1, 1);
    glVertex3f(-1,  1, 1);
    glVertex3f(-1, -1, 1);
    glVertex3f( 1, -1, 1);
    // CARA 4
	glColor3f(1, 1, 0); // amarillo
    glVertex3f( 1, -1, -1);
	glVertex3f(-1, -1, -1);
    glVertex3f(-1,  1, -1);
    glVertex3f( 1,  1, -1);
    // CARA 5
    glColor3f(0, 0, 1); // azul
    glVertex3f(-1,  1,  1);
    glVertex3f(-1,  1, -1);
    glVertex3f(-1, -1, -1);
    glVertex3f(-1, -1,  1);
    // CARA 6
    glColor3f(1, 0, 1); // morado
    glVertex3f(1,  1, -1);
    glVertex3f(1,  1,  1);
    glVertex3f(1, -1,  1);
    glVertex3f(1, -1, -1);
   	glEnd();
   	glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
   glutInitWindowSize(640, 480);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("SAAVEDRA GALLARDO YAHIR ALEJANDRO, 21490577");
   glutDisplayFunc(init);
   glutMainLoop();
   return 0;
}
