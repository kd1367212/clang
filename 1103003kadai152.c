//1103003 kadai152.c

#include<stdio.h>
#include<string.h>

main()
{
	FILE* p_f;

	//追加書き込み専用ファイルとして読み込む
	p_f = fopen("text.data", "a");

	char retu[256];

	printf("追加するスケジュールを入力してください ( X で終了)\n");

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

	printf("スケジュールファイルの内容\n");

	//追加書き込み専用ファイルを閉じる
	fclose(p_f);

	//読み込み専用ファイルとして読み込む
	p_f = fopen("text.data", "r");

	//（）を２重にすることで文字列の一番最後の NULL を指定することができる
	//１つだと改行を意味する
	while ((fgets(retu, 256, p_f)) != NULL)
	{
		printf("%s", retu);
	}

	//読み込み専用ファイルを閉じる
	fclose(p_f);
}