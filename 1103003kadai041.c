// 1103003 kadai041.c
#include<stdio.h>
main()
{
	int kei,cnt, su;
	kei = 0; cnt = 0;
	printf("�����i-999 �ŏI���j�H"); scanf("%d", &su);
	while (su != -999) {
		cnt++;
		kei += su;
		printf("�����i-999 �ŏI���j�H"); scanf("%d", &su);
	}
	printf("���v=%d\n", kei);
	printf("����=%.2f\n", (float)kei / (float)cnt);
}