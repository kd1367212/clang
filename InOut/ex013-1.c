#include<stdio.h>
main()
{
	char moji1, moji2;
	moji1 = '5'; moji2 = '6';
	printf("5 * 6 = %d", (moji1 - 0x30) * (moji2 - 0x30));
}