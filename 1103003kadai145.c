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
		printf("���i�� : %s\n", data[i].name);

		printf("���i : %d �~\n", data[i].price);

		printf("���E�ߓx : ");
		for (int i = 0; i < data[i].point; i++)
		{
			printf("�� ");
		}
		printf("\n");

		printf("�� : %d ��\n", data[i].number);

		printf("���z : \\%d-", data[i].price * data[i].number);

		kei += data[i].price * data[i].number;
		
		printf("\n\n");
	}
	printf("���v���z = \\%d-", kei);
}