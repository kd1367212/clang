// 1103003 kada117.c
#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };

	for (int i = 0; i < 7; i++)
	{
		puts(day[i]);
		putchar('\n');
	}
}