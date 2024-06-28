//1103003 kadai151.c
#include<stdio.h>
#include<string.h>

main()
{
	FILE* p_f;

	//書き込み専用ファイルとして読み込む
	p_f = fopen("text.data", "w");

	char retu[256];
	
	printf("スケジュールを入力してください ( X で終了)\n");

	while (1)
	{
		gets(retu);
		if (strcmp(retu, "X") != 0)
		{
			fprintf(p_f, "%s", retu);
		}
		else
		{
			break;
		}
		fprintf(p_f, "\n");
	}

	//書き込み専用ファイルを閉じる
	fclose(p_f);
	
	printf("スケジュールファイルの内容\n");
	
	//読み込み専用ファイルとして読み込む
	p_f = fopen("text.data", "r");
	
	//fgets で文字数分 retu_out に格納されていくが余った部分は NULL値 として扱われる
	//
	//NULL値 が来たということは末尾まで入ったことを意味するのでループを抜ける
	while ((fgets(retu, 256, p_f)) != NULL)
	{
		printf("%s", retu);
	}

	//読み込み専用ファイルを閉じる
	fclose(p_f);
}