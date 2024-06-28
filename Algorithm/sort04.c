//シェルソート(改良型挿入法)による昇順ソート
#include<stdio.h>

//データ数を定義
#define dcnt 8

main()
{
	int d[dcnt] = { 70,60,80,50,40,20,30,10 };
	int w, gap;

	gap = dcnt / 2;//全データ数/2で最初の比較間隔を求める

	//ソート前確認用
	printf("ソート前\nd[ ] = ");
	for (int k = 0; k < dcnt; k++)
	{
		printf("%d ", d[k]);
	}
	printf("\n");

	while (gap > 0)
	{
		for (int i = gap; i < dcnt; i++)
		{
			for (int j = i - gap; j >= 0; j -= gap)
			{
				if (d[j + gap] < d[j])
				{
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else break;


			}
		}

		gap /= 2;
	}

	//ソート後確認用
	printf("ソート後\nd[ ] = ");
	for (int k = 0; k < dcnt; k++)
	{
		printf("%d ", d[k]);
	}
}
