// 1103003 kadai036.c
#include<stdio.h>
main()
{
	int su1, su2;
	printf("整数１？"); scanf("%d", &su1);
	printf("整数２？"); scanf("%d", &su2);
	if (su1 == su2) {
		printf("%d と %d は等しい", su1, su2);
	}
	else if (su1 > su2) {
		printf("%d の方が %d より %d 大きい", su1, su2, su1 - su2);
	}
	else {
		printf("%d の方が %d より %d 小さい", su1, su2, su2 - su1);
	}
}