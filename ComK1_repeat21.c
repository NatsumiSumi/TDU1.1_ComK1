#include<stdio.h>

int main(void) {
	int num, i, a;

	printf("2ˆÈã‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		if (num%i == 0) {
			a++;
		}
	}

	if (a == 2) {
		printf("%d‚Í‘f”‚Å‚· \n", num);
	}

	else {
		printf("%d‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ \n", num);
	}

	return 0;
}