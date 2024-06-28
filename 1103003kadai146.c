//1103003 kadai145.c

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
	struct fruit data[3] = { {"peach",300,5,3,0},
						{ "grape",200,4,10,0 },
						{ "watermelon",1500,5,8,0 } };

	struct fruit* p = data;

	int kei = 0, * p_kei = &kei;

	for (int i = 0; i < 3; i++,p++)
	{
		printf("¤•i–¼ : %s\n", p->name);

		printf("‰¿Ši : %d ‰~\n", p->price);

		printf("‚¨‘E‚ß“x : ");
		for (int i = 0; i < p->point; i++)
		{
			printf("š ");
		}
		printf("\n");

		printf("ŒÂ” : %d ŒÂ\n", p->number);

		printf("‹àŠz : \\%d-", p->price * p->number);

		*p_kei += p->price * p->number;
		
		printf("\n\n");
	}
	printf("‡Œv‹àŠz = \\%d-", *p_kei);
}