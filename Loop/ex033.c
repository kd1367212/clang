#include<stdio.h>
main()
{
	int su; float cnt, kei;
	kei = 0;
	printf("数は？ "); scanf("%d", &su);
	for (cnt = 0; su != -999; cnt++) {
		kei += su;
		printf("数は？ "); scanf("%d", &su);
	}
	printf("合計 = %.0f\t", kei);
	printf("平均 = %.2f", kei / cnt);
}