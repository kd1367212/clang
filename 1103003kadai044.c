// 1103003 kadai044.c
#include<stdio.h>
main()
{
	int su;
	printf("����(-999 �œ��͏I��)�H"); scanf("%d", &su);
	while (su != -999) {
		printf("�W�i�� = %o\t�P�U�i�� = %X\n", su, su);
		printf("����(-999 �œ��͏I��)�H"); scanf("%d", &su);
	}
}