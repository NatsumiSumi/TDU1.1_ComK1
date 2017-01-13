#include <stdio.h>

int main(void) {
	char c;

	printf("アルファベットの小文字を入力してください.\n");
	c = fgetc(stdin);

	c = c - 32;
	printf("%c\n", c);

	return 0;
}