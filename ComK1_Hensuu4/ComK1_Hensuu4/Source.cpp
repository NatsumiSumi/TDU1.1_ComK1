#include <stdio.h>

int main(void)
{
	int num;

	printf("5桁の整数を入力してください。\n");

	scanf("%d", &num);

	printf("上二桁=%d \n", num / 1000);
	printf("下二桁=%d", num % 1000);

	return 0;
}