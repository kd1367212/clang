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

	printf("入力開始\n");
	printf("コース名 : "); scanf("%s", p->cose);
	printf("教科名 : "); scanf("%s", p->kyoka);
	printf("単位数 : "); scanf("%d", &p->tanni);

	printf("\n");
	printf("出力開始\n");
	printf("コース名 : %s\n", p->cose);
	printf("教科名 : %s\n", p->kyoka);
	printf("単位数 : %d", p->tanni);
}