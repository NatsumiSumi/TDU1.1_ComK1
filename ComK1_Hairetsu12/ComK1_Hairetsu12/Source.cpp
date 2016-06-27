#include <stdio.h>

int main(void) {
	int num[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int i;

	for (i = 1; i <= 9; i++) {
		printf("%2d ", num[0] * i);
		printf("%2d ", num[1] * i);
		printf("%2d ", num[2] * i);
		printf("%2d ", num[3] * i);
		printf("%2d ", num[4] * i);
		printf("%2d ", num[5] * i);
		printf("%2d ", num[6] * i);
		printf("%2d ", num[7] * i);
		printf("%2d ", num[8] * i);

		printf("\n");
	}

	printf("\n");

	return 0;
}