// 1103003 kadai114.c
#include<stdio.h>
main()
{
	char data[256];

	printf("������́H"); scanf("%s", data);

	printf("������ : ");
	int i;
	for (i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("\t������ = %d ����",i);
}