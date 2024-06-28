// 1103003 kadai132.c
#include<stdio.h>
main()
{
	int su, kei = 0, cnt = 0;

	printf("整数(^ z で終了)？");
	while (scanf("%d", &su) != -1)
	{
		kei += su;
		cnt++;

		printf("整数 (^z で終了)？");
	}
	printf("合計 = %d\n平均 = %.3f", kei, (float)kei / cnt);
}