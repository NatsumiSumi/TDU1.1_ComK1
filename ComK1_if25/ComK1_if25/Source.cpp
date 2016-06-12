#include<stdio.h>
#include<math.h>

int main(void)
{
	double numa, numb, numc, rot, ans1, ans2;

	printf("2Ÿ•û’ö®‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ \n");
	scanf("%lf", &numa);
	scanf("x^2+");
	scanf("%lf", &numb);
	scanf("x+");
	scanf("%lf", &numc);
	scanf("=0");

	rot = pow(numb, 2) - 4 * numa*numc;

	if (rot = 0) {
		ans1 = (-numb + sqrt(pow(numb, 2.0) - 4 * numa*numc)) / (2 * numa);
		printf("x=%.2lf", ans1);
	}

	else if (rot > 0) {
		ans1 = (-numb + sqrt(pow(numb, 2.0) - 4 * numa*numc)) / (2 * numa);
		ans2 = (-numb - sqrt(pow(numb, 2.0) - 4 * numa*numc)) / (2 * numa);
		printf("x=%.2lf , %.2lf", ans1, ans2);
	}

	else {
		printf("‹•ª‚Å‚· \n");
	}

	return 0;
}