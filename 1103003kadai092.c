//1103003 kadai092.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	int i;
	printf("配列 a から配列 c にコピー\n");
	printf("配列 a =");
	for (i = 0; i < 10; i++) {
		printf(" %d", a[i]);
	}
	printf("\n配列 c =");
	for (i = 0; i < 10; i++) {
		c[i] = a[i];
		printf(" %d", c[i]);
	}

}