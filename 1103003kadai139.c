// 1103003 kadai139.c
#include<stdio.h>

void moji_su(char moji, int su);

main()
{
	int x;
	char y;

	printf("�����H�F"); scanf("%c", &y);
	printf("�����H�F"); scanf("%d", &x);
	moji_su(y, x);
}

void moji_su(char moji, int su)
{
	for (int i = 0; i < su; i++)
	{
		putchar(moji);
	}
}