#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl;
	p_tbl = &tbl[0][1];
	for (int j = 0; j < 3; j++)
	{
		printf("%d ", *p_tbl);
		p_tbl += 3;
	}

}