//ex087.c 解答
#include<stdio.h>

//関数atoiを使うために呼び出す
#include<stdlib.h>

main(char* su[])
{
	int a, b;
	a = atoi(su[1]);
	b = atoi(su[2]);
	printf("%d + %d = %d", a, b, a + b);
}