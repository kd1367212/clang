// 1103003 kadai043.c
#include<stdio.h>
main()
{
	int code;
	printf("�����R�[�h(-1 �œ��͏I��)�H"); scanf("%d", &code);
	while (code != -1) {
		printf("%c\n", code);
		printf("�����R�[�h(-1 �œ��͏I��)�H"); scanf("%d", &code);
	}
}