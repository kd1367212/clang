#include<stdio.h>
#define data_end -1

struct ken
{
	int code;
	char name[20];
	struct ken* next;
};

main()
{
	struct ken	ken_data[] = {{1,"�k�C��",NULL},
							{2,"�X��",NULL},
							{3,"��茧",NULL},
							{4,"�{�錧",NULL},
							{5,"�H�c��",NULL},
							{6,"�R�`��",NULL},
							{7,"������",NULL},
							{data_end,"",NULL} };

	struct ken* p, * wp;

	//�����N�ݒ�
	p = wp = ken_data;

	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != data_end);

	for (p = ken_data; p->code != data_end; p = p->next)
	{
		printf("code = %d\tname = %s\n", p->code, p->name);
	}


}