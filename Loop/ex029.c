#include<stdio.h>
main()
{
	int flag, su;
	flag = 0;
	printf("数を入れて:"); scanf("%d", &su);
	while (flag < su){
		flag++;
		printf("*");
	}
}