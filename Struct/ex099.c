//ex099.c ��
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

	
	//�X���� next �����o�̒l���{�錧�̃A�h���X�ɕύX
	//�|�C���^ p �� ken_data �̐擪�A�h���X�������
	p = ken_data;

	//�|�C���^ p ���g���ĐX���̃A�h���X�����߂�
	p++;

	//�X���� p->next �ɋ{�錧�̃A�h���X����(p ���g��)
	p->next = p + 2;


	for (p = ken_data; p->code != data_end; p = p->next)
	{
		printf("code = %d\tname = %s\n", p->code, p->name);
	}


}