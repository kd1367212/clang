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
	
	int kei=0;
	for (int i = 0; i < 3; i++)
	{
		printf("¤•i–¼ : %s\n", data[i].name);

		printf("‰¿Ši : %d ‰~\n", data[i].price);

		printf("‚¨‘E‚ß“x : ");
		for (int i = 0; i < data[i].point; i++)
		{
			printf("š ");
		}
		printf("\n");

		printf("ŒÂ” : %d ŒÂ\n", data[i].number);

		printf("‹àŠz : \\%d-", data[i].price * data[i].number);

		kei += data[i].price * data[i].number;
		
		printf("\n\n");
	}
	printf("‡Œv‹àŠz = \\%d-", kei);
}