#include<stdio.h>
main()
{
	float su1, su2, su3;
	printf("������3����"); scanf("%f %f %f", &su1, &su2, &su3);
	printf("���v=%.0f ����=%.2f", (su1 + su2 + su3), (su1 + su2 + su3) / 3);
}