#include<stdio.h>
main()
{
	float box[3], kei, hei;
	kei = 0; hei = 0;
	int i;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í : "); scanf("%f", &box[i]);
		kei += box[i];
	}
	printf("‡Œv‚Í %.2f", kei);
	printf("•½‹Ï‚Í %.2f", kei / 3);
}