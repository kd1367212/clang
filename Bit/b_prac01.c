#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define Skil_Num 3
#define Mob_Num 3

enum BitState
{
	Base =0,		//00000000 通常状態
	Poison =1<<0,	//00000001 毒状態
	Sleep=1<<1,		//00000010 眠り状態
	Paralysis=1<2,	//00000100 麻痺状態
	Burn=1<<3,		//00001000 火傷状態
	AtkUp=1<<4,		//00010000 攻撃力アップ状態
	AtkDown=1<<5	//00100000 攻撃力ダウン状態
};

typedef struct
{
	char name[20];	//スキル名
	int type;		//スキルの種類(0 : HP回復、1 : AtkUp、2 : )
	int use_mp;		//使用 MP 量
	int effect;		//スキル効果
}Skill;

typedef struct
{
	char name[20];	//名前
	int hp;			//HP
	int atk;		//攻撃力
	int def;		//防御力
	UINT bitstate;	//状態
}Spec;

typedef struct
{
	Spec sp;				//Spec型構造体
	int maxhp;				//最大HP
	int mp;					//MP
	Skill skl[Skil_Num];	//Skill型構造体
}Chara;

typedef struct
{
	Spec sp;	//Spec型構造体
	int rate;	//状態異常攻撃発生レート %表記
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
	printf("***現在の状態***\n");

	if (s & Poison)
	{
		printf("毒\n");
	}

	if (s & Sleep)
	{
		printf("睡眠\n");
	}

	if (s & Paralysis)
	{
		printf("麻痺\n");
	}

	if (s & Burn)
	{
		printf("火傷\n");
	}

	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}

	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}

	if (s == Base)
	{
		printf("通常状態\n");
	}

	printf("***********\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("どの状態にしますか？\n");

		printf("1 : 毒 2 : 睡眠 3 : 麻痺 4 : 火傷 5 : 攻撃up 6 : 攻撃↓ 0 : 終了>>>");
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
		printf("どの状態を解除しますか？\n");
		printf("1 : 毒 2 : 睡眠 3 : 麻痺 4 : 火傷 5 : 攻撃↑ 6 : 攻撃↓ 7 : 全解除 0 : 終了>>>");
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