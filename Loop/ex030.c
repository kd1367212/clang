#include<stdio.h>
main()
{
	int su, ia;
	ia = 0;
	printf("数を入れて:"); scanf("%d", &su);
	while (ia <= 10) {
		printf("%d + %d = %d\n", su, ia, su + ia);
		ia++;
	}
}