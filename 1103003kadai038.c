// 1103003 kadai038.c
#include<stdio.h>
main()
{
	char moji;
	printf("‚P•¶š“ü—ÍH"); scanf("%c", &moji);
	if ('A' <= moji && moji <= 'Z') {
		moji = moji + 0x20;
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", moji);
	}
	else if ('a' <= moji && moji <= 'z') {
		moji = moji - 0x20;
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", moji);
	}
	else {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", moji);
	}
}