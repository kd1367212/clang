#include<stdio.h>

#define stacksize 8 //スタックサイズ
int stack[stacksize]; //スタック領域用の配列
int sp = 0; //スタックポインタ(配列の添字用)

void display(void);
int push(int d);
int pop(int* pd);

main()
{
	int key, data, result;

	do
	{
		printf("\n\nプッシュは i 、ポップは o を入力>>>");
		key = getche(); //ユーザが入力したら次のプログラムが始まる
		printf("\n");

		//プッシュ管理
		if (key == 'i')
		{
			printf("データ入力>>>"); scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\n※※スタックが一杯です※※\n");
			}
			else
			{
				display();
			}
		}

		//ポップ処理
		if (key == 'o')
		{
			result = pop(&data);
			if (result == -1)
			{
				printf("\n※※スタックが空です※※\n");
			}
			else
			{
				printf("スタックからデータ(%d)を取り出しました\n", data);
			}
		}
	}while (key != 'e');
}

void display(void)
{
	int i;
	printf("\n===現在の内容===\n");
	for (i = 0; i < stacksize; i++)
	{
		printf("stack[ %2d ] は %5d", i, stack[i]);
		if (i == sp)
		{
			printf("← sp が表示している所(現在 sp は %d)", sp); //確認用
		}
		printf("\n");
	}
}

int push(int d)
{
	if (sp == stacksize) { return-1; }
	stack[sp] = d;
	sp++;
	return 0;
}

int pop(int* pd)
{
	if (sp == 0) { return-1; }
	sp--; //pop するときは先に sp から -1 をしてデータを取り出す

	*pd = stack[sp];
	
	stack[sp] = 0; //確認しやすくするため
					//データを取り出したところを 0 で初期化(空にする)

	return 0;
}