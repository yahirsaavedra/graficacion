#include <GL/glut.h> 

GLfloat xpos = 0, ypos = 0;

GLint ancho = 640;
GLint alto = 480;

int hazperspec = 0;

void reshape(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	if (hazperspec)
		gluPerspective(120.0f, (GLfloat)w / (GLfloat)h, 1.0f, 20.0f);
	else
		glOrtho(-4,4,-4,4,1,10);
		glMatrixMode(GL_MODELVIEW);
	ancho = w;
	alto = h;
}


void esfera() {
	glClearColor(0.25, 0.55, 0.7, 0);
 	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 	glColor3f(1, 0, 0);
 	glPushMatrix();
 	glTranslatef(xpos, ypos, -2);
 	glutSolidSphere(0.75, 20, 20);
 	glPopMatrix();
   	glutSwapBuffers();
}

void ControlTeclado(unsigned char key, int x, int y)
{
	switch (key) {
		
		case 'd': //d
			xpos++;
			break;
		
		case 'a': //i
			xpos--;
			break;
			
		case 'w': //a
			ypos++;
			break;
			
		case 's': //b
			ypos--;
			break;
	}
	
	glutPostRedisplay();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
   glutInitWindowSize(600, 600);
   glutInitWindowPosition(700, 50);
   glutCreateWindow("SAAVEDRA GALLARDO YAHIR ALEJANDRO, 21490577");
   glutDisplayFunc(esfera);
   glutKeyboardFunc(ControlTeclado);
   glutReshapeFunc(reshape);
   glutIdleFunc(esfera);
   glutMainLoop();
   return 0;
}
