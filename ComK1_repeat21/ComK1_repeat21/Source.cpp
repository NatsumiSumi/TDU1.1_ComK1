#include<stdio.h>

int main(void) {
	int num, i, a;

	printf("2�ȏ�̐�������͂��Ă�������\n");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		if (num%i == 0) {
			a++;
		}
	}

	if (a == 2) {
		printf("%d�͑f���ł� \n", num);
	}

	else {
		printf("%d�͑f���ł͂���܂��� \n", num);
	}

	return 0;
}