#include <stdio.h>

/*����֐��̃v���g�^�C�v�錾*/
int divideNum_f(int);
int divideNum_l(int);

int main(void)
{
	int num;

	/*�����̓���*/
	printf("5���̐�������͂��Ă��������B\n");
	scanf("%d", &num);

	/*���ʂ̕\��*/
	printf("���=%d \n", divideNum_f(num));
	printf("���O��=%d \n", divideNum_l(num));

	return 0;
}

/*��񌅂����߂�*/
int divideNum_f(int x) {
	return x / 1000;
}

/*���O�������߂�*/
int divideNum_l(int x) {
	return x % 1000;
}