#include<stdio.h>
main()
{
	int a = 100, b = 200, work;
	int* p_a, * p_b;
	p_a = &a; p_b = &b;
	printf("実行前：a = %d\tb= %d\n", *p_a, *p_b);

	//入れ替え
	work = *p_a;
	*p_a = *p_b;
	*p_b = work;

	printf("実行後：a = %d\tb = %d", *p_a, *p_b);
}