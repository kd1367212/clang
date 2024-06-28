// 1103003 kadai033.c
#include<stdio.h>
main()
{
	char hantei = 'a';
	char  flag;
	printf("アルファベット？"); scanf("%c", &flag);
	if (flag >= hantei) {
		printf("その文字は「小文字」です");
	}
	else {
		printf("その文字は「大文字」です");
	}
}