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

	char sto1[16] = "ガーネット";
	char sto2[16] = "アメジスト";
	char sto3[16] = "アクアマリン";
	char sto4[16] = "ダイヤモンド";
	char sto5[16] = "エメラルド";
	char sto6[16] = "パール";
	char sto7[16] = "ルビー";
	char sto8[16] = "ペリドット";
	char sto9[16] = "サファイヤ";
	char sto10[16] = "トルマリン";
	char sto11[16] = "トパーズ";
	char sto12[16] = "タンザナイト";

	printf("何月ですか =>");
	scanf_s("%d", &mon);

	switch (mon) {
	case 1:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng1, sto1); break;
	case 2:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng2,sto2); break;
	case 3:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng3,sto3); break;
	case 4:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng4,sto4); break;
	case 5:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng5,sto5); break;
	case 6:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng6,sto6); break;
	case 7:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng7,sto7); break;
	case 8:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng8,sto8); break;
	case 9:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng9,sto9); break;
	case 10:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng10,sto10); break;
	case 11:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng11,sto11); break;
	case 12:printf("%d月のスペルは%sです。 \n誕生石は%sです。 \n", mon, eng12,sto12); break;
	default:printf("Error!!");
	}

	return 0;
}