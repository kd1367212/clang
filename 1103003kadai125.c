// 1103003 kadai125.c
#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_data=data;

	printf("�|�C���^���Œ�ŕ\��\n�z�� data[ ] = ");
	for (int i = 0; data[i] != -999; i++)
	{
		printf("%d ", *(p_data + i));
	}

	printf("\n�|�C���^��ω������ĕ\��\n�z�� data[ ] = ");
	for (p_data = data; *p_data != -999; p_data++)
	{
		printf("%d ", *p_data);
	}
}