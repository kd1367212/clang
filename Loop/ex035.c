#include<stdio.h>
main()
{
	int su, kei;
	kei = 0;
	while (1) {
		printf("数を入れて : "); scanf("%d", &su);
		if (su == -999)break;
		kei += su;
	}
	printf("合計=%d", kei);
}