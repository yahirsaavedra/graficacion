/*
SAAVEDRA GALLARDO YAHIR ALEJANDRO, 21490577
CONTROLES:
A: IZQUIERDA
D: DERECHA
W: ALTERNAR ENTRE LLANTA PONCHADA Y REPARADA
*/

#include <GL/glut.h>
#include <stdio.h>
#include <math.h>

int bloquear = 0, cambiado = 0;

GLfloat angulo = 0.0;

GLvoid iniciar() {
    glPointSize(5.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 900.0, 0.0, 600.0, 50.0, -50.0);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glLineWidth(2.0);
    glViewport(0, 0, 1000, 800);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, 1.25, 0.1, 100.0);
    glMatrixMode(GL_MODELVIEW);
}

GLvoid carro() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.5, 0.5, 0.5, 0);
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(-1.0, 0.0, -3.5);
    glBegin(GL_POINTS);
    glPointSize(200.0);
    glColor3f(0.5, 0.5, 0.5);
    if (bloquear == 1) {
		glVertex3f(1.5, -0.175, 1);
    }
    glVertex3f(2.0, 0.608, 1.5);
    glEnd();
    glColor3f(1.0, .75, 0.0);
    glPointSize(30.0);
    glBegin(GL_POINTS);
    glVertex3f(0.2, 0.3, 0.3);
    glVertex3f(0.2, 0.3, 0.5);
    glEnd();
    glPointSize(200.0);
    glBegin(GL_QUADS);
    glColor3f(1.0, 0, 0);
    glVertex3f(0.2, 0.4, 0.6);
    glVertex3f(0.6, 0.5, 0.6);
    glVertex3f(0.6, 0.5, 0.2);
    glVertex3f(0.2, 0.4, 0.2);
    glVertex3f(0.2, 0.4, 0.6);
    glVertex3f(0.6, 0.2, 0.6);
    glVertex3f(0.6, 0.2, 0.2);
    glVertex3f(0.2, 0.2, 0.2);
    glVertex3f(0.2, 0.2, 0.6);
    glVertex3f(0.2, 0.4, 0.6);
    glVertex3f(0.2, 0.4, 0.2);
    glVertex3f(0.2, 0.2, 0.2);
    glVertex3f(0.6, 0.2, 0.6);
    glVertex3f(0.6, 0.5, 0.6);
    glVertex3f(0.6, 0.5, 0.2);
    glVertex3f(0.6, 0.2, 0.2);
    glVertex3f(0.2, 0.2, 0.6);
    glVertex3f(0.6, 0.2, 0.6);
    glVertex3f(0.6, 0.5, 0.6);
    glVertex3f(0.2, 0.4, 0.6);
    glVertex3f(0.2, 0.2, 0.2);
    glVertex3f(0.6, 0.2, 0.2);
    glVertex3f(0.6, 0.5, 0.2);
    glVertex3f(0.2, 0.4, 0.2);
    glVertex3f(0.7, 0.65, 0.6);
    glVertex3f(0.7, 0.65, 0.2);
    glVertex3f(1.7, 0.65, 0.2);
    glVertex3f(1.7, 0.65, 0.6);
    glColor3f(1.0, 0, 0);
    glVertex3f(1.8, 0.5, 0.6);
    glVertex3f(1.8, 0.5, 0.2);
    glVertex3f(2.1, 0.4, 0.2);
    glVertex3f(2.1, 0.4, 0.6);
    glVertex3f(2.1, 0.2, 0.6);
    glVertex3f(2.1, 0.2, 0.2);
    glVertex3f(1.8, 0.2, 0.6);
    glVertex3f(1.8, 0.2, 0.6);
    glVertex3f(2.1, 0.4, 0.6);
    glVertex3f(2.1, 0.4, 0.2);
    glVertex3f(2.1, 0.2, 0.2);
    glVertex3f(2.1, 0.2, 0.6);
    glVertex3f(1.8, 0.2, 0.2);
    glVertex3f(1.8, 0.5, 0.2);
    glVertex3f(2.1, 0.4, 0.2);
    glVertex3f(2.1, 0.2, 0.2);
    glVertex3f(1.8, 0.2, 0.6);
    glVertex3f(1.8, 0.5, 0.6);
    glVertex3f(2.1, 0.4, 0.6);
    glVertex3f(2.1, 0.2, 0.6);
    glVertex3f(0.6, 0.5, 0.6);
    glVertex3f(0.6, 0.2, 0.6);
    glVertex3f(1.8, 0.2, 0.6);
    glVertex3f(1.8, 0.5, 0.6);
    glVertex3f(0.6, 0.2, 0.6);
    glVertex3f(0.6, 0.2, 0.2);
    glVertex3f(1.8, 0.2, 0.2);
    glVertex3f(1.8, 0.2, 0.6);
    glVertex3f(0.6, 0.5, 0.2);
    glVertex3f(0.6, 0.2, 0.2);
    glVertex3f(1.8, 0.2, 0.2);
    glVertex3f(1.8, 0.5, 0.2);
    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.77, 0.63, 0.2);
    glVertex3f(0.75, 0.5, 0.2);
    glVertex3f(1.2, 0.5, 0.2);
    glVertex3f(1.22, 0.63, 0.2);
    glVertex3f(1.27, 0.63, .2);
    glVertex3f(1.25, 0.5, 0.2);
    glVertex3f(1.65, 0.5, 0.2);
    glVertex3f(1.67, 0.63, 0.2);
    glColor3f(1.0, 0, 0);
    glVertex3f(0.7, 0.65, 0.2);
    glVertex3f(0.7, 0.5, .2);
    glVertex3f(0.75, 0.5, 0.2);
    glVertex3f(0.77, 0.65, 0.2);
    glVertex3f(1.2, 0.65, 0.2);
    glVertex3f(1.2, 0.5, .2);
    glVertex3f(1.25, 0.5, 0.2);
    glVertex3f(1.27, 0.65, 0.2);
    glVertex3f(1.65, 0.65, 0.2);
    glVertex3f(1.65, 0.5, .2);
    glVertex3f(1.7, 0.5, 0.2);
    glVertex3f(1.7, 0.65, 0.2);
    glVertex3f(0.75, 0.65, 0.2);
    glVertex3f(0.75, 0.63, 0.2);
    glVertex3f(1.7, 0.63, 0.2);
    glVertex3f(1.7, 0.65, 0.2);
    glVertex3f(0.75, 0.65, 0.6);
    glVertex3f(0.75, 0.63, 0.6);
    glVertex3f(1.7, 0.63, 0.6);
    glVertex3f(1.7, 0.65, 0.6);
    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.77, 0.63, 0.6);
    glVertex3f(0.75, 0.5, 0.6);
    glVertex3f(1.2, 0.5, 0.6);
    glVertex3f(1.22, 0.63, 0.6);
    glVertex3f(1.27, 0.63, .6);
    glVertex3f(1.25, 0.5, 0.6);
    glVertex3f(1.65, 0.5, 0.6);
    glVertex3f(1.67, 0.63, 0.6);
    glColor3f(1.0, 0, 0);
    glVertex3f(0.7, 0.65, 0.6);
    glVertex3f(0.7, 0.5, .6);
    glVertex3f(0.75, 0.5, 0.6);
    glVertex3f(0.77, 0.65, 0.6);
    glVertex3f(1.2, 0.65, 0.6);
    glVertex3f(1.2, 0.5, .6);
    glVertex3f(1.25, 0.5, 0.6);
    glVertex3f(1.27, 0.65, 0.6);
    glVertex3f(1.65, 0.65, 0.6);
    glVertex3f(1.65, 0.5, .6);
    glVertex3f(1.7, 0.5, 0.6);
    glVertex3f(1.7, 0.65, 0.6);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.6, 0.5, 0.6);
    glVertex3f(0.6, 0.5, 0.2);
    glVertex3f(0.7, 0.65, 0.2);
    glVertex3f(0.7, 0.65, 0.6);
    glVertex3f(1.7, 0.65, .6);
    glVertex3f(1.7, 0.65, 0.2);
    glVertex3f(1.8, 0.5, 0.2);
    glVertex3f(1.8, 0.5, 0.6);
    glPushMatrix();
    glColor3f(0.3, 0.3, 0.3);
    glVertex3f(0.6, 0.5, 0.6);
    glVertex3f(0.7, 0.65, 0.6);
    glVertex3f(0.7, 0.5, 0.6);
    glVertex3f(0.6, 0.5, 0.2);
    glVertex3f(0.7, 0.65, 0.2);
    glVertex3f(0.7, 0.5, 0.2);
    glVertex3f(1.7, 0.65, 0.2);
    glVertex3f(1.8, 0.5, 0.2);
    glVertex3f(1.7, 0.5, 0.2);
    glVertex3f(1.7, 0.65, 0.6);
    glVertex3f(1.8, 0.5, 0.6);
    glVertex3f(1.7, 0.5, 0.6);
    glEnd();
    glColor3f(0, 0, 0);
    
    glTranslatef(0.6, 0.2, 0.6);
    glRotatef(angulo, 0.0, 0.0, 1.0);
    glutWireTorus(0.05, 0.07, 10, 25);
    glTranslatef(0, 0, -0.4);
    glutWireTorus(0.05, 0.07, 10, 25);
    glTranslatef(1.1, 0, 0);
    if (bloquear == 1) {
    	angulo = 0;
    	cambiado = 0;
		glScalef(0.75, 0.75, 1.0);
	}
	if (bloquear == 2) {
    	angulo = 0;
    	glTranslatef(0.0, -0.5, 0.0);
    	glScalef(0.75, 0.75, 1.0);
    }
	if (bloquear == 3) {
    	angulo = 0;
    	glTranslatef(0.0, -0.5, 0.0);
    	cambiado = 1;
    	glColor3f(0.0, 0.0, 1.0);
	}
    if (fmod(angulo, 360) != 0) {
    	glTranslatef(-2.2, 0.0, 0.0);
    	glRotatef(angulo + 180, 0.0, 0.0, 1.0);
	}
	if (cambiado == 1) glColor3f(0.0, 0.0, 1.0);
    glutWireTorus(0.05, 0.07, 10, 25);
	glTranslatef(0.0, 0.0, 0.4);
	
	glutWireTorus(0.05, 0.07, 10, 25);
    glPopMatrix();
    
    glPopMatrix();
    glEnable(GL_DEPTH_TEST);
    glutPostRedisplay();
    glutSwapBuffers();
}

void teclado(int key, int coordX, int coordY) {
    switch (key) {
    case GLUT_KEY_RIGHT:
        if (bloquear != 1) angulo += 180;
        break;

    case GLUT_KEY_LEFT:
        if (bloquear != 1) angulo -= 180;
        break;
    case GLUT_KEY_UP:
        if (bloquear == 3) {
			bloquear = 0;
		} else if (bloquear == 0) {
			bloquear = 1;
		} else if (bloquear == 1) {
			bloquear = 2;
		} else if (bloquear == 2) {
			bloquear = 3;
		}
        break;

    default:
        break;
    }
}

int main(int argc, char ** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(1000, 800);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("SAAVEDRA GALLARDO YAHIR ALEJANDRO, 21490577");
    glutDisplayFunc(carro);
    glutSpecialFunc(teclado);
    iniciar();
    glutMainLoop();
    return 0;
}
