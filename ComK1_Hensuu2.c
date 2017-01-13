#include <stdio.h>

/*自作関数のプロトタイプ宣言*/
int calcVolume(int, int, int);
int calcSurface(int, int, int);

int main(void)
{
	int x_length, y_length, z_length;

	/*3辺の長さの入力*/
	printf("直方体の3辺の長さx,y,z:");
	scanf_s("%d", &x_length);
	scanf_s("%d", &y_length);
	scanf_s("%d", &z_length);

	/*結果の表示*/
	printf("立方体の体積は%d、表面積は%d \n", calcVolume(x_length, y_length, z_length), calcSurface(x_length, y_length, z_length));
	return 0;
}

/*直方体の体積の計算*/
int calcVolume(int x, int y, int z) {
	return x*y*z;
}

/*直方体の体積の計算*/
int calcSurface(int x, int y, int z) {
	return 2 * (x*y + y*z + z*x);
}