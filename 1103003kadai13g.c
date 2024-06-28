// 1103003 kadai13g.c
#include<stdio.h>

main(int dumy, char* moji[])
{
	char data[5] = { 'A','B','C','D','E' };
	
	//printf("%d\n", dumy);

	if (dumy == 1)
	{
		for (int i = 0; i < 5; i++)
		{
			printf("%c---", data[i]);
			printf("%d\t", data[i]);
		}
	}

	if (*moji[1] == 'H')
	{
		for (int i = 0; i < 5; i++)
		{
			printf("%c--- 0x%x\t", data[i], data[i]);
		}
	}
	else if(*moji[1]=='D')
	{
		for (int i = 0; i < 5; i++)
		{
			printf("%c---", data[i]);
			printf("%d\t", data[i]);
		}
	}

}	