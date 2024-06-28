//ex077.c 解答	main部分
#include<stdio.h>
void maxmin(int x, int y,int z, int *saidai, int *saisho);

main()
{
	//a b c は入力された数値を格納
	//a は x、b は y、c は z と連動

	//max に最大値、min に最小値を格納
	//max は *saidai、min は *saisho と連動

	int a, b, c, max, min;

	printf("整数を３つ入力"); scanf("%d%d%d", &a, &b, &c);

	maxmin(a, b, c, &max, &min);

	printf("最大値 = %d 最小値 = %d", max, min);
}


//ex077.c 解答	maxmin部分
void maxmin(int x, int y,int z, int* saidai, int* saisho)
{
	//x > y 真：(x > z 真：x 偽：z) 偽：(y > z 真：y 偽：z)
	*saidai = (x > y) ? ((x > z) ? x : z) : (y > z) ? y : z;


	//x < y 真：(x < z 真：x 偽：z) 偽：(y < z 真：y 偽：z)
	*saisho= (x < y) ? ((x < z) ? x : z) : (y < z) ? y : z;
	/*if (x > y)
	{
		if (x > z)
		{
			//x が y z どちらよりも大きいので x が最大
			*saidai = x;

			if (y > z)
			{
				//x > y > z となる
				*saisho = z;
			}
			else
			{
				//x > z > y となる
				*saisho = y;
			}

			//これ以上処理する必要がないので main に戻る
			return;
		}
	}
	else if (y > z)
	{
		//y が x z どちらよりも大きいので y が最大
		*saidai = y;

		if (x > z)
		{
			//y > x > z となる
			*saisho = z;
		}
		else
		{
			//y > z > xとなる
			*saisho = x;
		}

		//これ以上処理する必要がないので main に戻る
		return;
	}
	else
	{
		//z が x y どちらよりも大きいので z が最大
		*saidai = z;

		if (x > y)
		{
			//z > x > yとなる
			*saisho = y;
		}
		else
		{
			//z > y >x となる
			*saisho = x;
		}
	}*/
}