#include<stdio.h>
main()
{
	char s[100];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(100šˆÈ“à)>>>"); scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] += 0x01;
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA");
	for (i = 0; s[i] != '\0'; i++) {
		printf("%c", s[i]);
	}
}