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
	struct gakka data;
	struct gakka* p;
	p = &data;

	printf("���͊J�n\n");
	printf("�R�[�X�� : "); scanf("%s", p->cose);
	printf("���Ȗ� : "); scanf("%s", p->kyoka);
	printf("�P�ʐ� : "); scanf("%d", &p->tanni);

	printf("\n");
	printf("�o�͊J�n\n");
	printf("�R�[�X�� : %s\n", p->cose);
	printf("���Ȗ� : %s\n", p->kyoka);
	printf("�P�ʐ� : %d", p->tanni);
}