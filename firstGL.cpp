#include <GL/glut.h> //�s���쥿�T�����D��

void Display(void)
{
	glPushMatrix();
	glBegin(GL_TRIANGLES);          // �}�l���T���� 
	glColor3f(1.0f, 0.0f, 0.0f);         // �]�w��X�⬰���� 
	glVertex2f(0.0f, 1.0f);           //(x1,y1)=(0, 1)
	glColor3f(0.0f, 1.0f, 0.0f);         // �]�w��X�⬰��� 
	glVertex2f(0.87f, -0.5f);            //(x2,y2)=(0.87,-0.5)
	glColor3f(0.0f, 0.0f, 1.0f);         // �]�w��X�⬰�Ŧ� 
	glVertex2f(-0.87f, -0.5f);           //(x3,y3)=(-0.87,-0.5)
	glEnd();                               // �������T���� 
	glPopMatrix();
	glutSwapBuffers();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(100, 100); // �]�w������m 
	glutInitWindowSize(400, 400); // �]�w�����j�p 
	glutCreateWindow("Colorful Triangle "); // �]�w�������D 
	glutDisplayFunc(Display);  // �I�s��� 
	glutMainLoop();
	return 0;
}