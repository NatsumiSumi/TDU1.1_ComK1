#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("3�̐�������͂��Ă��������B\n");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 <= num2 <= num3 || num2 <= num1 <= num3) {
		printf("%d���ő�l�ł��B", num3);
	}

	else if (num1 <= num3 <= num2 || num3 <= num1 <= num2) {
		printf("%d���ő�l�ł��B", num2);
	}

	else {
		printf("%d���ő�l�ł��B", num1);
	}

	return 0;

}