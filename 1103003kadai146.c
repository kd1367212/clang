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
		printf("���i�� : %s\n", p->name);

		printf("���i : %d �~\n", p->price);

		printf("���E�ߓx : ");
		for (int i = 0; i < p->point; i++)
		{
			printf("�� ");
		}
		printf("\n");

		printf("�� : %d ��\n", p->number);

		printf("���z : \\%d-", p->price * p->number);

		*p_kei += p->price * p->number;
		
		printf("\n\n");
	}
	printf("���v���z = \\%d-", *p_kei);
}