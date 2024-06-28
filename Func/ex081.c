//ex081.c 解答
#include<stdio.h>

#define last 8
void maxmin(int d[],int *max,int *min);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	
	//maxmin 関数にある if 文が必ず一回は通るようにする
	int max=0, min=999;

	maxmin(data, &max, &min);

	//表示
	printf("最大値 = %d\n最小値  = %d", max, min);
}

void maxmin(int d[], int* max, int* min)
{
	for (int i = 0; i < last; i++)
	{
		if (d[i]>*max)
		{
			*max = d[i];
		}
		
		if (d[i] < *min)
		{
			*min = d[i];
		}
	}
}