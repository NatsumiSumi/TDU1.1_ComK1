#include <stdio.h>

int main(void)
{
	int y;

	printf("�������͂��Ă������� \n");
	scanf("%d", &y);

	if (y % 400 == 0) {
		printf("%d�͂��邤�N�ł� \n", y);
	}

	else if (y % 100 == 0) {
		printf("%d�͕��N�ł� \n", y);
	}

	else if (y % 4 == 0) {
		printf("%d�͂��邤�N�ł� \n", y);
	}

	else {
		printf("%d�͕��N�ł� \n",y);
	}

	return 0;
}