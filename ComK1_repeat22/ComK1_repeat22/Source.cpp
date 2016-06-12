#include<stdio.h>
#include<math.h>

#define PI 3.141592

int main(void) {
	int i = 0;
	double x, s, c, t;
	double rad = x*PI / 180.0;

	while (i <= 90) {
		i = x;
		s = sin(rad);
		c = cos(rad);
		t = tan(rad);
		printf("sin%d=%.4f \n", x, s);
		i++;
	}

	return 0;
}