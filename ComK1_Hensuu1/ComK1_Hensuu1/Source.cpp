#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("三角形の底辺の長さを入力してください。\n");

	scanf("%d", &num1);

	printf("三角形の高さを入力してください。\n");

	scanf("%d", &num2);

	printf("三角形の面積は%dです。\n", num1*num2 / 2);

	return 0;
}