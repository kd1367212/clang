// 1103003 kadai062.c
#include<stdio.h>
main()
{
	int i=20;
	do {
		printf("%d ", i);
		if (i % 10 == 1) {
			printf("\n");
		}
	}while(i-- > 1);
}