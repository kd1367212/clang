//1103003 kadai12g.c
#include<stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int c[5][5],* p_a,*p_c;

	p_a = a[0];
	for (int i = 0; i < (5 * 5)-1; i++, p_a++);

	p_c = c[0];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++, p_a--,p_c++)
		{
			*p_c = *p_a;
		}
	}

	printf("”z—ñ c\n");

	p_c = c[0];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++, p_c++)
		{
			printf("%d ", *p_c);
		}
		printf("\n");
	}
}