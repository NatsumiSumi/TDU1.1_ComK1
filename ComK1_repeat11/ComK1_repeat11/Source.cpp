#include<stdio.h>

int main(void) {
	int day, mon;

	day = 1;
	mon = 1;

	while (mon <= 10000) {
		day++;
		mon = 2 * mon;
	}

	printf("1���ɂ��炤���z��1���~�𒴂���̂�%d���ڂł� \n", day);

	return 0;
}