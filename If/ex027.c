#include<stdio.h>
main()
{
	char moji;
	printf("���������:"); scanf("%c", &moji);
	if ('a' <= moji && moji <= 'z') {
		moji = moji - 0x20;
		printf("�ϊ������ %c", moji);
	}
	else if ('A' <= moji && moji <= 'Z') {
		moji = moji + 0x20;
		printf("�ϊ������ %c", moji);
	}
	else {
		printf("�G���[");
	}
}