#include<stdio.h>
main()
{
	float su1, su2, su3;
	printf("1�ڂ̎���:"); scanf("%f", &su1);
	printf("2�ڂ̎���:"); scanf("%f", &su2);
	printf("3�ڂ̎���:"); scanf("%f", &su3);
	printf("���v=%f ����=%f", su1 + su2 + su3, (su1 + su2 + su3) / 3);
}