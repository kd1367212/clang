// 1103003 kadai113.c
#include<stdio.h>
main()
{
	char data[] = "GameSoft";

	printf("文字列 = ");
	int i;
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("\n文字数 = %d 文字",i);
}