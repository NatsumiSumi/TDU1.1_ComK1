#include <stdio.h>

/*����֐��̃v���g�^�C�v�錾*/
double calcDirect(double, double);
double calcParallel(double, double);

int main(void)
{
	double resist1, resist2;

	/*��R�l�̓���*/
	printf("2�̒�R�l����͂��Ă�������. \n");
	scanf("%lf%lf", &resist1, &resist2);

	/*���ʂ̕\��*/
	printf("����ڑ��̍�����R��%.2f (���j\n", calcDirect(resist1, resist2));
	printf("����ڑ��̍�����R��%.2f (���j�ł�. \n", calcParallel(resist1, resist2));

	return 0;
}

/*����ڑ��̍�����R�̌v�Z*/
double calcDirect(double x, double y) {
	return x + y;
}

/*����ڑ��̍�����R�̌v�Z*/
double calcParallel(double x, double y) {
	return x*y / (x + y);
}