#include<stdio.h>
main()
{
	int flag, su;
	flag = 0;
	printf("��������:"); scanf("%d", &su);
	while (flag < su){
		flag++;
		printf("*");
	}
}