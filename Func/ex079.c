//ex079.c 解答
#include<stdio.h>

int tbl_gokei3(int tbl[], int number);

main()
{
	int a[] = { 10,20,30,40,50 },gokei;
	gokei = tbl_gokei3(a, 5);
	printf("gokei = %d", gokei);
}

int tbl_gokei3(int tbl[], int number)
{
	int gokei=0;
	for (int i = 0; i < number; i++)
	{
		//配列の先頭アドレスから i 番目を指定
		gokei += tbl[i];
	}
	return(gokei);
}