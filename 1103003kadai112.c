// 1103003 kadai112.c
#include<stdio.h>
main()
{
	char data1[6] = "abcde";
	char data2[6];

	printf("(�R�s�[��) �z�� data1[ ] = ");
	int i;
	for (i = 0;data1[i]!='\0'; i++)
	{
		printf("%c", data1[i]);
		data2[i] = data1[i];
	}
	data2[i] = '\0';

	printf("\n");

	printf("(�R�s�[��) �z�� data2[ ] = ");
	for (i = 0;data[i]!='\0'; i++)
	{
		printf("%c", data2[i]);
	}
}