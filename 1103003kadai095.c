// 1103003 kadai095.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int kei = 0, hei = 0,i;
	printf("�z�� a =");
	for (i = 0; i < 10; i++) {
		printf(" %d", a[i]);
		kei += a[i];
	}
	hei = kei / i;
	printf("\n���v = %d\t���� = %d\n", kei, hei);

	kei = 0; hei = 0;
	printf("�z�� b =");
	for (i = 0; i < 10; i++) {
		printf(" %d", b[i]);
		kei += b[i];
	}
	hei = kei / i;
	printf("\n���v = %d\t���� = %d\n", kei, hei);
}