//ex065.c 解答
#include<stdio.h>

//strcmp関数を使うために呼び出す
#include<string.h>

main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" };
	char* p_work;
	//並べ替え(ソート sort)プログラム
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			//１つ目の文字列の方が大きい場合("A>B"のとき１を返す)
			if (strcmp(p_tbl[i], p_tbl[j]) == 1)
			{
				printf("%d ", strcmp(p_tbl[i], p_tbl[j]));
				//ソート開始
				p_work = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = p_work;

			}
		}
		printf("\n");
	}

	//表示
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", p_tbl[i]);
	}
}