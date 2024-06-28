// 1103003 kadai121.c
#include<stdio.h>
main()
{
	int a=100, b=10;
	int* p_a, * p_b;

	p_a = &a; p_b = &b;

	printf("%d + %d = %d\n", a, b, *p_a + *p_b);
	printf("%d - %d = %d\n", a, b, *p_a - *p_b);
	printf("%d * %d = %d\n", a, b, *p_a * *p_b);
	printf("%d / %d = %d", a, b, *p_a / *p_b);
}