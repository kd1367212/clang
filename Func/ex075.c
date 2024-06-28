//ex075.c 解答
#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);

main()
{
	int a, b, c, d, e, f;
	printf("数値１？："); scanf("%d", &a);
	printf("数値２？："); scanf("%d", &b);

	shisoku(a, b, &c, &d, &e, &f);

	puts("数値１と数値２の四則演算");
	printf("wa = %d sa = %d seki = %d syo = %d", c, d, e, f);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo)
{
	//wa に c のアドレスが格納
	*wa = x + y;

	//sa に d のアドレスが格納
	*sa = x - y;

	//sk に e のアドレスが格納
	*sk = x * y;

	//syo に f のアドレスが格納
	*syo = x / y;
	return;
}