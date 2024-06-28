//ex084.c 解答
#include<stdio.h>
void reverse(char* p1,char *p2);

main()
{
	char str1[256],str2[256];
	printf("文字列？："); gets(str1);
	printf("str1：%s\n", str1);
	reverse(str1, str2);
	printf("str2：%s", str2);
}

void reverse(char* p1, char* p2)
{
	//p1 に先頭アドレスを保存する
	char* w;
	w = p1;

	//p1 を '\0'までずらし１を引いて文字を指定させる
	for (; *p1 != '\0';p1++);
	p1--;

	//p1 の末尾を p2 の先頭に代入していく
	//p1 を先頭にいかせ(-1)、
	//p2 を末尾にいかせる(+1)
	//そして代入を繰り返す

	//w に先頭アドレスを保存しておいたので
	//w より下にいったらループを抜ける(入れ替え終了)
	for (; p1 >= w; p1--, p2++)
	{
		*p2 = *p1;
	}
	//p2 の末尾に'\0' を代入
	*p2 = '\0';
}