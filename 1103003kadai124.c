#include<stdio.h>
main()
{
	char c, * p_c=&c;
	printf("�P��������"); scanf("%c", &c);
	c += 0x01;
	printf("���̕����� %c", *p_c);
}