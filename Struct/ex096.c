//ex096.c ‰ð“š
#include<stdio.h>

struct syohin_data
{
	char name[20];
	int tanka;
};

void display1(int a);
void display2(struct syohin_data syohin);
void display3(struct syohin_data *p_syohin);

main()
{
	int a = 10;
	struct syohin_data syohin = { "ƒPƒVƒSƒ€",50 };
	display1(a);
	display2(syohin);
	display3(&syohin);
}

void display1(int a)
{
	printf("a = %d\n", a);
}

void display2(struct syohin_data syohin)
{
	printf("syohin.namae = %s\tsyohin.tanka = %d\n", syohin.name, syohin.tanka);
}

void display3(struct syohin_data *p_syohin)
{
	printf("%s\t%d", p_syohin->name, p_syohin->tanka);
}