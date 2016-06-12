#include<stdio.h>

int main(void) {
	int x, y, z, num1, num2, num3;

	printf("3‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ \n");
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);


	if (x >= y&&x >= z) {
		num1 = x;
		if (y >= z) {
			num2 = y;
			num3 = z;
		}
		else {
			num2 = z;
			num3 = y;
		}
	}

	else if (y >= x&&y >= z) {
		num1 = y;
		if (x >= z) {
			num2 = x;
			num3 = z;
		}
		else {
			num2 = z;
			num3 = x;
		}
	}

	else {
		num1 = z;
		if (x >= y) {
			num2 = x;
			num3 = y;
		}
		else {
			num2 = y;
			num3 = x;
		}
	}


	printf("%d %d %d", num1, num2, num3);


	return 0;
}