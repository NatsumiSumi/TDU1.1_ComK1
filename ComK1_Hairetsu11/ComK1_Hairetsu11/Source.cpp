#include <stdio.h>

int main(void) {
	int num[10] = { 2,-8,5,-4,6,5,7,-3,-9,1 };
	int i,k,f;

	for (i = 0; i <= 10; i++) {
		if (num[i] % 2 != 0) {
			k++;
		}
	}

	for (i = 0; i <= 10; i++) {
		if (num[i] < 0) {
			f++;
		}
	}

	printf("� %d�� \n", k);
	printf("���� %d�� \n", 10-k);
	printf("���̐� %d�� \n", f);

	return 0;
}