#include <stdio.h>

int main(void)
{
	int num;

	printf("5���̐�������͂��Ă��������B\n");

	scanf("%d", &num);

	printf("���=%d \n", num / 1000);
	printf("����=%d", num % 1000);

	return 0;
}