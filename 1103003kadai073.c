// 1103003 kadai073.c
#include<stdio.h>
main()
{
	int su; char flag;
	printf("�P�O�i���̐����H"); scanf("%d", &su);
	printf("�A���t�@�x�b�g�H(o or h or d)"); scanf("%c", &flag);
	printf("%c", flag);
	switch (flag) {
	case 'o':
		printf("%o", su);
		break;

	case 'h':
		printf("%x", su);
		break;

	default:
		printf("%d", su);
	}
}