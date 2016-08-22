#include <stdio.h>

/*自作関数のプロトタイプ宣言*/
int divideNum_f(int);
int divideNum_l(int);

int main(void)
{
	int num;

	/*整数の入力*/
	printf("5桁の整数を入力してください。\n");
	scanf("%d", &num);

	/*結果の表示*/
	printf("上二桁=%d \n", divideNum_f(num));
	printf("下三桁=%d \n", divideNum_l(num));

	return 0;
}

/*上二桁を求める*/
int divideNum_f(int x) {
	return x / 1000;
}

/*下三桁を求める*/
int divideNum_l(int x) {
	return x % 1000;
}