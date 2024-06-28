// 1103003 kada13e.c
#include<stdio.h>
#define num 9

void s_max(int *p1,int *p_max);
void s_min(int *p2,int *p_min);

main()
{
	int a[] = { 10,25,7,45,2,100,3,70,50 };
	int max = 0, min = 999;

	printf("”z—ñ‚Ì“à—e\n");
	for (int i = 0; i < num; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	s_max(a,&max);
	s_min(a,&min);

	printf("max = %d\tmin = %d", max, min);
}

void s_max(int*p1,int *p_max)
{
	for(int i=0;i<num;i++,p1++)
	{
		if (*p1 > *p_max)
		{
			*p_max = *p1;
		}
	}
}

void s_min(int* p2, int* p_min)
{
	for (int i =0;i<num;i++, p2++)
	{
		if (*p2 < *p_min)
		{
			*p_min = *p2;
		}
	}
}