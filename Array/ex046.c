#include<stdio.h>
main()
{
	int i, j, gokei;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (i = 0, gokei = 0; i <= 1; i++) {
		gokei = 0;
		for (j = 0; j <= 2; j++) {
			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
			gokei += a[i][j];
		}
		printf("%d 行目の合計 = %d\n\n",i, gokei);
	}
}