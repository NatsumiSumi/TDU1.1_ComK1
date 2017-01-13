#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("3つの整数を入力してください。\n");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 >= num2 && num1 >= num3) {
		printf("%dが最大値です。 \n", num1);
	}

	else if (num2 >= num1 && num2 >= num3) {
		printf("%dが最大値です。 \n", num2);
	}

	else {
		printf("%dが最大値です。 \n", num3);
	}

	return 0;

}