//sort03.c 解答 基本挿入法
#include<stdio.h>
main()
{
	int d[] = { 30,7,25,16,10 };
	int w;

	//ソート前を表示
	printf("ソート前の配列\nd[ ] = ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");

	//並べ替えプログラム
	for (int i = 1; i < 5; i++)
	{
		for (int j = i-1; j>=0; j--)
		{
			//d[j]よりd[j+1]のほうが小さかったらデータをずらしていく(昇順)

			//d[j]<d[j+1]になるとずらさなくて良いので for j のループを抜ける
			if (d[j + 1] >= d[j])break;

			//並べ替え開始
			w = d[j];
			d[j] = d[j + 1];
			d[j + 1] = w;
		}
	}

	//ソート後を表示
	printf("ソート後の配列\nd[ ] = ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}