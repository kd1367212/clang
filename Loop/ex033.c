#include<stdio.h>
main()
{
	int su; float cnt, kei;
	kei = 0;
	printf("���́H "); scanf("%d", &su);
	for (cnt = 0; su != -999; cnt++) {
		kei += su;
		printf("���́H "); scanf("%d", &su);
	}
	printf("���v = %.0f\t", kei);
	printf("���� = %.2f", kei / cnt);
}