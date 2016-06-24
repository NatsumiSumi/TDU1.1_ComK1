#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846264338327950288

int main(void) {
	int i;
	double r, h, n, enc,ans;
	i = 1;
	ans = 0;

	printf("’ê•Ó‚Ì”¼Œa r =>");
	scanf_s("%lf", &r);
	printf("‚‚³ h =>");
	scanf_s("%lf", &h);
	printf("•ªŠ„” n =>");
	scanf_s("%lf", &n);

	while (n > i) {
		enc =pow((r*(n - i) / n),2.0)*(h / n)*PI;
		ans = ans + enc;
		i++;
	}

	printf("‘ÌÏ = %.2f \n", ans);
}