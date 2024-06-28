// 1103003 kadai071.c
#include<stdio.h>
main()
{
	int ia, ib; char flag;
	printf("®”‚PH"); scanf("%d", &ia);
	printf("®”‚QH"); scanf("%d", &ib);
	printf("‰‰ZqH");
	scanf("%c", &flag);
	switch (flag) {
	case '+':
		printf("%d + %d = %d", ia, ib, ia + ib);
		break;

	case '-':
		printf("%d - %d = %d", ia, ib, ia - ib);
		break;

	case '*':
		printf("%d * %d = %d", ia, ib, ia * ib);
		break;

	case '/':
		printf("%d / %d = %d", ia, ib, ia / ib);
		break;

	case '%':
		printf("%d % %d = %d", ia, ib, ia % ib);
		break;
	}
}