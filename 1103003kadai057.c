// 1103003 kadai057.c
#include<stdio.h>
main()
{
	char cnt,i;
	printf("アルファベット大文字？"); scanf("%c", &cnt);
	for (i=cnt; i <= 0X5A; i++) {
		printf("%c ", i);
	}
}