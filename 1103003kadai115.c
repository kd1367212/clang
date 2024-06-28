// 1103003 kadai115.c
#include<stdio.h>
main()
{
	char data[256];

	printf("•¶š—ñ‚ÍH"); scanf("%s", data);

	for (int i = 0; data[i] != '\0'; i++)
	{
		putchar(data[i]);
		putchar('\n');
	}
}