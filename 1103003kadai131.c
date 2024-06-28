//1103003 kadai131.c
#include<stdio.h>

main()
{
	int a;
	char dum[256];

	a = getchar();
	while (a != EOF)
	{
		putchar(a);
		putchar('\0');
		printf("\n\n");

		gets(dum);

		a = getchar();
	}
}