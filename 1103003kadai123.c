#include<stdio.h>
main()
{
	double a, b;
	double* p_a, * p_b;

	p_a = &a; p_b = &b;

	printf("実数値１？"); scanf("%lf", &a);
	printf("実数値２？"); scanf("%lf", &b);

	printf("大きい方 = ");

	if (*p_a > *p_b)
	{
		printf("%f", *p_a);
	}
	else
	{
		printf("%f", *p_b);
	}
}