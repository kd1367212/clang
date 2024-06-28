//ex100.c ‰ð“š
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
	int furagu;
	do
	{
		printf("‚PF•\Ž¦ ‚QF’Ç‰Á ‚RFíœ ‚XFI—¹"); scanf("%d", &furagu);
		if (furagu == 1)
		{
			struct ken	ken_data[] = { {1,"–kŠC“¹",NULL},
									{2,"ÂXŒ§",NULL},
									{3,"ŠâŽèŒ§",NULL},
									{4,"‹{éŒ§",NULL},
									{5,"H“cŒ§",NULL},
									{6,"ŽRŒ`Œ§",NULL},
									{7,"•Ÿ“‡Œ§",NULL},
									{data_end,"",NULL} };

			struct ken* p, * wp;

			//ƒŠƒ“ƒNÝ’è
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

		else if (furagu == 2)
		{

		}

		else if (furagu == 3)
		{

		}

	} while (furagu != 9);
}