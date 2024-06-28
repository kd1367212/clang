// 1103003 kadai133.c
#include<stdio.h>
main()
{
	int su, max = 0, min = 999;

	printf("整数 (^z で終了)？");
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
		printf("整数 (^z で終了)？");
	}
	printf("max = %d\nmin = %d", max, min);
}