#include<stdio.h>

int main(void) {
	int num, i, a;

	printf("整数を入力してください\n");
	scanf_s("%d", &num);

	for (i = 0; i < num; i++) {
		if (num%i == 0) {
			a++;
		}
	}

	if (a = num) {
		printf("%dは素数です", num);
	}

	else {
		printf("%dは素数ではありません", num);
	}

	return 0;
}