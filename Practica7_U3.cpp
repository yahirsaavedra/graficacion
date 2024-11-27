#include <GL/glut.h> 

void init() {
	glClearColor(1, 1, 1, 0);
 	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 	glMatrixMode(GL_PROJECTION);
 	glLoadIdentity();
 	gluPerspective(40, 1.25, 1, 100);
 	glMatrixMode(GL_MODELVIEW);
 	glEnable(GL_DEPTH_TEST);
 	glLoadIdentity();
 	glTranslatef(0, 0, -2);
 	glRotatef(180, 1, 0, 1);
 	glRotatef(90, 1, 0, 0);
 	glColor3f(1, 0, 0);
 	glutSolidTorus(0.125, 0.25, 50, 50);
 	glTranslatef(0, 0, 0.3);
 	glRotatef(120, 1, 1, 1);
 	glRotatef(90, 1, 0, 0);
 	glColor3f(0, 0, 1);
 	glutWireCone(0.25, 0.6, 25, 25);
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
