//ex094-1.c 解答
#include<stdio.h>

//strcmp 関数を使うためによびだす
#include<string.h>

struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
};

struct d
{
	int nen;
	int tuki;
	int hi;
};


main()
{
	struct profile people[5] = { {"tanaka",{2001,2,1},"A"},
								{"nakata",{2002,4,12 },"B"},
								{"katana",{2003,1,31},"AB"},
								{"nataka",{2004,2,28},"AB"},
								{"kanata",{2005,5,8},"B"} };
	struct profile* p_people;

	struct d date;
	struct d* p_date;

	p_people = people;
	p_date = &date;
	
	for (int i = 0; i < 5; i++, p_people++)
	{
		p_date->nen = p_people->birth[0];
		p_date->tuki = p_people->birth[1];
		p_date->hi = p_people->birth[2];

		if (p_date->tuki==2)
		{
			printf("%s\t", p_people->name);
			printf("%d 年 %02d 月 %02d 日生まれ 血液型 %s 型\n", p_date->nen,
				p_date->tuki, p_date->hi, p_people->blood);
		}
	}
}