// 1103003 kadai034.c
#include<stdio.h>
main()
{
	char moji;
	printf("�P�������́H"); scanf("%c", &moji);
	if ((moji < 'A' || 'Z<' < moji) && (moji < 'a' || 'z' < moji)) {
		printf("ERROR");
	}
}