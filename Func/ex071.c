//ex071.c ��
#include<stdio.h>
int gokei(int a,int b,int c); //�v���g�^�C�v�錾
float heikin(int a,int b,int c);
main()
{
	int a, b, c;
	int kei; float hei;
	printf("�������R���́F"); scanf("%d%d%d", &a, &b, &c);

	kei = gokei(a, b, c);
	hei = heikin(a, b, c);

	printf("���v�� %d�A���ς� %.2f", kei, hei);
}

int gokei(int a,int b,int c)
{
	return(a + b + c);
}

float heikin(int a, int b, int c)
{
	return((float)(a+b+c)/3);
}