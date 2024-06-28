//1103003 kadai144.c

#include<stdio.h>

struct fruit
{
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	struct fruit data = { "peach",300,5,3,0 };
	struct fruit* p = &data;

	printf("¤•i–¼ : %s\n", p->name);

	printf("‰¿Ši : %d ‰~\n",p->price);

	printf("‚¨‘E‚ß“x : ");
	for (int i = 0; i < p->point; i++)
	{
		printf("š ");
	}
	printf("\n");

	printf("ŒÂ” : %d ŒÂ\n", p->number);

	printf("‹àŠz : \\%d-", p->price * p->number);
}