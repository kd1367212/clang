// 1103003 kadai035.c
#include<stdio.h>
main()
{
	int su;
	printf("整数？"); scanf("%d", &su);
	if (su == 0) {
		printf("入力値は「0」です");
	}
	else if (su > 0) {
		printf("入力値は「プラス」です");
	}
	else {
		printf("入力値は「マイナス」です");
	}
}