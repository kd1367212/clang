// 1103003 kadai031.c
#include<stdio.h>
main()
{
	float su1, su2;
	printf("２つの実数値？"); scanf("%f %f", &su1, &su2);
	if (su1 > su2) {
		printf("大きい方は = %f", su1);
	}
	else {
		printf("大きい方は = %f", su2);
	}
}