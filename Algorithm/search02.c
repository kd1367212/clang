#include<stdio.h>
main()
{
	int d[] = { 10,5,30,77,16,3,47,29,37,33,55 };
	int s, i;
	printf("’Tõ’l s ‚ð“ü—Í>>>"); scanf("%d", &s);
	d[10] = s;
	for (i = 0; i < 11; i++) {
		if (d[i] == s)break;
	}

	if (i == 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("%d", i);
	}
}