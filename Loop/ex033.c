#include<stdio.h>
main()
{
	int su; float cnt, kei;
	kei = 0;
	printf("”‚ÍH "); scanf("%d", &su);
	for (cnt = 0; su != -999; cnt++) {
		kei += su;
		printf("”‚ÍH "); scanf("%d", &su);
	}
	printf("‡Œv = %.0f\t", kei);
	printf("•½‹Ï = %.2f", kei / cnt);
}