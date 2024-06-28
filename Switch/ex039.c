#include<stdio.h>
main()
{
	char flag; float ia, ib, ic;
	printf("処理を入力 : "); scanf("%c", &flag);
	printf("整数を入力 : "); scanf("%f %f %f", &ia, &ib, &ic);
	if (flag < 'a') {
		flag += 0x20;
	}
	switch (flag) {
	case 'd':
		if (ia >= ib) {
			if (ia >= ic) {
				printf("最大値は %.0fです", ia);
			}
			else {
				printf("最大値は %.0fです", ic);
			}
		}
		else if (ib >= ic) {
			printf("最大値は %.0fです", ib);
		}
		else {
			printf("最大値は %.0fです", ic);
		}
		break;

	case 's':
		if (ia <= ib) {
			if (ia <= ic) {
				printf("最小値は %.0fです", ia);
			}
			else {
				printf("最小値は %.0fです", ic);
			}
		}
		else if (ib <= ic) {
			printf("最小値は %.0fです", ib);
		}
		else {
			printf("最小値は %.0fです", ic);
		}
		break;

	case 'g':
		printf("合計は %.0fです", ia + ib + ic);
		break;

	case 'h':
		printf("平均は %.2fです", (ia + ib + ic) / 3);
		break;

	default:
		printf("エラー");
		break;
	}
}