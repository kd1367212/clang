//1103003 kadai12i.c
#include<stdio.h>
main()
{
	char data1[] = "mikan";
	char data2[256];

	char* p_data1;
	char* p_data2;

	p_data1 = data1;
	p_data2 = data2;

	for (; *p_data1 != '\0'; p_data1++, p_data2++)
	{
		*p_data2 = *p_data1;
	}
	*p_data2 = '\0';

	p_data2 = data2;

	printf("”z—ñ“à—e = %s", p_data2);
}