// 1103003 kadai081.c
#include<stdio.h>
main()
{
	int su, kei, cnt;
	kei = 0; cnt = 0;
	while (1) {
		printf("����(-999 �ŏI��)�H "); scanf("%d", &su);
		if (su == -999)break;
		kei += su; cnt++;
	}
	printf("���v = %d\n", kei);
	printf("���� = %.3f", (float)kei / (float)cnt);
}