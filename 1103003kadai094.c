// 1103003 kadai094.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 }, c[10];
	int i;
	printf("�z�� a �Ɣz�� b �����������\n");
	printf("�z�� a =");
	for (i = 0; i < 10; i++) {
		c[i] = b[i];
		b[i] = a[i];
		a[i] = c[i];
		printf(" %d", a[i]);
	}
	printf("\n�z�� b =");
	for (i = 0; i < 10; i++) {
		printf(" %d", b[i]);
	}
}