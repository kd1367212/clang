#include<stdio.h>
main()
{
	int su, ia;
	ia = 0;
	printf("��������:"); scanf("%d", &su);
	while (ia <= 10) {
		printf("%d + %d = %d\n", su, ia, su + ia);
		ia++;
	}
}