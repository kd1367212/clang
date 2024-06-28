//ex071.c 解答
#include<stdio.h>
int gokei(int a,int b,int c); //プロトタイプ宣言
float heikin(int a,int b,int c);
main()
{
	int a, b, c;
	int kei; float hei;
	printf("整数を３つ入力："); scanf("%d%d%d", &a, &b, &c);

	kei = gokei(a, b, c);
	hei = heikin(a, b, c);

	printf("合計は %d、平均は %.2f", kei, hei);
}

int gokei(int a,int b,int c)
{
	return(a + b + c);
}

float heikin(int a, int b, int c)
{
	return((float)(a+b+c)/3);
}