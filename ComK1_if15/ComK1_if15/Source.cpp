#include<stdio.h>

int main(void)
{
	char c, d;

	printf("アルファベットを入力してください。\n");
	c = fgetc(stdin);

	if (c >= 65 && c <= 90) {
		d = c + 32;
		printf("文字「%c」は大文字です。小文字は「%c」です。", c, d);
	}

	else if (c >= 97 && c <= 122) {
		d = c - 32;
		printf("文字「%c」は小文字です。大文字は「%c」です。", c, d);
	}

	else {
		printf("アルファベット以外です。");
	}

	return 0;
}