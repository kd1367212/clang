//ex079.c ��
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
		//�z��̐擪�A�h���X���� i �Ԗڂ��w��
		gokei += tbl[i];
	}
	return(gokei);
}