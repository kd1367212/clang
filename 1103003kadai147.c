// 1103003 kadai147.c

#include<stdio.h>
#include<string.h>

struct animal
{
	int no;
	char name[20];
	char color[20];
};

main()
{
	struct animal data[50] = { {30,"dog","white"},
							{50,"tiger","yellow"},
							{60,"horse","brown"} }, * p_data = data;

	char firstflag, dumy[2];

	do
	{
		
		printf("処理メニュー (X の入力で終了します)\n");
		printf("１：データ表示 ２：データ追加 ３：データ検索 処理は？"); scanf("%c", &firstflag);

		if (firstflag == '1')
		{
			printf("すべてのデータを表示します。\n");

			for (int i = 0; data[i].no > 0; i++)
			{
				printf("番号 : %d\t名前 : %s\t色 : %s\n\n", data[i].no, data[i].name, data[i].color);
			}
		}
		else if (firstflag == '2')
		{
			int i;
			for (i = 0; data[i].no > 0; i++);

			printf("データの追加を行いますので入力してください。\n");

			printf("番号>"); scanf("%d", &data[i].no);
			printf("名前>"); scanf("%s", data[i].name);
			printf("色 >"); scanf("%s", data[i].color);
		}
		else if (firstflag == '3')
		{
			printf("登録されているデータの検索を行います。\n");

			int secondeflag;
			printf("検索項目 ( 1.番号 : 2.名前 : 3.色) >"); scanf("%d", &secondeflag);

			if (secondeflag == 1)
			{
				int number;
				printf("検索する番号>"); scanf("%d", &number);

				printf("\n検索結果\n");

				for (int i = 0; data[i].no > 0; i++)
				{
					if (data[i].no == number)
					{
						printf("番号 : %d\t名前 : %s\t色 : %s\n", data[i].no, data[i].name, data[i].color);
					}
				}
			}
			else if (secondeflag == 2)
			{
				char namae[256];
				printf("検索する名前>"); scanf("%s", namae);

				printf("\n検索結果\n");

				for (int i = 0; data[i].no > 0; i++)
				{
					if (strcmp(data[i].name, namae) == 0)
					{
						printf("番号 : %d\t名前 : %s\t色 : %s\n", data[i].no, data[i].name, data[i].color);
					}
				}
			}
			else if (secondeflag == 3)
			{
				char iro[256];
				printf("検索する色>"); scanf("%s", iro);

				printf("\n検索結果\n");

				for (int i = 0; data[i].no > 0; i++)
				{
					if (strcmp(data[i].color, iro) == 0)
					{
						printf("番号 : %d\t名前 : %s\t色 : %s\n", data[i].no, data[i].name, data[i].color);
					}
				}
			}
		}
		gets(dumy);
	} while (firstflag != 'X');
}