#include<stdio.h>
main()
{
	float box[3], kei, hei;
	kei = 0; hei = 0;
	int i;
	for (i = 0; i < 3; i++) {
		printf("��������� : "); scanf("%f", &box[i]);
		kei += box[i];
	}
	printf("���v�� %.2f", kei);
	printf("���ς� %.2f", kei / 3);
}