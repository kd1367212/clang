// 1103003 kadai129.c
#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int w;

	int* p_a, * p_b,* p_w = &w;

	printf("----���s�O----\n");

	printf("�z�� a[ ] = ");
	for (p_a = a; *p_a != 0; p_a++)
	{
		printf("%d ", *p_a);
	}
	printf("\n");

	printf("�z�� b[ ] = ");
	for (p_b = b; *p_b != 0; p_b++)
	{
		printf("%d ", *p_b);
	}
	printf("\n");

	//����ւ�����
	for (p_a = a; *p_a != 0; p_a++);
	p_a--;
	
	for (p_b = b; *p_b != 0; p_b++, p_a--)
	{
		*p_b = *p_a;
	}


	printf("----���s��----\n");

	printf("�z�� a[ ] = ");
	for (p_a = a; *p_a != 0; p_a++)
	{
		printf("%d ", *p_a);
	}
	printf("\n");

	printf("�z�� b[ ] = ");
	for (p_b = b; *p_b != 0; p_b++)
	{
		printf("%d ", *p_b);
	}
}