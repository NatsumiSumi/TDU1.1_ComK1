#include <stdio.h>

int main(void) {
	char c;

	printf("�A���t�@�x�b�g�̏���������͂��Ă�������.\n");
	c = fgetc(stdin);

	c = c - 32;
	printf("%c\n", c);

	return 0;
}