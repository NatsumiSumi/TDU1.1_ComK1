#include <stdio.h>

int main(void)
{
	int ONE;
	int FIVE;
	int TEN;
	int FIFTY;
	int SUM;
	int COUNT = 0;

	printf("50‰~ 10‰~ 5‰~ 1‰~ \n");

	for (FIFTY = 0; FIFTY <= 100; FIFTY += 50)
	{
		for (TEN = 0; TEN <= 100; TEN += 10)
		{
			for (FIVE = 0; FIVE <= 100; FIVE += 5)
			{
				for (ONE = 0; ONE <= 100; ONE++)
				{
					SUM = ONE + FIVE + TEN + FIFTY;

					if (SUM == 100)
					{
						printf("%4d ",(FIFTY / 50));
						printf("%4d ",(TEN/10));
						printf("%3d ",(FIVE / 5));
						printf("%3d",ONE);
						putchar('\n');
						COUNT++;
					}
				}
			}
		}
	}

	printf("‘g‚Ý‡‚í‚¹‘”‚Í%d’Ê‚è‚Å‚· \n",COUNT);

	return 0;

}