#include <stdio.h>
int main(void)
{
	double num1, num2;

	printf("2�̒�R�l����͂��Ă��������B\n");

	scanf("%lf%lf", &num1, &num2);

	printf("����ڑ��̍�����R��%.2f (���j\n", num1 + num2);

	printf("����ڑ��̍�����R��%.2f (���j�ł�", num1*num2 / (num1 + num2));

	return 0;
}