#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Skil_Num 3
#define Mob_Num 3

enum BitState
{
	Base =0,		//00000000 �ʏ���
	Poison =1<<0,	//00000001 �ŏ��
	Sleep=1<<1,		//00000010 ������
	Paralysis=1<2,	//00000100 ��჏��
	Burn=1<<3,		//00001000 �Ώ����
	AtkUp=1<<4,		//00010000 �U���̓A�b�v���
	AtkDown=1<<5	//00100000 �U���̓_�E�����
};

typedef struct
{
	char name[20];	//�X�L����
	int type;		//�X�L���̎��(0 : HP�񕜁A1 : AtkUp�A2 : )
	int use_mp;		//�g�p MP ��
	int effect;		//�X�L������
}Skill;

typedef struct
{
	char name[20];	//���O
	int hp;			//HP
	int atk;		//�U����
	int def;		//�h���
	UINT bitstate;	//���
}Spec;

typedef struct
{
	Spec sp;				//Spec�^�\����
	int maxhp;				//�ő�HP
	int mp;					//MP
	Skill skl[Skil_Num];	//Skill�^�\����
}Chara;

typedef struct
{
	Spec sp;	//Spec�^�\����
	int rate;	//��Ԉُ�U���������[�g %�\�L
}Mob;

typedef unsigned int UINT;

void DisplayStatus(UINT s);

void ChangeFlag(UINT* s);

void ClearFlag(UINT* a);

main()
{
	UINT myState = Base;

	ChangeFlag(&myState);

	DisplayStatus(myState);

	ClearFlag(&myState);

	DisplayStatus(myState);
}

void DisplayStatus(UINT s)
{
	printf("***���݂̏��***\n");

	if (s & Poison)
	{
		printf("��\n");
	}

	if (s & Sleep)
	{
		printf("����\n");
	}

	if (s & Paralysis)
	{
		printf("���\n");
	}

	if (s & Burn)
	{
		printf("�Ώ�\n");
	}

	if (s & AtkUp)
	{
		printf("�U���̓A�b�v\n");
	}

	if (s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}

	if (s == Base)
	{
		printf("�ʏ���\n");
	}

	printf("***********\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂����H\n");

		printf("1 : �� 2 : ���� 3 : ��� 4 : �Ώ� 5 : �U��up 6 : �U���� 0 : �I��>>>");
		scanf("%d", &a);

		if (a == 0)break;

		switch (a)
		{
		case 1:
			*s |= Poison;
			break;

		case 2:
			*s |= Sleep;
			break;

		case 3:
			*s |= Paralysis;
			break;

		case 4:
			*s |= Burn;
			break;

		case 5:
			*s |= AtkUp;
			break;

		case 6:
			*s |= AtkDown;
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;

	while (1)
	{
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1 : �� 2 : ���� 3 : ��� 4 : �Ώ� 5 : �U���� 6 : �U���� 7 : �S���� 0 : �I��>>>");
		scanf("%d", &a);

		if (a == 0)break;

		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;

		case 2:
			*s &= ~Sleep;
			break;

		case 3:
			*s &= ~Paralysis;
			break;

		case 4:
			*s &= ~Burn;
			break;

		case 5:
			*s &= ~AtkUp;
			break;

		case 6:
			*s &= ~AtkDown;
			break;

		case 7:
			*s &= Base	;
			break;
		}
	}
}