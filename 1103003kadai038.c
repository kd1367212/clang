// 1103003 kadai038.c
#include<stdio.h>
main()
{
	char moji;
	printf("�P�������́H"); scanf("%c", &moji);
	if ('A' <= moji && moji <= 'Z') {
		moji = moji + 0x20;
		printf("�ϊ����ʂ�%c", moji);
	}
	else if ('a' <= moji && moji <= 'z') {
		moji = moji - 0x20;
		printf("�ϊ����ʂ�%c", moji);
	}
	else {
		printf("�ϊ����ʂ�%c", moji);
	}
}