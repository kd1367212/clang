//ex098..c ��
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
							{data_end,"",NULL},
							{28,"���Ɍ�",NULL}};

	struct ken* p, * wp;

	//�����N�ݒ�
	p = wp = ken_data;

	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != data_end);

	//���Ɍ��̃A�h���X�w��
	p++;

	//�k�C���� next �ɕ��Ɍ��̃A�h���X������
	//wp �ɖk�C���̃A�h���X������
	wp = ken_data;
	wp->next = p;

	//���Ɍ��� next �ɐX���̃A�h���X������
	p->next = wp + 1;

	for (p = ken_data; p->code != data_end; p = p->next)
	{
		printf("code = %d\tname = %s\n", p->code, p->name);
	}


}