// 1103003 kadai064.c
#include<stdio.h>
main()
{
	int i = 20;
	while (i > 1) {
		i--;
		printf("%d ", i);
		if (i % 10 == 1) {
			printf("\n");
		}
	}
}