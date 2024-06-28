//1103003 kadai138.c
#include<stdio.h>

void kosu(int cnt);

main()
{
	int su;
	printf("®”H"); scanf("%d", &su);
	kosu(su);
}

void kosu(int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		putchar('*');
	}
}