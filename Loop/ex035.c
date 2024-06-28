#include<stdio.h>
main()
{
	int su, kei;
	kei = 0;
	while (1) {
		printf("”‚ğ“ü‚ê‚Ä : "); scanf("%d", &su);
		if (su == -999)break;
		kei += su;
	}
	printf("‡Œv=%d", kei);
}