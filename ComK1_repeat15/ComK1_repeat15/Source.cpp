#include<stdio.h>

int main(void) {
	double i, j, ans;
	i = 1;
	j = 1;
	ans = 1;

	while (i <= 114514) {
		j = j*i;
		ans = ans + (1 / j);
		i++;
	}

	printf("e=%.5f \n", ans);

	return 0;
}