#include <stdio.h>

int main(void)
{
	int base_length, height_length;
	double space;

	/* ��ӂ̓��� */
	printf("��ӂ̒����F");
	scanf_s("%d", &base_length);
	/* �����̓��� */
	printf("�����F");
	scanf_s("%d", &height_length);

	/* �O�p�`�̖ʐς̌v�Z */
	space = ((double)base_length * (double)height_length) / 2;

	/* �v�Z���ʂ̕\�� */
	printf("���%d�A����%d�̎O�p�`�̖ʐς�%.1lf \n", base_length, height_length, space);

	return 0;
}