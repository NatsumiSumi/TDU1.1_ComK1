#include<stdio.h>

int main(void)
{
	int numh, numl, cra, tur;

	printf("頭の数を入力してください \n");
	scanf_s("%d", &numh);
	printf("足の数を入力してください \n");
	scanf_s("%d", &numl);

	if (numl%2<=0 && numl>=numh*2 && numl<=numh*4) {
		tur = (numl - numh * 2) / 2;
		cra = numh - tur;
		printf("鶴:%d羽　亀:%d匹 \n", cra, tur);
	}

	else {
		printf("計算できません \n");
	}
	return 0;
}