//ex066-1.c 解答
#include<stdio.h>
main()
{
	char* p_game[] = { "wii","ds","playstation4" };
	for (int i = 0; i < 3; i++)
	{
		//ダブルポインタを宣言
		char** p;

		//ダブルポインタの初期化
		p = &p_game[i];

		//表示
		while (*p_game[i])
		{
			//原理(2024 C Programming 73ページを見ながら読むこと推奨)
			//
			//**pでp_gameの配列を指定している
			//
			//**pを１ずつ増やすと指定している配列が移動してしまう
			// 
			//文字を順番に表示するにはp_gameの配列の中身のアドレスを１ずつ増やせば
			//
			//指定している文字が移動する
			printf("%c", **p);
			*p_game[i]++;
		}
		printf("\n");
	}
}