// 1103003 kadai095.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int kei = 0, hei = 0,i;
	printf("配列 a =");
	for (i = 0; i < 10; i++) {
		printf(" %d", a[i]);
		kei += a[i];
	}
	hei = kei / i;
	printf("\n合計 = %d\t平均 = %d\n", kei, hei);

	kei = 0; hei = 0;
	printf("配列 b =");
	for (i = 0; i < 10; i++) {
		printf(" %d", b[i]);
		kei += b[i];
	}
	hei = kei / i;
	printf("\n合計 = %d\t平均 = %d\n", kei, hei);
}