#include<stdio.h>
main()
{
	int su, cnt, i;
	cnt = 0;
	printf("”‚ÍH"); scanf("%d", &su);
	do {
		for (i = 5; i > 0; i--) {
			printf("*");
		}
		printf("\n");
		cnt++;
	} while (su > cnt);
}