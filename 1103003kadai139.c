// 1103003 kadai139.c
#include<stdio.h>

void moji_su(char moji, int su);

main()
{
	int x;
	char y;

	printf("文字？："); scanf("%c", &y);
	printf("整数？："); scanf("%d", &x);
	moji_su(y, x);
}

void moji_su(char moji, int su)
{
	for (int i = 0; i < su; i++)
	{
		putchar(moji);
	}
}