#include<stdio.h>

int main(void) {
	int day, mon;
	
	day = 1;
	mon = 1;

	while (mon <= 10000) {
		mon = 2 * mon;
		day++;
	}

	printf("1“ú‚É‚à‚ç‚¤‹àŠz‚ª1–œ‰~‚ð’´‚¦‚é‚Ì‚Í%d“ú–Ú‚Å‚· \n", day);

	return 0;
}