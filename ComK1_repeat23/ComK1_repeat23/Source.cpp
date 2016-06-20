#include <stdio.h>

int main(void) {
	int a, b, c, d;
	a = 100;
	b = 0;
	c = 0;
	d = 0;

	printf("50‰~ 10‰~ 5‰~ 1‰~ \n");

	while (d >= 0 && d <= 2) {
		while (c >= 0 && c <= 10) {
			while (b >= 0 && b <= 20) {
				a = 100 - b * 5;
				b++;
			}
			c = b / 2;
			c++;
		}
		d = c / 5;
		printf("%d %d %d %d \n", d, c, b, a);
		d++;
	}

	return 0;
}