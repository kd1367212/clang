// 1103003 kadai037.c
#include<stdio.h>
main()
{
	int su;
	printf("0 から 100 までの整数？"); scanf("%d", &su);
	if (su >= 90) {
		printf("その数値の判定結果は「５」です");
	}
	else if (su >= 80) {
		printf("その数値の判定結果は「４」です");
	}
	else if (su >= 50) {
		printf("その数値の判定結果は「３」です");
	}
	else if (su >= 30) {
		printf("その数値の判定結果は「２」です");
	}
	else {
		printf("その数値の判定結果は「１」です");
	}
}