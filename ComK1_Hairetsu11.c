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

	printf("Šï” %dŒÂ \n", k);
	printf("‹ô” %dŒÂ \n", 10-k);
	printf("•‰‚Ì” %dŒÂ \n", f);

	return 0;
}