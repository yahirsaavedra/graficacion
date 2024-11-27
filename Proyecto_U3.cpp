#include <GL/glut.h> 
#include <math.h>
float angulo = 0;

void girar() {
	angulo += 0.004;
	if (angulo > 6.2832) // aprox. 2*pi
      angulo -= 6.2832;
	glutPostRedisplay();
}

void init() {
	glClearColor(0, 0, 0, 0);
 	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 	glMatrixMode(GL_PROJECTION);
 	glLoadIdentity();
 	gluPerspective(40, 1.25, 1, 100);
 	glMatrixMode(GL_MODELVIEW);
 	glEnable(GL_DEPTH_TEST);
 	glLoadIdentity();
 	glTranslatef(-0.3, 0, -2);
 	glRotatef(0, 1, 0, 1);
 	glColor3f(1, 0, 0);
 	glutWireTorus(0.1, 0.3, 50, 50);
 	glTranslatef(0.3, 0, 0);
 	glTranslatef(0.3 * cos(angulo), 0.0, 0.3 * sin(angulo));
 	glColor3f(0, 0, 1);
 	glutSolidSphere(0.1, 20, 20);
   	glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
   glutInitWindowSize(640, 480);
   glutInitWindowPosition(5a0, 50);
   glutCreateWindow("SAAVEDRA GALLARDO YAHIR ALEJANDRO, 21490577");
   glutDisplayFunc(init);
   glutIdleFunc(girar);
   glutMainLoop();
   return 0;
}
