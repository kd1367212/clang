//ex085.c 解答
#include<stdio.h>

void ketugo(char* a, char* b);

main()
{
	char a[256], b[256];
	printf("配列 a : "); gets(a);
	printf("配列 b : "); gets(b);
	ketugo(a, b);
	printf("配列 a : %s", a);
}

void ketugo(char* a, char* b)
{
	//'\0'まで a のアドレスを移動する
	for (; *a != '\0'; a++);

	//結合開始
	while (*b)//*b != '\0'の間
	{
		//aのアドレスは a[256] の '\0' の部分を指定している
		//a[256] の '\0'から b[256] の文字列を代入していく
		*a = *b;
		a++; b++;
	}
	//ラストに '\0'を代入する
	*a = '\0';
}