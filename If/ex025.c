#include<stdio.h>
main()
{
	char flag;
	printf("���������:"); scanf("%c", &flag);
	if ('A' <= flag && flag <= 'Z') {
		printf("�A���t�@�x�b�g�ł�");
	}
	else if ('a' <= flag && flag <= 'z') {
		printf("�A���t�@�x�b�g�ł�");
	}
	else if ('0' <= flag && flag <= '9') {
		printf("�����ł�");
	}
	else {
		printf("���̑��̕����ł�");
	}
}