// 1103003 kadai132.c
#include<stdio.h>
main()
{
	int su, kei = 0, cnt = 0;

	printf("����(^ z �ŏI��)�H");
	while (scanf("%d", &su) != -1)
	{
		kei += su;
		cnt++;

		printf("���� (^z �ŏI��)�H");
	}
	printf("���v = %d\n���� = %.3f", kei, (float)kei / cnt);
}