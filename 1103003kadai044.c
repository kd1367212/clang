// 1103003 kadai044.c
#include<stdio.h>
main()
{
	int su;
	printf("整数(-999 で入力終了)？"); scanf("%d", &su);
	while (su != -999) {
		printf("８進数 = %o\t１６進数 = %X\n", su, su);
		printf("整数(-999 で入力終了)？"); scanf("%d", &su);
	}
}