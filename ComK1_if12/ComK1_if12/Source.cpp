#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("3�̐�������͂��Ă��������B\n");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 >= num2 && num1 >= num3) {
		printf("%d���ő�l�ł��B \n", num1);
	}

	else if (num2 >= num1 && num2 >= num3) {
		printf("%d���ő�l�ł��B \n", num2);
	}

	else {
		printf("%d���ő�l�ł��B \n", num3);
	}

	return 0;

}