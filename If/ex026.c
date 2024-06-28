#include<stdio.h>
main()
{
	int mm;
	printf("Œ‚ğ“ü—Í:"); scanf("%d", &mm);
	if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
		printf("ÅI“ú‚Í 31 “ú‚Å‚·");
	}
	else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
		printf("ÅI“ú‚Í 30 “ú‚Å‚·");
	}
	else {
		printf("ÅI“ú‚Í 29 “ú‚Å‚·");
	}
}