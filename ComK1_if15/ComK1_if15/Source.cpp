#include<stdio.h>

int main(void)
{
	char c, d;

	printf("�A���t�@�x�b�g����͂��Ă��������B\n");
	c = fgetc(stdin);

	if (c >= 65 && c <= 90) {
		d = c + 32;
		printf("�����u%c�v�͑啶���ł��B�������́u%c�v�ł��B", c, d);
	}

	else if (c >= 97 && c <= 122) {
		d = c - 32;
		printf("�����u%c�v�͏������ł��B�啶���́u%c�v�ł��B", c, d);
	}

	else {
		printf("�A���t�@�x�b�g�ȊO�ł��B");
	}

	return 0;
}