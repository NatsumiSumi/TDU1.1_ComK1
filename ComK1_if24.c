#include<stdio.h>

int main(void)
{
	int numh, numl, cra, tur;

	printf("���̐�����͂��Ă������� \n");
	scanf_s("%d", &numh);
	printf("���̐�����͂��Ă������� \n");
	scanf_s("%d", &numl);

	if (numl%2<=0 && numl>=numh*2 && numl<=numh*4) {
		tur = (numl - numh * 2) / 2;
		cra = numh - tur;
		printf("��:%d�H�@�T:%d�C \n", cra, tur);
	}

	else {
		printf("�v�Z�ł��܂��� \n");
	}
	return 0;
}