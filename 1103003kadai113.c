// 1103003 kadai113.c
#include<stdio.h>
main()
{
	char data[] = "GameSoft";

	printf("������ = ");
	int i;
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("\n������ = %d ����",i);
}