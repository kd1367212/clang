// 1103003 kadai024.c
#include<stdio.h>
main()
{
	int ia, ib; printf("2つの数値？");
	scanf("%d %d", &ia, &ib);
	printf("*** 25 と 3 の 四則演算 ***\n");
	printf("25 + 3 = %d\n", ia + ib);
	printf("25 - 3 = %d\n", ia - ib);
	printf("25 * 3 = %d\n", ia * ib);
	printf("25 / 3 = %d あまり %d", ia / ib,ia %ib);
}