// 1103003 kadai065.c
#include<stdio.h>
main()
{
	int su, kei, hei, cnt;
	kei = 0; hei = 0; cnt = 0;
	do {
		printf("����(-999 �ŏI��)�H"); scanf("%d", &su);
		if (su != -999) {
			kei += su; hei += su; cnt++;
		}
	} while (su != -999);
	printf("���v  = %d\n", kei);
	printf("���� = %f", (float)kei / (float)cnt);
}