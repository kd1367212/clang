#include<stdio.h>
main()
{
	int a = 100, b = 200, work;
	int* p_a, * p_b ,*p_work;
	p_a = &a; p_b = &b; p_work = &work;
	printf("実行前：*p_a = %d\t*p_b= %d\n", *p_a, *p_b);

	//入れ替え
	p_work = p_a;
	p_a = p_b;
	p_b = p_work;

	printf("実行後：*p_a = %d\t*p_b = %d", *p_a, *p_b);
}