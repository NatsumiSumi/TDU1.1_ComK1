#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("”’l a =>");
	scanf_s("%d", &a);
	printf("”’l b =>");
	scanf_s("%d", &b);

	c = a%b;

	while (c != 0) {
		a = b;
		b = c;
		c = a%b;
	}

	printf("Å‘åŒö–ñ” = %d \n", b);

	return 0;
}