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
	glClearColor(0, 0, 1, 0);
 	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
 	glColor3f(0, 1, 0);
 	glPushMatrix();
 	glTranslatef(xpos, ypos, -2);
 	glutSolidCube(2);
 	glPopMatrix();
   	glutSwapBuffers();
}

void ControlMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) { //al hacer clic
		xpos = (int)x/(106.6666)-3; //213.3333
		ypos = -(int)y/(80)+3; //160
	}
	
	glutPostRedisplay();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
   glutInitWindowSize(640, 480);
   glutInitWindowPosition(700, 50);
   glutCreateWindow("SAAVEDRA GALLARDO YAHIR ALEJANDRO, 21490577");
   glutDisplayFunc(esfera);
   glutMouseFunc(ControlMouse);
   glutReshapeFunc(reshape);
   glutIdleFunc(esfera);
   glutMainLoop();
   return 0;
}
