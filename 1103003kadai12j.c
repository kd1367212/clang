//1103003 kadai12j.c
#include<stdio.h>
main()
{
	char data1[] = "ringo";
	char data2[256];

	char* p1, * p2;

	p1 = data1;
	p2 = data2;

	printf("�z����e = %s\n", data1);

	for (; *p1 != '\0'; p1++);
	p1--;

	for (; data1 <= p1; p1--, p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';

	printf("�t������ = %s", data2);
}