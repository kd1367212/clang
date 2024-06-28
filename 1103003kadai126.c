// 1103003 kadai126.c
#include<stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int* p_data=data;

	int max = 0, min = 999;
	int* p_max=&max, * p_min=&min;

	printf("配列の内容\ndata[ ] = ");
	for (int i = 0; i < 9; i++, p_data++)
	{
		printf("%d ", *p_data);

		if (*p_data > *p_max)
		{
			p_max = p_data;
		}

		if (*p_data < *p_min)
		{
			p_min = p_data;
		}
	}

	printf("\n最大値 = %d\n", *p_max);

	printf("最小値 = %d", *p_min);
}