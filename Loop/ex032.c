#include<stdio.h>
main()
{
	int i, su;
	printf("数を入れて : "); scanf("%d", &su);
	for (i = 1; i < su; i++) {
		printf("%d ", i * su);
	}
}