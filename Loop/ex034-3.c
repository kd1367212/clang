#include<stdio.h>
main()
{
	int su, cnt, i;
	cnt = 0;
	printf("”‚ÍH", &su); scanf("%d", &su);
	do {
		for (i = 0; i <= cnt; i++) {
			printf("*");
		}
		printf("\n");
		cnt++;
	} while (su > cnt);
}