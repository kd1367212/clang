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

	printf("���i�� : %s\n", data.name);

	printf("���i : %d �~\n", data.price);

	printf("���E�ߓx : ");
	for (int i = 0; i < data.point; i++)
	{
		printf("�� ");
	}
	printf("\n");

	printf("�� : %d ��\n", data.number);

	printf("���z : \\%d-", data.price * data.number);
}