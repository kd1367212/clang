// 1103003 kadai114.c
#include<stdio.h>
main()
{
	char data[256];

	printf("文字列は？"); scanf("%s", data);

	printf("文字列 : ");
	int i;
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("\t文字数 = %d 文字",i);
}