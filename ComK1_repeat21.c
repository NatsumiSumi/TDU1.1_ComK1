#include<stdio.h>

int main(void) {
	int num, i, a;

	printf("2以上の整数を入力してください\n");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		if (num%i == 0) {
			a++;
		}
	}

	if (a == 2) {
		printf("%dは素数です \n", num);
	}

	else {
		printf("%dは素数ではありません \n", num);
	}

	return 0;
}