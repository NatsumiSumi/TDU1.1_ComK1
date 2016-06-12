#include<stdio.h>

int main(void) {
	int num, ind, ans;
	ind = 1;
	ans = 1;

	printf("®”n‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ \n");
	scanf_s("%d", &num);

	while (num > 0) {
		while (num >= ind) {
			ans = ans*ind;
			ind++;
		}
		printf("%d!=%d \n", num, ans);
		ind = 1;
		ans = 1;
		printf("®”n‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ \n");
		scanf_s("%d", &num);

	}

	return 0;
}