#include <stdio.h>
int main(void)
{
	double num1, num2;

	printf("2つの抵抗値を入力してください。\n");

	scanf("%lf%lf", &num1, &num2);

	printf("直列接続の合成抵抗は%.2f (Ω）\n", num1 + num2);

	printf("並列接続の合成抵抗は%.2f (Ω）です", num1*num2 / (num1 + num2));

	return 0;
}