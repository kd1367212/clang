//ex094.c 解答
#include<stdio.h>

//strcmp 関数を使うためによびだす
#include<string.h>

#define nin 2

struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
}

main()
{
	struct profile people[nin];
	struct profile* p;

	p = people;

	//キーボードから入力
	for (int i = 0; i < nin; i++,p++)
	{
		printf("%d 人目 (名前) : ", i+1); scanf("%s",p->name);
		printf("%d 人目 (生年月日)", i+1); scanf("%d %d %d", &p->birth[0],
			&p->birth[1], &p->birth[2]);
		printf("%d 人目 (血液型) : ", i+1); scanf("%s",p->blood);
	}

	p = people;
	
	for (int i = 0; i < nin; i++, p++)
	{
		if (strcmp(p->blood,"A") == 0)
		{
			printf("%s\t", p->name);
			printf("%d 年 %02d 月 %02d 日生まれ 血液型 %s 型\n", p->birth[0],
				p->birth[1], p->birth[2], p->blood);
		}
	}
}