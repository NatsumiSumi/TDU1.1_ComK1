#include <stdio.h>
#include <math.h>
#define PI 3.141593

int main(void) {
	int i, n;
	double r, h, enc, ans;
	ans = 0;

	printf("��ӂ̔��a r =>");
	scanf_s("%lf", &r);
	printf("���� h =>");
	scanf_s("%lf", &h);
	printf("������ n =>");
	scanf_s("%d", &n);

	for (i = 1; n > i; i++) {
		enc =((n-i-1)/(n-i))*r*((n-i-1)/(n-i))*r*(h / n)*PI;
		ans = ans + enc;
		i++;
	}

	printf("�̐� = %.2f \n", ans);
}