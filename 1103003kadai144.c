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

	printf("���i�� : %s\n", p->name);

	printf("���i : %d �~\n",p->price);

	printf("���E�ߓx : ");
	for (int i = 0; i < p->point; i++)
	{
		printf("�� ");
	}
	printf("\n");

	printf("�� : %d ��\n", p->number);

	printf("���z : \\%d-", p->price * p->number);
}