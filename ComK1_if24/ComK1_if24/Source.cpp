#include<stdio.h>

int main(void)
{
	unsigned int numh, numl, cra, tur;

	printf("頭の数を入力してください \n");
	scanf_s("%lf", numh);
	printf("足の数を入力してください \n");
	scanf_s("%lf", numl);

	if (numl % 2 = 0) {
		tur = (numl - numh * 2) / 2;
		cra = numh - tur;
		printf("");
	}

	return 0;
}