// 1103003 kadai037.c
#include<stdio.h>
main()
{
	int su;
	printf("0 ���� 100 �܂ł̐����H"); scanf("%d", &su);
	if (su >= 90) {
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�");
	}
	else if (su >= 80) {
		printf("���̐��l�̔��茋�ʂ́u�S�v�ł�");
	}
	else if (su >= 50) {
		printf("���̐��l�̔��茋�ʂ́u�R�v�ł�");
	}
	else if (su >= 30) {
		printf("���̐��l�̔��茋�ʂ́u�Q�v�ł�");
	}
	else {
		printf("���̐��l�̔��茋�ʂ́u�P�v�ł�");
	}
}