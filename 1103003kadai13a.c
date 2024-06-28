// 1103003 kadai13a.c
#include<stdio.h>

long bekijyou(long a, long b);

main()
{
	long x, y, kotae;
	printf("数値１？"); scanf("%ld", &x);
	printf("数値２？"); scanf("%ld", &y);

	kotae = bekijyou(x, y);
	printf("%ld の %ld 乗は、%ld", x, y, kotae);
}

long bekijyou(long a, long b)
{
	long w = a;
	for (long i = 0; i < b-1; i++)
	{
		a *= w;
	}
	return a;
}