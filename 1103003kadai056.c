// 1103003 kadai056.c
#include<stdio.h>
main()
{
	char cnt,i;
	printf("アルファベット小文字？"); scanf("%c", &cnt);
	for (i=cnt; i <= 0X7A; i++) {
		printf("%c ", i);
	}
}