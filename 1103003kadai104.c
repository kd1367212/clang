// 1103003 kadai104.c
#include<stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };

	//����ւ�����
	int w;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			w = a[i][j];
			a[i][j] = b[i][j];
			b[i][j] = w;
		}
	}

	printf("�z�� a\n");
	for (int j = 0; j < 5; j++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf("%d ", a[j][k]);
		}
		printf("\n");
	}

	printf("�z�� b\n");
	for (int j = 0; j < 5; j++)
	{
		for (int k = 0; k < 5; k++)
		{
			printf("%d ", b[j][k]);
		}
		printf("\n");
	}
}