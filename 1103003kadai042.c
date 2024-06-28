// 1103003 kadai042.c
#include<stdio.h>
main()
{
	int su, kei;
	su = 1; kei = 0;
	printf("%d", su);
	while (kei <= 300) {
		kei += su;
		su++;
		printf("%+d", su);
	}

	printf("=%d", kei);
}