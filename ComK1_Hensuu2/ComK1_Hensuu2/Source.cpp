#include <stdio.h>

/*����֐��̃v���g�^�C�v�錾*/
int calcVolume(int, int, int);
int calcSurface(int, int, int);

int main(void)
{
	int x_length, y_length, z_length;

	/*3�ӂ̒����̓���*/
	printf("�����̂�3�ӂ̒���x,y,z:");
	scanf_s("%d", &x_length);
	scanf_s("%d", &y_length);
	scanf_s("%d", &z_length);

	/*���ʂ̕\��*/
	printf("�����̂̑̐ς�%d�A�\�ʐς�%d \n", calcVolume(x_length, y_length, z_length), calcSurface(x_length, y_length, z_length));
	return 0;
}

/*�����̂̑̐ς̌v�Z*/
int calcVolume(int x, int y, int z) {
	return x*y*z;
}

/*�����̂̑̐ς̌v�Z*/
int calcSurface(int x, int y, int z) {
	return 2 * (x*y + y*z + z*x);
}