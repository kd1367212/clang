//1103003 kadai143.c

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

	printf("¤•i–¼ : %s\n", data.name);

	printf("‰¿Ši : %d ‰~\n", data.price);

	printf("‚¨‘E‚ß“x : ");
	for (int i = 0; i < data.point; i++)
	{
		printf("š ");
	}
	printf("\n");

	printf("ŒÂ” : %d ŒÂ\n", data.number);

	printf("‹àŠz : \\%d-", data.price * data.number);
}