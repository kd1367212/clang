//ex081.c ��
#include<stdio.h>

#define last 8
void maxmin(int d[],int *max,int *min);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	
	//maxmin �֐��ɂ��� if �����K�����͒ʂ�悤�ɂ���
	int max=0, min=999;

	maxmin(data, &max, &min);

	//�\��
	printf("�ő�l = %d\n�ŏ��l  = %d", max, min);
}

void maxmin(int d[], int* max, int* min)
{
	for (int i = 0; i < last; i++)
	{
		if (d[i]>*max)
		{
			*max = d[i];
		}
		
		if (d[i] < *min)
		{
			*min = d[i];
		}
	}
}