#include<stdio.h>
void display1(int n1);//プロトタイプ宣言　値渡し
void display2(int* n2);//プロトタイプ宣言　アドレス渡し

main()
{
	int a, b;
	printf("数値１？："); scanf("%d", &a);
	display1(a);
	printf("a = %d\n\n", a);

	printf("数値２？："); scanf("%d", &b);
	display2(&b);
	printf("b = %d", b);
}

void display1(int n1)
{
	printf("数値aは、%dです。\n", n1);
	n1 += 10;
	return;
}

void display2(int* n2)
{
	printf("数値bは、%dです。\n", *n2);
	*n2 += 10;
	return;
}