#include<stdio.h>
main()
{
	int su1, su2,siki;
	printf("演算子を入力:"); scanf("%d",&siki);
	printf("２つの整数を入力:"); scanf("%d %d", &su1, &su2);
	if (siki == 1) {
		printf("%d", su1 + su2);
	}
	else if (siki == 2) {
		printf("%d", su1 - su2);
	}
	else if (siki == 3) {
		printf("%d", su1 * su2);
	}
	else if(siki == 4){
		printf("%d", su1 / su2);
	}
	else {
		printf("演算子がエラーです");
	}
}