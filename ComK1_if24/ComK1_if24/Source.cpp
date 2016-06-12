#include<stdio.h>

int main(void)
{
	int numh, numl, cra, tur;

	printf("“ª‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ \n");
	scanf_s("%d", &numh);
	printf("‘«‚Ì”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ \n");
	scanf_s("%d", &numl);

	if (numl%2<=0 && numl>=numh*2 && numl<=numh*4) {
		tur = (numl - numh * 2) / 2;
		cra = numh - tur;
		printf("’ß:%d‰H@‹T:%d•C \n", cra, tur);
	}

	else {
		printf("ŒvZ‚Å‚«‚Ü‚¹‚ñ \n");
	}
	return 0;
}