#include<stdio.h>
main()
{
	int su, sa,i,j;
	cnt = 0; i = 1;
	printf("”‚ÍH"); scanf("%d", &su);
	do {
		sa = su - i;

		while (sa > 0) {
			printf(" ");
			sa--;
		}

		for (j = i; j > 0; j--) {
			printf("*");
		}

		printf("\n");
		i++;

	} while (su >= i);
}nv