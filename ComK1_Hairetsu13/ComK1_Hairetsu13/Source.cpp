#include <stdio.h>
#include <string.h>

int main(void) {
	int mon;

	char eng1[11] = "January";
	char eng2[11] = "Febuary";
	char eng3[11] = "March";
	char eng4[11] = "April";
	char eng5[11] = "May";
	char eng6[11] = "June";
	char eng7[11] = "July";
	char eng8[11] = "August";
	char eng9[11] = "September";
	char eng10[11] = "October";
	char eng11[11] = "November";
	char eng12[11] = "December";

	char sto1[16] = "�K�[�l�b�g";
	char sto2[16] = "�A���W�X�g";
	char sto3[16] = "�A�N�A�}����";
	char sto4[16] = "�_�C�������h";
	char sto5[16] = "�G�������h";
	char sto6[16] = "�p�[��";
	char sto7[16] = "���r�[";
	char sto8[16] = "�y���h�b�g";
	char sto9[16] = "�T�t�@�C��";
	char sto10[16] = "�g���}����";
	char sto11[16] = "�g�p�[�Y";
	char sto12[16] = "�^���U�i�C�g";

	printf("�����ł��� =>");
	scanf_s("%d", &mon);

	switch (mon) {
	case 1:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng1, sto1); break;
	case 2:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng2,sto2); break;
	case 3:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng3,sto3); break;
	case 4:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng4,sto4); break;
	case 5:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng5,sto5); break;
	case 6:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng6,sto6); break;
	case 7:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng7,sto7); break;
	case 8:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng8,sto8); break;
	case 9:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng9,sto9); break;
	case 10:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng10,sto10); break;
	case 11:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng11,sto11); break;
	case 12:printf("%d���̃X�y����%s�ł��B \n�a���΂�%s�ł��B \n", mon, eng12,sto12); break;
	default:printf("Error!!");
	}

	return 0;
}