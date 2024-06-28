// 1103003 kadai058.c
#include<stdio.h>
main()
{
	char moji; int su, cnt;
	su = 32; cnt = 0;
	for (moji = 32; moji <= 126; moji++) {
		printf("%X %c ", su, moji);
		su++;
		cnt++;
		if (cnt % 10 == 0) {
			printf("\n");
		}
	}
}