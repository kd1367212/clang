// 1103003 kadai032.c
#include<stdio.h>
main()
{
	int su;
	printf("整数？"); scanf("%d%", &su);
	if (su % 2 == 0){
		printf("その数は「偶数」です");
	}
	else {
		printf("その数は「奇数」です");
	}
}