// 1103003 kadai098.c
#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int max = 0, min = 999;
	int i, j;
	printf("�z�� data = ");
	for (i = 0; i < 10; i++) {
		printf(" %d", data[i]);
		if (data[i] > max) {
			j = i; max = data[i];
		}
	}
	printf("\n�ő�l = %d\t", data[j]);
	j = 0;
	for (i = 0; i < 10; i++) {
		if (data[i] < min) {
			j = i; min = data[i];
		}
	}
	printf("�ŏ��l = %d", data[j]);
}