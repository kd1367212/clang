// 1103003 kadai038.c
#include<stdio.h>
main()
{
	char moji;
	printf("１文字入力？"); scanf("%c", &moji);
	if ('A' <= moji && moji <= 'Z') {
		moji = moji + 0x20;
		printf("変換結果は%c", moji);
	}
	else if ('a' <= moji && moji <= 'z') {
		moji = moji - 0x20;
		printf("変換結果は%c", moji);
	}
	else {
		printf("変換結果は%c", moji);
	}
}