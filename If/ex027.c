#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力:"); scanf("%c", &moji);
	if ('a' <= moji && moji <= 'z') {
		moji = moji - 0x20;
		printf("変換すると %c", moji);
	}
	else if ('A' <= moji && moji <= 'Z') {
		moji = moji + 0x20;
		printf("変換すると %c", moji);
	}
	else {
		printf("エラー");
	}
}