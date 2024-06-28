#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í:"); scanf("%c", &moji);
	if ('a' <= moji && moji <= 'z') {
		moji = moji - 0x20;
		printf("•ÏŠ·‚·‚é‚Æ %c", moji);
	}
	else if ('A' <= moji && moji <= 'Z') {
		moji = moji + 0x20;
		printf("•ÏŠ·‚·‚é‚Æ %c", moji);
	}
	else {
		printf("ƒGƒ‰[");
	}
}