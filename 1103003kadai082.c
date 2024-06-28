// 1103003 kadai082.c
#include<stdio.h>
main()
{
	int su, kei, cnt;
	kei = 0; cnt = 0;
	while (1) {
		printf("®”(-999 ‚ÅI—¹)H "); scanf("%d", &su);
		if (su == -999)break;
		if (su < 0)continue;
		kei += su; cnt++;
	}
	printf("‡Œv = %d\n", kei);
	printf("•½‹Ï = %.3f", (float)kei / (float)cnt);
}