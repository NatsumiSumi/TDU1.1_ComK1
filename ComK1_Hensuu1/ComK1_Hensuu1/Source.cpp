#include <stdio.h>

int main(void)
{
	int base_length, height_length;
	double space;

	/* 底辺の入力 */
	printf("底辺の長さ：");
	scanf_s("%d", &base_length);
	/* 高さの入力 */
	printf("高さ：");
	scanf_s("%d", &height_length);

	/* 三角形の面積の計算 */
	space = ((double)base_length * (double)height_length) / 2;

	/* 計算結果の表示 */
	printf("底辺%d、高さ%dの三角形の面積は%.1lf \n", base_length, height_length, space);

	return 0;
}