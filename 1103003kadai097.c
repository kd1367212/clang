// 1103003 kadai097.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 }, c[10];
	int i;
	printf("”z—ñ a =");
	for (i = 0; i < 10; i++) {
		c[i] = a[9 - i];
		printf(" %d", a[i]);
	}
	printf("\n”z—ñ c =");
	for (i = 0; i < 10; i++) {
		printf(" %d", c[i]);
	}
}