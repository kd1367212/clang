//1103003 kadai12n.c
#include<stdio.h>
main()
{
	char* p = "Nippon";
	char* w = p;
	for (; *p != '\0'; p++);

	printf("逆順に表示すると、");

	for (; w <= p; p--)
	{
		printf("%c", *p);
	}
}