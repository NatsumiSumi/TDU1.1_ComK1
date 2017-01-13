#include<stdio.h>

int main(void)
{
	double num1, num2, ans;
	char ope;

	printf("Ž®‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ \n");
	scanf_s("%lf", &num1);
	scanf_s("%c", &ope);
	scanf_s("%lf", &num2);

	switch (ope) {
	case'+':ans = num1 + num2; break;
	case'-':ans = num1 - num2; break;
	case'*':ans = num1*num2; break;
	case'/':ans = num1 / num2; break;
	default:printf("Error!!!");
	}

	printf("%.2lf %c %.2lf = %.2lf \n", num1, ope, num2, ans);

	return 0;
}