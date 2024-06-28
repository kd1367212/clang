//sort02.c 解答 バブルソート
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
	for (int i = 4; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			//+1をすることで隣のデータを指定することができる

			//d[j+1]の方が小さかったら並べ替えをする(昇順)
			if(d[j]>d[j+1])
				{

				//並べ替え開始
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
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