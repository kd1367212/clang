//ex082.c 解答 main
#include<stdio.h>

//関数strcmpを使用するために呼び出す
#include<string.h>

#define last 8
void up_sort(int d1[]);
void down_sort(int d2[]);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	char sortflag[3];
	printf("ソート方向を入力："); scanf("%s", sortflag);
	if (strcmp(sortflag, "昇順") == 0) { up_sort(data); }
	if (strcmp(sortflag, "降順") == 0) { down_sort(data); }

	for (int i = 0; i < last; i++)
	{
		//表示
		printf("%d ", data[i]);
	}
}

//ex082.c 解答 関数宣言
void up_sort(int d1[])
{
	int w;
	for (int i = 0; i < last - 1; i++)
	{
		for (int j = i + 1; j < last; j++)
		{
			if (d1[i]>d1[j])
			{
				w = d1[i];
				d1[i] = d1[j];
				d1[j] = w;
			}
		}
	}
}

void down_sort(int d2[])
{
	int w;
	for (int i = 0; i < last - 1; i++)
	{
		for (int j = i + 1; j < last; j++)
		{
			if (d2[i] < d2[j])
			{
				w = d2[i];
				d2[i] = d2[j];
				d2[j] = w;
			}
		}
	}
}