#include <stdio.h>

int main(void) {
	int kuku[9][9];
	int i;

	for (i = 1; i < 10;i++) {
		kuku[i][0] = i * 1;
		kuku[i][1] = i * 2;
		kuku[i][2] = i * 3;
		kuku[i][3] = i * 4;
		kuku[i][4] = i * 5;
		kuku[i][5] = i * 6;
		kuku[i][6] = i * 7;
		kuku[i][7] = i * 8;
		kuku[i][8] = i * 9;
	}

	for (i = 1; i < 10; i++) {
		printf("%3d ", kuku[i][0]);
		printf("%3d ", kuku[i][1]);
		printf("%3d ", kuku[i][2]);
		printf("%3d ", kuku[i][3]);
		printf("%3d ", kuku[i][4]);
		printf("%3d ", kuku[i][5]);
		printf("%3d ", kuku[i][6]);
		printf("%3d ", kuku[i][7]);
		printf("%3d ", kuku[i][8]);
		printf("\n");
	}

	printf("\n");

	return 0;
}