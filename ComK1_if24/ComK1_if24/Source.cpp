#include<stdio.h>

int main(void)
{
	unsigned int numh, numl, cra, tur;

	printf("“ª‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ \n");
	scanf_s("%lf", numh);
	printf("‘«‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ \n");
	scanf_s("%lf", numl);

	if (numl % 2 = 0) {
		tur = (numl - numh * 2) / 2;
		cra = numh - tur;
		printf("");
	}

	return 0;
}