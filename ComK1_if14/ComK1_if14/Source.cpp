#include <stdio.h>

int main(void)
{
	int y;

	printf("西暦を入力してください \n");
	scanf("%d", &y);

	if (y % 400 == 0) {
		printf("%dはうるう年です", y);
	}

	else if (y % 100 == 0) {
		printf("%dは平年です", y);
	}

	else if (y % 4 == 0) {
		printf("%dはうるう年です", y);
	}

	else {
		printf("%dは平年です,y");
	}

	return 0;
}