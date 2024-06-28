// 1103003 kadai059.c
#include<stdio.h>
main()
{
	printf("     1  2  3  4  5  6  7  8  9\n\n");
	printf("==============================\n\n");
	int i, j;
	for (i = 1; i <= 9; i++) {
		printf("%d | ",i);
		for (j = 1; j <= 9; j++) {
			printf("%d ", i * j);
		}
		printf("\n");
	}
}