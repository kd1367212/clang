#include<stdio.h>
main()
{
	int d[] = { 10,5,30,77,16,3,47,29,37,33 };
	int s, i;
	printf("’Tõ’l s ‚ð“ü—Í>>>"); scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		if (d[i] == s)break;
	}
	if (i == 10) {
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½");
	}
	else {
		printf("%d", i);
	}
}