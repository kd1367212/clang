#include<stdio.h>
main()
{
	double a, b;
	double* p_a, * p_b;

	p_a = &a; p_b = &b;

	printf("�����l�P�H"); scanf("%lf", &a);
	printf("�����l�Q�H"); scanf("%lf", &b);

	printf("�傫���� = ");

	if (*p_a > *p_b)
	{
		printf("%f", *p_a);
	}
	else
	{
		printf("%f", *p_b);
	}
}