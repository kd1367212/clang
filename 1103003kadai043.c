// 1103003 kadai043.c
#include<stdio.h>
main()
{
	int code;
	printf("文字コード(-1 で入力終了)？"); scanf("%d", &code);
	while (code != -1) {
		printf("%c\n", code);
		printf("文字コード(-1 で入力終了)？"); scanf("%d", &code);
	}
}