#include<stdio.h>
main()
{
	int i, su;
	printf("�������� : "); scanf("%d", &su);
	for (i = 1; i < su; i++) {
		printf("%d ", i * su);
	}
}