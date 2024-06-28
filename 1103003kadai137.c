//1103003 kadai137.c
#include<stdio.h>

int change(char moji);

main()
{
	int flag;
	char a;
	printf("アルファベット１文字"); scanf("%c", &a);
	flag = change(a);

	if (flag == 0)
	{
		printf("戻り値は、 %d なので入力した文字は、小文字です", flag);
	}
	else
	{
		printf("戻り値は、 %d なので入力した文字は、小文字です", flag);
	}
}

int change(char moji)
{
	if ('A' <= moji && moji <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}