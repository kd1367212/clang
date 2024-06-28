// 1103003 kada11b.c
#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };

	int flag;
	printf("”’l‚ÍH (0`6)"); scanf("%d", &flag);

	for (int i = 0; i < 7; i++)
	{
		if (i == flag)
		{
			puts(day[i]);
		}
	}
}