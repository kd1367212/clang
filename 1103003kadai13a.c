// 1103003 kadai13a.c
#include<stdio.h>

long bekijyou(long a, long b);

main()
{
	long x, y, kotae;
	printf("���l�P�H"); scanf("%ld", &x);
	printf("���l�Q�H"); scanf("%ld", &y);

	kotae = bekijyou(x, y);
	printf("%ld �� %ld ��́A%ld", x, y, kotae);
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