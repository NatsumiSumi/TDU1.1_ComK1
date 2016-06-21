#include <stdio.h>

int main(void) {
	int a, b, c, d;

	a = 0;
	b = 0;
	c = 0;
	d = 100;

	if (a <= 2) {
		while (b <= 10) {
			while (c <= 20) {
				while (d >= 0) {
					printf("%d %d %d %d \n", a, b, c, d);
					c++;
					d = 100 - a * 50 - b * 10 - c * 5;
				}
				b++;
				c = 100 - a * 50 - b * 10;
			}
			a++;
			b = 100 - a * 50;
		}
	}

	return 0;
}