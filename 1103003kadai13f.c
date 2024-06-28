//1103003 kadai13f.c
#include<stdio.h>
#define num 9

void up_sort(int* p1);
void down_sort(int* p2);

main()
{
	int a[] = { 10,25,7,45,2,100,3,70,50 };
	int flag;

	printf("ソート方法 (０：昇順 １：降順)？"); scanf("%d", &flag);

	printf("ソート前\n");
	for (int i = 0; i < num; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	if (flag == 0)
	{
		up_sort(a);
	}
	else
	{
		down_sort(a);
	}

	printf("ソート後\n");
	for (int i = 0; i < num; i++)
	{
		printf("%d ", a[i]);
	}
}

void up_sort(int* p1)
{
	int w, * p_w;
	int voi, * p_voi;

	p_voi = &voi;

	p_w = p1;
	for (int i = 0; i < num - 1; i++, p_w++)
	{
		p1 = p_w + 1;
		for (int j = i + 1; j < num; j++, p1++)
		{
			if (*p_w > *p1)
			{
				*p_voi = *p_w;
				*p_w = *p1;
				*p1 = *p_voi;
			}
		}
	}
}

void down_sort(int* p1)
{
	int w, * p_w;
	int voi, * p_voi;

	p_voi = &voi;

	p_w = p1;
	for (int i = 0; i < num - 1; i++, p_w++)
	{
		p1 = p_w + 1;
		for (int j = i + 1; j < num; j++, p1++)
		{
			if (*p_w < *p1)
			{
				*p_voi = *p_w;
				*p_w = *p1;
				*p1 = *p_voi;
			}
		}
	}
}