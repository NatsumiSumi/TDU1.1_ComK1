#include<stdio.h>
#include<math.h>

int main(void)
{
	double num1, num2, num3;

	printf("3�ӂ̒�������͂��Ă������� \n");
	scanf_s("%lf", &num1);
	scanf_s("%lf", &num2);
	scanf_s("%lf", &num3);

	if (num1 + num2 > num3 && num2 + num3 > num1 && num3 + num1 > num2) {
		printf("�ʐ�=%.2lf \n", sqrt((num1 + num2 + num3)*(-num1 + num2 + num3)*(num1 - num2 + num3)*(num1 + num2 - num3)) / 4);
	}

	else {
		printf("�O�p�`�ł͂���܂��� \n");
	}

	return 0;
}