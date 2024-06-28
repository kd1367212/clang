//1103003 kadai136.c
#include<stdio.h>

int s_max(int a, int b);

main()
{
	int x, y,max;

	printf("‚Q‚Â‚Ì®”H"); scanf("%d%d", &x, &y);
	
	printf("max = %d", s_max(x,y));
}

int s_max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}