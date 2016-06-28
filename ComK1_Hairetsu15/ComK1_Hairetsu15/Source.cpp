#include <stdio.h>

int main(void) {
	int num[10];
	int i, j, tmp;


	printf("•À‚Ñ‘Ö‚¦‘O: ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num[i]);
	}

	for (i = 0; i<10; ++i) {
		for (j = i + 1; j<10; ++j) {
			if (num[i] < num[j]) {
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	
	printf("•À‚Ñ‘Ö‚¦Œã: ");
	for (i = 0; i<10; ++i){
		printf("%d ", num[i]);
	}
	printf("\n");

	return 0;
}