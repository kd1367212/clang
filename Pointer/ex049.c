#include<stdio.h>
main()
{
	int a = 100, b;
	int* p_a;
	p_a = &a;
	b = *p_a;
	printf("a = %d\tb = %d\t*p_a = %d", a, b, *p_a);
	//printf("a = %d\tb = %d\t*p_a = %d", a, b, p_a);
}