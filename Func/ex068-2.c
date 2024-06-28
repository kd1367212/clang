//ex068-2.c 解答
#include<stdio.h>
main()
{
	char str[200];
	printf("文字列を入力：");
	while (gets(str) != NULL)	//strに[ ]がないので
								//strの先頭アドレスから順に文字列が格納されていく
	{
		printf("%s\n", str);
		printf("文字列を入力：");
	}
}