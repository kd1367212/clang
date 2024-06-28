#include<stdio.h>
main()
{
	FILE* fp;

	int score = 0, max_score;

	char ch, name[20], max_name[20];

	if (fp = fopen("score.txt", "r"))
	{
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
	}
	else
	{
		printf("ファイルが読み取れません");
		return;
	}

	printf("最高得点 名前 : %s ハイスコア : %d\n\n", max_name, max_score);

	printf("プレイヤー名を入力"); scanf("%s", name);

	while (1)
	{
		printf("現在のスコア : %d ('e'で終了)\n",score);
		ch = getch();

		if (ch == 'e')break;
		score++;
	}

	if (max_score < score)
	{
		if (fp = fopen("score.txt", "w"))
		{
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);

			printf("ハイスコア更新！\n");
		}
		else
		{
			printf("ファイルが読み取れません");
			return;
		}
	}
}