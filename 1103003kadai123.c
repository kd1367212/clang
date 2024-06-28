#include<stdio.h>
main()
{
	double a, b;
	double* p_a, * p_b;

	p_a = &a; p_b = &b;

	printf("ŽÀ”’l‚PH"); scanf("%lf", &a);
	printf("ŽÀ”’l‚QH"); scanf("%lf", &b);

	printf("‘å‚«‚¢•û = ");

	if (*p_a > *p_b)
	{
		printf("%f", *p_a);
	}
	else
	{
		printf("%f", *p_b);
	}
}