#include<stdio.h>
#include<math.h>

#define PI 3.141592

int main(void) {
	int i = 0;
	double s, c, t;

	while (i <= 90) {
		s = sin(i*PI / 180.0);
		c = cos(i*PI / 180.0);
		t = tan(i*PI / 180.0);
		printf("��=%d: sin��=%.4f cos��=%.4f tan��=%.4f \n", i, s, c, t);
		i++;
	}

	return 0;
}