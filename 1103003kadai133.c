// 1103003 kadai133.c
#include<stdio.h>
main()
{
	int su, max = 0, min = 999;

	printf("���� (^z �ŏI��)�H");
	while (scanf("%d", &su) != EOF)
	{
		if (su > max)
		{
			max = su;
		}

		if (su < min)
		{
			min = su;
		}
		printf("���� (^z �ŏI��)�H");
	}
	printf("max = %d\nmin = %d", max, min);
}