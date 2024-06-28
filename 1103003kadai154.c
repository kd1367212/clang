//1103003 kadai154.c

#include<stdio.h>
#include<string.h>

main()
{
	FILE* fp;


	//追加書き込みのコード


	//追加書き込み専用ファイル
	fp = fopen("text.data", "a");

	char retu[256];

	printf("追加するスケジュールを入力してください ( X で終了)\n");

	while (1)
	{
		gets(retu);

		if (strcmp(retu, "X") != 0)
		{
			fprintf(fp, "%s", retu);
		}
		else
		{
			break;
		}
		fprintf(fp, "\n");
	}

	//追加書き込み専用ファイルを閉じる
	fclose(fp);


	//月順にソートするコード


	//読み込み専用ファイル
	fp = fopen("text.data", "r");

	//ソート前のスケジュール内容の確認
	printf("\nソート前のスケジュール\n");
	while ((fgets(retu, 256, fp)) != NULL)
	{
		printf("%s\n", retu);
	}

	char moji[256][256], * p_moji1, * p_moji2;
	char w[256], * p_w;

	int cnt;
	for (cnt = 0; fgets(moji[cnt], 256, fp) != NULL; cnt++)
	{
		printf("通った\n");
	}

	

	//確認
	//printf("cnt =%d\n");

	fclose(fp);
}