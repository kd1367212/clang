//1103003 kadai13b.c
#include<stdio.h>
void display(char *ji);

main()
{
	char moji[] = "test program";
	display(moji);
}

void display(char *ji)
{
	printf("%s", ji);
}