//ex087.c ��
#include<stdio.h>

//�֐�atoi���g�����߂ɌĂяo��
#include<stdlib.h>

main(char* su[])
{
	int a, b;
	a = atoi(su[1]);
	b = atoi(su[2]);
	printf("%d + %d = %d", a, b, a + b);
}