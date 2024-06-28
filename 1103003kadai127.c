// 1103003 kadai127.c
#include<stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p_data = data;

	double kei, * p_kei = &kei;

	int i;
	for (i = 0; i < 5; i++, p_data++)
	{
		*p_kei += *p_data;
	}

	printf("‡Œv %.3f\n", *p_kei);

	printf("•½‹Ï %.3f", *p_kei / (double)i);
}