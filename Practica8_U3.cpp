#include <GL/glut.h> 

void init() {
	glClearColor(0.25, 0.55, 0.7, 0);
 	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 	glMatrixMode(GL_PROJECTION);
 	glLoadIdentity();
 	gluPerspective(40, 1.25, 1, 100);
 	glMatrixMode(GL_MODELVIEW);
 	glEnable(GL_DEPTH_TEST);
 	glLoadIdentity();
 	glTranslatef(0, 0, -2);
 	glRotatef(180, 1, 1, 1);
 	glRotatef(65, 0, 1, 0);
 	glRotatef(180, 1, 0, 0);
 	glColor3f(1, 0.7, 0.3);
 	glutSolidCone(0.25, 0.9, 20, 20);
 	glTranslatef(0, 0.2, 0);
 	glColor3f(1, 0.6, 1);
 	glutSolidSphere(0.2, 20, 20);
 	glTranslatef(-0.2, -0.2, 0);
 	glColor3f(1, 1, 0.25);
 	glutSolidSphere(0.2, 20, 20);
 	glTranslatef(0, 0.2, -0.2);
 	glColor3f(0.7, 0.25, 0.35);
 	glutSolidSphere(0.2, 20, 20);
   	glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
   glutInitWindowSize(640, 480);
   glutInitWindowPosition(700, 50);
   glutCreateWindow("SAAVEDRA GALLARDO YAHIR ALEJANDRO, 21490577");
   glutDisplayFunc(init);
   glutMainLoop();
   return 0;
}
