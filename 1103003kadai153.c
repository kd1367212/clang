//1103003 kadai153.c

#include<stdio.h>
#include<string.h>

#define num 256
main()
{
	FILE* p_f;

	//読み込み専用ファイルとして読み込む
	p_f = fopen("text.data", "r");

	char moji[256][256];

	char tuki[256], * p = tuki;
	char tuki_suke[256];
	printf("表示する月を入力してください>>>"); scanf("%s", &tuki);

	printf("%s 月のスケジュール\n",tuki);

	//配列に各行ごとの文字列を格納
	for (int i = 0; i < num && fgets(moji[i], num, p_f) != NULL; i++)
	{
		//数字が２桁のとき
		sscanf(moji[i], "%2s", tuki_suke);

		if (strcmp(tuki, tuki_suke) == 0)
		{
			printf("%s\n", moji[i]);
		}

		//数字が１桁のとき
		sscanf(moji[i], "%1s", tuki_suke);

		if (strcmp(tuki, tuki_suke) == 0)
		{
			printf("%s\n", moji[i]);
		}
	}

	fclose(p_f);
}