//1103003 kadai12k.c
#include<stdio.h>
main()
{
	char data[] = "mikan to ringo";
	
	char* p;

	printf("�󔒂��������z����e = ");

	p = data;
	for (; *p != '\0'; p++)
	{
		if (*p == ' ')continue;

		printf("%c", *p);
	}
}