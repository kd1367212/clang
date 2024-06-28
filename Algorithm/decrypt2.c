#include<stdio.h>
main()
{
	char d[21];
	int k[21], s, i;
	printf("ˆÃ†‰»‚µ‚½•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>>>"); scanf("%s", &d);
	for (i = 0; d[i] != '\0'; i++) {
		printf("•œ†ƒL[%d>>>", i + 1); scanf("%x", &k[i]);
		d[i] -= k[i];
	}
	printf("•œ†Ï‚İ•¶š—ñ‚ÍA");
	for (i = 0; d[i] != '\0'; i++) {
		printf("%c", d[i]);
	}
}