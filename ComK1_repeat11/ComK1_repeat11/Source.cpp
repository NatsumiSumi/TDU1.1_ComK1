#include<stdio.h>

int main(void) {
	int day, mon;

	day = 1;
	mon = 1;

	while (mon <= 10000) {
		day++;
		mon = 2 * mon;
	}

	printf("1日にもらう金額が1万円を超えるのは%d日目です \n", day);

	return 0;
}