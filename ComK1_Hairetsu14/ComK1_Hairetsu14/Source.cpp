#include <stdio.h>


int main(void) {
	int money[10];
	int Rmon = 0;
	int i, Yukichi, Ichiyou, Hideyo, FHundred, Hundred, Fifty, Ten, Five, One;

	money[0] = 125814;
	money[1] = 225547;
	money[2] = 132254;
	money[3] = 224321;
	money[4] = 352124;
	money[5] = 342214;
	money[6] = 382154;
	money[7] = 321014;
	money[8] = 112254;
	money[9] = 153789;


	for (i = 0; i < 10; i++) {
		Yukichi += money[i] / 10000;
		Rmon += money[i] / 10000 * 10000;
		Ichiyou += (money[i] - Rmon) / 5000;
		Rmon += (money[i] - Rmon) / 5000 * 5000;
		Hideyo = (money[i] - Rmon) / 1000;
		Rmon += (money[i] - Rmon) / 1000 * 1000;
		FHundred += (money[i] - Rmon) / 500;
		Rmon += (money[i] - Rmon) / 500 * 500;
		Hundred += (money[i] - Rmon) / 100;
		Rmon += (money[i] - Rmon) / 100 * 100;
		Fifty += (money[i] - Rmon) / 50;
		Rmon+= (money[i] - Rmon) / 50 * 50;
		Ten += (money[i] - Rmon) / 10;
		Rmon += (money[i] - Rmon) / 10 * 10;
		Five += (money[i] - Rmon) / 5;
		Rmon += (money[i] - Rmon) / 5 * 5;
		One += money[i] - Rmon;
		Rmon = 0;
	}

	printf("10000‰~ %d–‡ \n", Yukichi);
	printf("5000‰~ %d–‡ \n", Ichiyou);
	printf("1000‰~ %d–‡ \n", Hideyo);
	printf("500‰~ %d–‡ \n", FHundred);
	printf("100‰~ %d–‡ \n", Hundred);
	printf("50‰~ %d–‡ \n", Fifty);
	printf("10‰~ %d–‡ \n", Ten);
	printf("5‰~ %d–‡ \n", Five);
	printf("1‰~ %d–‡ \n", One);


	return 0;
}