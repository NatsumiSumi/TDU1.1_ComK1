#include <stdio.h>

int main(void)
{
	int y;

	printf("西暦を入力してください \n");
	scanf("%d", &y);

	if (y % 400 == 0) {
		printf("%dはうるう年です \n", y);
	}

	else if (y % 100 == 0) {
		printf("%dは平年です \n", y);
	}

	else if (y % 4 == 0) {
		printf("%dはうるう年です \n", y);
	}

	else {
		printf("%dは平年です \n",y);
	}

	return 0;
}