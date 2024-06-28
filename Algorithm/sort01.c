//sort01.c 解答 基本選択法(総当たり)
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
	for (int i = 0; i < 4; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			//d[i]を基準に、d[j]と比較してj++してまた比較してを繰り返す

			//d[j]のほうが小さかったら並べ替えをする(昇順)
			if (d[i] > d[j])
			{
				//並べ替え開始
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}

	//ソート後を表示
	printf("ソート後の配列\nd[ ] = ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}