//ex098..c ‰ð“š
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
	struct ken	ken_data[] = {{1,"–kŠC“¹",NULL},
							{2,"ÂXŒ§",NULL},
							{3,"ŠâŽèŒ§",NULL},
							{4,"‹{éŒ§",NULL},
							{5,"H“cŒ§",NULL},
							{6,"ŽRŒ`Œ§",NULL},
							{7,"•Ÿ“‡Œ§",NULL},
							{data_end,"",NULL},
							{28,"•ºŒÉŒ§",NULL}};

	struct ken* p, * wp;

	//ƒŠƒ“ƒNÝ’è
	p = wp = ken_data;

	do
	{
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != data_end);

	//•ºŒÉŒ§‚ÌƒAƒhƒŒƒXŽw’è
	p++;

	//–kŠC“¹‚Ì next ‚É•ºŒÉŒ§‚ÌƒAƒhƒŒƒX‚ð“ü‚ê‚é
	//wp ‚É–kŠC“¹‚ÌƒAƒhƒŒƒX‚ð“ü‚ê‚é
	wp = ken_data;
	wp->next = p;

	//•ºŒÉŒ§‚Ì next ‚ÉÂXŒ§‚ÌƒAƒhƒŒƒX‚ð“ü‚ê‚é
	p->next = wp + 1;

	for (p = ken_data; p->code != data_end; p = p->next)
	{
		printf("code = %d\tname = %s\n", p->code, p->name);
	}


}