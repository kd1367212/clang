#include<stdio.h>
main()
{
	char flag;
	printf("文字を入力:"); scanf("%c", &flag);
	if ('A' <= flag && flag <= 'Z') {
		printf("アルファベットです");
	}
	else if ('a' <= flag && flag <= 'z') {
		printf("アルファベットです");
	}
	else if ('0' <= flag && flag <= '9') {
		printf("数字です");
	}
	else {
		printf("その他の文字です");
	}
}