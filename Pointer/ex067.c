//ex067.c 解答
#include<stdio.h>

//strcmp関数を使うために呼び出す
#include<string.h>

main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" };
	char* p_work;

	char** pp_tbl[4];

	//並べ替え(ソート sort)プログラム
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (strcmp(p_tbl[i], p_tbl[j]) == -1)
			{
				//ソート開始
				p_work = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = p_work;

			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		pp_tbl[i] = &p_tbl[i];
		printf("%s\n", *pp_tbl[i]);
	}
}