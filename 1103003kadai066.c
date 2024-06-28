// 1103003 kadai066.c
#include<stdio.h>
main()
{
	int i, kei;
	i = 1; kei = 0;
	do {
		kei += i;
		printf("%d", i);
		i++;
		if (kei <= 300) {
			printf("+");
		}
	} while (kei <= 300);
	printf("=%d", kei);
}