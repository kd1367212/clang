// 1103003 kadai141.c
#include<stdio.h>

struct gakka
{
	char cose[256];
	char kyoka[256];
	int tanni;
};

main()
{
	struct gakka data = { "�Q�[���\�t�g I �R�[�X","C����",8 };
	printf("�R�[�X�� : %s\n", data.cose);
	printf("���Ȗ� : %s\n", data.kyoka);
	printf("�P�ʐ� : %d", data.tanni);
}