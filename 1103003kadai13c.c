//  1103003 kadai13c.c
#include<stdio.h>

void change(int* p_a,int *p_b);

main()
{
	int a=10, b=20;

	printf("�֐����s�O�̒l\n");
	printf("a = %d\tb = %d\n\n",a,b);

	change(&a, &b);

	printf("�֐����s��̒l\n");
	printf("a = %d\tb = %d",a,b);
}

void change(int* p_a, int *p_b)
{
	int* p_w;

	*p_w = *p_a;
	*p_a = *p_b;
	*p_b = *p_w;
}