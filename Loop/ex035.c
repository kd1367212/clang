#include<stdio.h>
main()
{
	int su, kei;
	kei = 0;
	while (1) {
		printf("�������� : "); scanf("%d", &su);
		if (su == -999)break;
		kei += su;
	}
	printf("���v=%d", kei);
}