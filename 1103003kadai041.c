// 1103003 kadai041.c
#include<stdio.h>
main()
{
	int kei,cnt, su;
	kei = 0; cnt = 0;
	printf("整数（-999 で終了）？"); scanf("%d", &su);
	while (su != -999) {
		cnt++;
		kei += su;
		printf("整数（-999 で終了）？"); scanf("%d", &su);
	}
	printf("合計=%d\n", kei);
	printf("平均=%.2f\n", (float)kei / (float)cnt);
}