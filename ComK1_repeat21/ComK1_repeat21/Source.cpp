#include<stdio.h>

int main(void) {
	int num, i, a;

	printf("��������͂��Ă�������\n");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++) {
		if (num%i == 0) {
			a++;
		}
	}

	if (a = num) {
		printf("%d�͑f���ł�", num);
	}

	else {
		printf("%d�͑f���ł͂���܂���", num);
	}

	return 0;
}