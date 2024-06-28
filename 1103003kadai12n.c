//1103003 kadai12n.c
#include<stdio.h>
main()
{
	char* p = "Nippon";
	char* w = p;
	for (; *p != '\0'; p++);

	printf("ãtèáÇ…ï\é¶Ç∑ÇÈÇ∆ÅA");

	for (; w <= p; p--)
	{
		printf("%c", *p);
	}
}