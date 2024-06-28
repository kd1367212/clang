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
	struct gakka data = { "ゲームソフト I コース","C言語",8 };
	printf("コース名 : %s\n", data.cose);
	printf("教科名 : %s\n", data.kyoka);
	printf("単位数 : %d", data.tanni);
}