#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846264338327950288

int main(void) {
	int i;
	double r, h, n, enc,ans;
	i = 1;
	ans = 0;

	printf("��ӂ̔��a r =>");
	scanf_s("%lf", &r);
	printf("���� h =>");
	scanf_s("%lf", &h);
	printf("������ n =>");
	scanf_s("%lf", &n);

	while (n > i) {
		enc = (r*(n - i) / n)*(r*(n - i) / n)*(h / n)*PI;
		ans = ans + enc;
		i++;
	}

	printf("�̐� = %.2f \n", ans);
}