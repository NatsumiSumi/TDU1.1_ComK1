#include <stdio.h>

/*自作関数のプロトタイプ宣言*/
double calcDirect(double, double);
double calcParallel(double, double);

int main(void)
{
	double resist1, resist2;

	/*抵抗値の入力*/
	printf("2つの抵抗値を入力してください. \n");
	scanf("%lf%lf", &resist1, &resist2);

	/*結果の表示*/
	printf("直列接続の合成抵抗は%.2f (Ω）\n", calcDirect(resist1, resist2));
	printf("並列接続の合成抵抗は%.2f (Ω）です. \n", calcParallel(resist1, resist2));

	return 0;
}

/*直列接続の合成抵抗の計算*/
double calcDirect(double x, double y) {
	return x + y;
}

/*並列接続の合成抵抗の計算*/
double calcParallel(double x, double y) {
	return x*y / (x + y);
}